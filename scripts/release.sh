#!/bin/bash

# exit when any command fails
set -e

VERSION="v0.1.0-rc"
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
REPO_DIR=$(dirname "$SCRIPT_DIR")

pushd "$REPO_DIR" > /dev/null

# check git available
git --version 2>&1 > /dev/null || { echo "git not found"; exit 1; }
# check python3 available
python3 --version 2>&1 > /dev/null || { echo "python3 not found"; exit 1; }

# update submodule
git submodule update --init --recursive

# generate rvv-intrinsic from `rvv-intrinsic-doc`
pushd "$REPO_DIR/rvv-intrinsic-doc/rvv-intrinsic-generator" > /dev/null
# install dependencies
python3 -m pip install -r requirements.txt
# add patch to not limit column width
git apply "$SCRIPT_DIR/clang-format.patch"
# generate rvv-intrinsic
make
popd > /dev/null

# check files
if [[ -e "${REPO_DIR}/rvv_intrinsic/intrinsic_funcs" ]]; then
    rm -rf "${REPO_DIR}/rvv_intrinsic/intrinsic_funcs"
fi
if [[ -e "${REPO_DIR}/rvv_intrinsic/overloaded_intrinsic_funcs" ]]; then
    rm -rf "${REPO_DIR}/rvv_intrinsic/overloaded_intrinsic_funcs"
fi
if [[ -e "${REPO_DIR}/rvv_intrinsic/policy_funcs" ]]; then
    rm -rf "${REPO_DIR}/rvv_intrinsic/policy_funcs"
fi
# generate header files
python3 "${REPO_DIR}/scripts/run.py"

# restore the rvv-intrinsic-doc repo
git -C "${REPO_DIR}/rvv-intrinsic-doc" checkout -- .

PACK_NAME="rvv-intrinsic_${VERSION}"
PACK_DIR="${REPO_DIR}/${PACK_NAME}"
# pack files
if [[ -e "$PACK_DIR" ]]; then
    rm -rf "${PACK_DIR}*"
fi
mkdir -p "$PACK_DIR"
cp -r "$REPO_DIR/rvv_intrinsic" "$PACK_DIR"
cp "$REPO_DIR/README.md" "$PACK_DIR"
cp "$REPO_DIR/LICENSE.txt" "$PACK_DIR"
cp "$REPO_DIR/scripts/configure.in" "${PACK_DIR}/configure"
chmod +x "${PACK_DIR}/configure"
# zip files
tar -czvf "${PACK_NAME}.tar.gz" -C "$REPO_DIR" "$PACK_NAME"
echo "pack file: $PACK_DIR.tar.gz done!"
# clean up
rm -rf "$PACK_DIR"

popd > /dev/null
