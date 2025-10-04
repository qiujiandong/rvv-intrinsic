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
#include "intrinsic_funcs/zfh_zvfh_zve32f/00_vector_loads_and_stores_intrinsics.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/01_vector_loads_and_stores_segment_intrinsics.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/02_vector_integer_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/04_vector_floating-point_intrinsics.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/05_vector_reduction_operations.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/06_vector_mask_intrinsics.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/07_vector_permutation_intrinsics.h"
#include "intrinsic_funcs/zfh_zvfh_zve32f/08_miscellaneous_vector_utility_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/00_vector_loads_and_stores_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/01_vector_loads_and_stores_segment_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/02_vector_integer_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/04_vector_floating-point_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/05_vector_reduction_operations.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/06_vector_mask_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/07_vector_permutation_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zfh_zvfh_zve32f/08_miscellaneous_vector_utility_intrinsics.h"
#endif // defined(SUPPORT_VEC_F16)

#if defined(SUPPORT_VEC_32X)
#include "intrinsic_funcs/zve32x/00_vector_loads_and_stores_intrinsics.h"
#include "intrinsic_funcs/zve32x/01_vector_loads_and_stores_segment_intrinsics.h"
#include "intrinsic_funcs/zve32x/02_vector_integer_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve32x/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve32x/04_vector_floating-point_intrinsics.h"
#include "intrinsic_funcs/zve32x/05_vector_reduction_operations.h"
#include "intrinsic_funcs/zve32x/06_vector_mask_intrinsics.h"
#include "intrinsic_funcs/zve32x/07_vector_permutation_intrinsics.h"
#include "intrinsic_funcs/zve32x/08_miscellaneous_vector_utility_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32x/00_vector_loads_and_stores_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32x/01_vector_loads_and_stores_segment_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32x/02_vector_integer_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32x/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32x/04_vector_floating-point_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32x/05_vector_reduction_operations.h"
#include "policy_funcs/intrinsic_funcs/zve32x/06_vector_mask_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32x/07_vector_permutation_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32x/08_miscellaneous_vector_utility_intrinsics.h"
#endif // defined(SUPPORT_VEC_32X)

#if defined(SUPPORT_VEC_32F)
#include "intrinsic_funcs/zve32f/00_vector_loads_and_stores_intrinsics.h"
#include "intrinsic_funcs/zve32f/01_vector_loads_and_stores_segment_intrinsics.h"
#include "intrinsic_funcs/zve32f/02_vector_integer_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve32f/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve32f/04_vector_floating-point_intrinsics.h"
#include "intrinsic_funcs/zve32f/05_vector_reduction_operations.h"
#include "intrinsic_funcs/zve32f/06_vector_mask_intrinsics.h"
#include "intrinsic_funcs/zve32f/07_vector_permutation_intrinsics.h"
#include "intrinsic_funcs/zve32f/08_miscellaneous_vector_utility_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32f/00_vector_loads_and_stores_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32f/01_vector_loads_and_stores_segment_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32f/02_vector_integer_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32f/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32f/04_vector_floating-point_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32f/05_vector_reduction_operations.h"
#include "policy_funcs/intrinsic_funcs/zve32f/06_vector_mask_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32f/07_vector_permutation_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve32f/08_miscellaneous_vector_utility_intrinsics.h"
#endif // defined(SUPPORT_VEC_32F)

#if defined(SUPPORT_VEC_64X)
#include "intrinsic_funcs/zve64x/00_vector_loads_and_stores_intrinsics.h"
#include "intrinsic_funcs/zve64x/01_vector_loads_and_stores_segment_intrinsics.h"
#include "intrinsic_funcs/zve64x/02_vector_integer_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve64x/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve64x/04_vector_floating-point_intrinsics.h"
#include "intrinsic_funcs/zve64x/05_vector_reduction_operations.h"
#include "intrinsic_funcs/zve64x/06_vector_mask_intrinsics.h"
#include "intrinsic_funcs/zve64x/07_vector_permutation_intrinsics.h"
#include "intrinsic_funcs/zve64x/08_miscellaneous_vector_utility_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64x/00_vector_loads_and_stores_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64x/01_vector_loads_and_stores_segment_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64x/02_vector_integer_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64x/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64x/04_vector_floating-point_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64x/05_vector_reduction_operations.h"
#include "policy_funcs/intrinsic_funcs/zve64x/06_vector_mask_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64x/07_vector_permutation_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64x/08_miscellaneous_vector_utility_intrinsics.h"
#endif // defined(SUPPORT_VEC_64X)

#if defined(SUPPORT_VEC_64F)
#include "intrinsic_funcs/zve64f/00_vector_loads_and_stores_intrinsics.h"
#include "intrinsic_funcs/zve64f/01_vector_loads_and_stores_segment_intrinsics.h"
#include "intrinsic_funcs/zve64f/02_vector_integer_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve64f/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve64f/04_vector_floating-point_intrinsics.h"
#include "intrinsic_funcs/zve64f/05_vector_reduction_operations.h"
#include "intrinsic_funcs/zve64f/06_vector_mask_intrinsics.h"
#include "intrinsic_funcs/zve64f/07_vector_permutation_intrinsics.h"
#include "intrinsic_funcs/zve64f/08_miscellaneous_vector_utility_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64f/00_vector_loads_and_stores_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64f/01_vector_loads_and_stores_segment_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64f/02_vector_integer_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64f/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64f/04_vector_floating-point_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64f/05_vector_reduction_operations.h"
#include "policy_funcs/intrinsic_funcs/zve64f/06_vector_mask_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64f/07_vector_permutation_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64f/08_miscellaneous_vector_utility_intrinsics.h"
#endif // defined(SUPPORT_VEC_64F)

#if defined(SUPPORT_VEC_64D)
#include "intrinsic_funcs/zve64d/00_vector_loads_and_stores_intrinsics.h"
#include "intrinsic_funcs/zve64d/01_vector_loads_and_stores_segment_intrinsics.h"
#include "intrinsic_funcs/zve64d/02_vector_integer_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve64d/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "intrinsic_funcs/zve64d/04_vector_floating-point_intrinsics.h"
#include "intrinsic_funcs/zve64d/05_vector_reduction_operations.h"
#include "intrinsic_funcs/zve64d/06_vector_mask_intrinsics.h"
#include "intrinsic_funcs/zve64d/07_vector_permutation_intrinsics.h"
#include "intrinsic_funcs/zve64d/08_miscellaneous_vector_utility_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64d/00_vector_loads_and_stores_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64d/01_vector_loads_and_stores_segment_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64d/02_vector_integer_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64d/03_vector_fixed-point_arithmetic_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64d/04_vector_floating-point_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64d/05_vector_reduction_operations.h"
#include "policy_funcs/intrinsic_funcs/zve64d/06_vector_mask_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64d/07_vector_permutation_intrinsics.h"
#include "policy_funcs/intrinsic_funcs/zve64d/08_miscellaneous_vector_utility_intrinsics.h"
#endif // defined(SUPPORT_VEC_64D)

#endif // RVV_INTRINSIC_H
