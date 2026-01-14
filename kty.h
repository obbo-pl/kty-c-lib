/*
 * kty.h
 *
 * Created on: 13 kwi 2023
 *     Author: Krzysztof Markiewicz <obbo.pl>
 *
 * MIT License
 *
 * Copyright (c) 2023 Krzysztof Markiewicz
 */

#ifndef _KTY_H_
#define _KTY_H_

#ifdef __cplusplus
extern "C" {
#endif



// If you don't want to use all KTY sensors, just comment out the unnecessary ones here
#define KTY_VARIANT_KTY81_210
#define KTY_VARIANT_KTY81_220
#define KTY_VARIANT_KTY81_221
#define KTY_VARIANT_KTY81_222
#define KTY_VARIANT_KTY81_250
#define KTY_VARIANT_KTY81_251
#define KTY_VARIANT_KTY81_252
#define KTY_VARIANT_KTY83_110
#define KTY_VARIANT_KTY83_120
#define KTY_VARIANT_KTY83_121
#define KTY_VARIANT_KTY83_122
#define KTY_VARIANT_KTY83_150
#define KTY_VARIANT_KTY83_151
#define KTY_VARIANT_KTY84_130
#define KTY_VARIANT_KTY84_150
#define KTY_VARIANT_KTY84_151
#define KTY_VARIANT_KTY84_152



#ifdef KTY_VARIANT_KTY81_210
#undef KTY_VARIANT_KTY81_210
#define KTY_DEF_KTY81_210  _KTY_VAR(KTY_VARIANT_KTY81_210)_KTY_LEN(24)_KTY_PTR(kty81_210)
#else
#define KTY_DEF_KTY81_210  /**/
#endif

#ifdef KTY_VARIANT_KTY81_220
#undef KTY_VARIANT_KTY81_220
#define KTY_DEF_KTY81_220  _KTY_VAR(KTY_VARIANT_KTY81_220)_KTY_LEN(24)_KTY_PTR(kty81_220)
#else
#define KTY_DEF_KTY81_220  /**/
#endif

#ifdef KTY_VARIANT_KTY81_221
#undef KTY_VARIANT_KTY81_221
#define KTY_DEF_KTY81_221  _KTY_VAR(KTY_VARIANT_KTY81_221)_KTY_LEN(24)_KTY_PTR(kty81_221)
#else
#define KTY_DEF_KTY81_221  /**/
#endif

#ifdef KTY_VARIANT_KTY81_222
#undef KTY_VARIANT_KTY81_222
#define KTY_DEF_KTY81_222  _KTY_VAR(KTY_VARIANT_KTY81_222)_KTY_LEN(24)_KTY_PTR(kty81_222)
#else
#define KTY_DEF_KTY81_222  /**/
#endif

#ifdef KTY_VARIANT_KTY81_250
#undef KTY_VARIANT_KTY81_250
#define KTY_DEF_KTY81_250  _KTY_VAR(KTY_VARIANT_KTY81_250)_KTY_LEN(24)_KTY_PTR(kty81_250)
#else
#define KTY_DEF_KTY81_250  /**/
#endif

#ifdef KTY_VARIANT_KTY81_251
#undef KTY_VARIANT_KTY81_251
#define KTY_DEF_KTY81_251  _KTY_VAR(KTY_VARIANT_KTY81_251)_KTY_LEN(24)_KTY_PTR(kty81_251)
#else
#define KTY_DEF_KTY81_251  /**/
#endif

#ifdef KTY_VARIANT_KTY81_252
#undef KTY_VARIANT_KTY81_252
#define KTY_DEF_KTY81_252  _KTY_VAR(KTY_VARIANT_KTY81_252)_KTY_LEN(24)_KTY_PTR(kty81_252)
#else
#define KTY_DEF_KTY81_252  /**/
#endif

#ifdef KTY_VARIANT_KTY83_110
#undef KTY_VARIANT_KTY83_110
#define KTY_DEF_KTY83_110  _KTY_VAR(KTY_VARIANT_KTY83_110)_KTY_LEN(27)_KTY_PTR(kty83_110)
#else
#define KTY_DEF_KTY83_110  /**/
#endif

#ifdef KTY_VARIANT_KTY83_120
#undef KTY_VARIANT_KTY83_120
#define KTY_DEF_KTY83_120  _KTY_VAR(KTY_VARIANT_KTY83_120)_KTY_LEN(27)_KTY_PTR(kty83_120)
#else
#define KTY_DEF_KTY83_120  /**/
#endif

#ifdef KTY_VARIANT_KTY83_121
#undef KTY_VARIANT_KTY83_121
#define KTY_DEF_KTY83_121  _KTY_VAR(KTY_VARIANT_KTY83_121)_KTY_LEN(27)_KTY_PTR(kty83_121)
#else
#define KTY_DEF_KTY83_121  /**/
#endif

#ifdef KTY_VARIANT_KTY83_122
#undef KTY_VARIANT_KTY83_122
#define KTY_DEF_KTY83_122  _KTY_VAR(KTY_VARIANT_KTY83_122)_KTY_LEN(27)_KTY_PTR(kty83_122)
#else
#define KTY_DEF_KTY83_122  /**/
#endif

#ifdef KTY_VARIANT_KTY83_150
#undef KTY_VARIANT_KTY83_150
#define KTY_DEF_KTY83_150  _KTY_VAR(KTY_VARIANT_KTY83_150)_KTY_LEN(27)_KTY_PTR(kty83_150)
#else
#define KTY_DEF_KTY83_150  /**/
#endif

#ifdef KTY_VARIANT_KTY83_151
#undef KTY_VARIANT_KTY83_151
#define KTY_DEF_KTY83_151  _KTY_VAR(KTY_VARIANT_KTY83_151)_KTY_LEN(27)_KTY_PTR(kty83_151)
#else
#define KTY_DEF_KTY83_151  /**/
#endif

#ifdef KTY_VARIANT_KTY84_130
#undef KTY_VARIANT_KTY84_130
#define KTY_DEF_KTY84_130  _KTY_VAR(KTY_VARIANT_KTY84_130)_KTY_LEN(36)_KTY_PTR(kty84_130)
#else
#define KTY_DEF_KTY84_130  /**/
#endif

#ifdef KTY_VARIANT_KTY84_150
#undef KTY_VARIANT_KTY84_150
#define KTY_DEF_KTY84_150  _KTY_VAR(KTY_VARIANT_KTY84_150)_KTY_LEN(36)_KTY_PTR(kty84_150)
#else
#define KTY_DEF_KTY84_150  /**/
#endif

#ifdef KTY_VARIANT_KTY84_151
#undef KTY_VARIANT_KTY84_151
#define KTY_DEF_KTY84_151  _KTY_VAR(KTY_VARIANT_KTY84_151)_KTY_LEN(36)_KTY_PTR(kty84_151)
#else
#define KTY_DEF_KTY84_151  /**/
#endif

#ifdef KTY_VARIANT_KTY84_152
#undef KTY_VARIANT_KTY84_152
#define KTY_DEF_KTY84_152  _KTY_VAR(KTY_VARIANT_KTY84_152)_KTY_LEN(36)_KTY_PTR(kty84_152)
#else
#define KTY_DEF_KTY84_152  /**/
#endif



#define KTY_ITEMS  \
    KTY_DEF_KTY81_210 \
    KTY_DEF_KTY81_220 \
    KTY_DEF_KTY81_221 \
    KTY_DEF_KTY81_222 \
    KTY_DEF_KTY81_250 \
    KTY_DEF_KTY81_251 \
    KTY_DEF_KTY81_252 \
    KTY_DEF_KTY83_110 \
    KTY_DEF_KTY83_120 \
    KTY_DEF_KTY83_121 \
    KTY_DEF_KTY83_122 \
    KTY_DEF_KTY83_150 \
    KTY_DEF_KTY83_151 \
    KTY_DEF_KTY84_130 \
    KTY_DEF_KTY84_150 \
    KTY_DEF_KTY84_151 \
    KTY_DEF_KTY84_152



#define _KTY_VAR(variant)       variant,
#define _KTY_LEN(len)           /**/
#define _KTY_PTR(ptr)           /**/

typedef enum {
    KTY_ITEMS
    KTY_VARIANT_COUNT
} kty_variant_t;


/**
 * Returns the temperature equivalent to the resistance.
 * For unsupported sensor type it returns -FLT-MAX.
 *
 * @param variant A variation of the KTY.
 * @param resistance Resistance in ohms.
 * @return Temperature in degrees Celsius.
*/
float kty_ResistanceToC(kty_variant_t variant, float resistance);

/**
 * Returns the temperature equivalent to the resistance.
 * For unsupported sensor type it returns -FLT-MAX.
 *
 * @param variant A variation of the KTY.
 * @param resistance Resistance in ohms.
 * @return Temperature in Kelvin.
*/
float kty_ResistanceToK(kty_variant_t variant, float resistance);

/**
 * Returns the temperature equivalent to the resistance.
 * For unsupported sensor type it returns -FLT-MAX.
 *
 * @param variant A variation of the KTY.
 * @param resistance Resistance in ohms.
 * @return Temperature in degrees Fahrenheit.
*/
float kty_ResistanceToF(kty_variant_t variant, float resistance);

/**
 * Returns the minimum and maximum resistance values for the safe measurement range.
 * For unsupported sensor types it does nothing.
 *
 * @param variant A variation of the KTY.
 * @param min Pointer to pass the minimum value.
 * @param max Pointer to pass the maximum value.
*/
void kty_GetMinMaxResistance(kty_variant_t variant, int* min, int* max);



#ifdef __cplusplus
}
#endif

#endif /* _KTY_H_ */
