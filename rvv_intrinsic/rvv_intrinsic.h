#ifndef RVV_INTRINSIC_H
#define RVV_INTRINSIC_H

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;

#if defined(__riscv_vector)
#include <riscv_vector.h>

#if defined(__riscv_zvfh)
#define SUPPORT_VEC_F16
#endif

#if defined(__riscv_v) || defined(__riscv_zve64d)
#define SUPPORT_VEC_64D
#define SUPPORT_VEC_64F
#define SUPPORT_VEC_64X
#define SUPPORT_VEC_32F
#define SUPPORT_VEC_32X
#elif defined(__riscv_zve64f)
#define SUPPORT_VEC_64F
#define SUPPORT_VEC_64X
#define SUPPORT_VEC_32F
#define SUPPORT_VEC_32X
#elif defined(__riscv_zve64x)
#define SUPPORT_VEC_64X
#define SUPPORT_VEC_32X
#elif defined(__riscv_zve32f)
#define SUPPORT_VEC_32F
#define SUPPORT_VEC_32X
#elif defined(__riscv_zve32x)
#define SUPPORT_VEC_32X
#endif // defined(__riscv_v) || defined(__riscv_zve64d)

#endif // defined(__riscv_vector)

#if defined(SUPPORT_VEC_F16)
#include "intrinsic_funcs/zfh_zvfh_zve32f/01_vector_loads_and_stores_functions.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/05_vector_integer_arithmetic_functions.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/06_vector_fixed-point_arithmetic_functions.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/07_vector_floating-point_functions.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/08_vector_reduction_functions.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/09_vector_mask_functions.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/10_vector_permutation_functions.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/11_miscellaneous_vector_functions.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/01_vector_loads_and_stores_functions.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/05_vector_integer_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/06_vector_fixed-point_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/07_vector_floating-point_functions.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/08_vector_reduction_functions.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/09_vector_mask_functions.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/10_vector_permutation_functions.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/11_miscellaneous_vector_functions.h"
#endif // defined(SUPPORT_VEC_F16)

#if defined(SUPPORT_VEC_32X)
#include "intrinsic_funcs/zve32x/01_vector_loads_and_stores_functions.h"
#include "intrinsic_funcs/zve32x/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve32x/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve32x/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve32x/05_vector_integer_arithmetic_functions.h"
#include "intrinsic_funcs/zve32x/06_vector_fixed-point_arithmetic_functions.h"
#include "intrinsic_funcs/zve32x/07_vector_floating-point_functions.h"
#include "intrinsic_funcs/zve32x/08_vector_reduction_functions.h"
#include "intrinsic_funcs/zve32x/09_vector_mask_functions.h"
#include "intrinsic_funcs/zve32x/10_vector_permutation_functions.h"
#include "intrinsic_funcs/zve32x/11_miscellaneous_vector_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32x/01_vector_loads_and_stores_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32x/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve32x/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve32x/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve32x/05_vector_integer_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32x/06_vector_fixed-point_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32x/07_vector_floating-point_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32x/08_vector_reduction_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32x/09_vector_mask_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32x/10_vector_permutation_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32x/11_miscellaneous_vector_functions.h"
#endif // defined(SUPPORT_VEC_32X)

#if defined(SUPPORT_VEC_32F)
#include "intrinsic_funcs/zve32f/01_vector_loads_and_stores_functions.h"
#include "intrinsic_funcs/zve32f/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve32f/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve32f/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve32f/05_vector_integer_arithmetic_functions.h"
#include "intrinsic_funcs/zve32f/06_vector_fixed-point_arithmetic_functions.h"
#include "intrinsic_funcs/zve32f/07_vector_floating-point_functions.h"
#include "intrinsic_funcs/zve32f/08_vector_reduction_functions.h"
#include "intrinsic_funcs/zve32f/09_vector_mask_functions.h"
#include "intrinsic_funcs/zve32f/10_vector_permutation_functions.h"
#include "intrinsic_funcs/zve32f/11_miscellaneous_vector_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32f/01_vector_loads_and_stores_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32f/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve32f/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve32f/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve32f/05_vector_integer_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32f/06_vector_fixed-point_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32f/07_vector_floating-point_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32f/08_vector_reduction_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32f/09_vector_mask_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32f/10_vector_permutation_functions.h"
#include "policy_funcs/intrinsic_funcs/zve32f/11_miscellaneous_vector_functions.h"
#endif // defined(SUPPORT_VEC_32F)

#if defined(SUPPORT_VEC_64X)
#include "intrinsic_funcs/zve64x/01_vector_loads_and_stores_functions.h"
#include "intrinsic_funcs/zve64x/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64x/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64x/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64x/05_vector_integer_arithmetic_functions.h"
#include "intrinsic_funcs/zve64x/06_vector_fixed-point_arithmetic_functions.h"
#include "intrinsic_funcs/zve64x/07_vector_floating-point_functions.h"
#include "intrinsic_funcs/zve64x/08_vector_reduction_functions.h"
#include "intrinsic_funcs/zve64x/09_vector_mask_functions.h"
#include "intrinsic_funcs/zve64x/10_vector_permutation_functions.h"
#include "intrinsic_funcs/zve64x/11_miscellaneous_vector_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64x/01_vector_loads_and_stores_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64x/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64x/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64x/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64x/05_vector_integer_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64x/06_vector_fixed-point_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64x/07_vector_floating-point_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64x/08_vector_reduction_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64x/09_vector_mask_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64x/10_vector_permutation_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64x/11_miscellaneous_vector_functions.h"
#endif // defined(SUPPORT_VEC_64X)

#if defined(SUPPORT_VEC_64F)
#include "intrinsic_funcs/zve64f/01_vector_loads_and_stores_functions.h"
#include "intrinsic_funcs/zve64f/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64f/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64f/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64f/05_vector_integer_arithmetic_functions.h"
#include "intrinsic_funcs/zve64f/06_vector_fixed-point_arithmetic_functions.h"
#include "intrinsic_funcs/zve64f/07_vector_floating-point_functions.h"
#include "intrinsic_funcs/zve64f/08_vector_reduction_functions.h"
#include "intrinsic_funcs/zve64f/09_vector_mask_functions.h"
#include "intrinsic_funcs/zve64f/10_vector_permutation_functions.h"
#include "intrinsic_funcs/zve64f/11_miscellaneous_vector_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64f/01_vector_loads_and_stores_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64f/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64f/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64f/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64f/05_vector_integer_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64f/06_vector_fixed-point_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64f/07_vector_floating-point_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64f/08_vector_reduction_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64f/09_vector_mask_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64f/10_vector_permutation_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64f/11_miscellaneous_vector_functions.h"
#endif // defined(SUPPORT_VEC_64F)

#if defined(SUPPORT_VEC_64D)
#include "intrinsic_funcs/zve64d/01_vector_loads_and_stores_functions.h"
#include "intrinsic_funcs/zve64d/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64d/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64d/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "intrinsic_funcs/zve64d/05_vector_integer_arithmetic_functions.h"
#include "intrinsic_funcs/zve64d/06_vector_fixed-point_arithmetic_functions.h"
#include "intrinsic_funcs/zve64d/07_vector_floating-point_functions.h"
#include "intrinsic_funcs/zve64d/08_vector_reduction_functions.h"
#include "intrinsic_funcs/zve64d/09_vector_mask_functions.h"
#include "intrinsic_funcs/zve64d/10_vector_permutation_functions.h"
#include "intrinsic_funcs/zve64d/11_miscellaneous_vector_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64d/01_vector_loads_and_stores_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64d/02_vector_unit-stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64d/03_vector_stride_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64d/04_vector_indexed_segment_load_store_instructions_zvlsseg.h"
#include "policy_funcs/intrinsic_funcs/zve64d/05_vector_integer_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64d/06_vector_fixed-point_arithmetic_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64d/07_vector_floating-point_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64d/08_vector_reduction_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64d/09_vector_mask_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64d/10_vector_permutation_functions.h"
#include "policy_funcs/intrinsic_funcs/zve64d/11_miscellaneous_vector_functions.h"
#endif // defined(SUPPORT_VEC_64D)

#endif // RVV_INTRINSIC_H
