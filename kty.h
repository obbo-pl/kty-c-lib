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
#define _KTY_DEF_KTY81_210
#define _KTY_DEF_KTY81_220
#define _KTY_DEF_KTY81_221
#define _KTY_DEF_KTY81_222
#define _KTY_DEF_KTY81_250
#define _KTY_DEF_KTY81_251
#define _KTY_DEF_KTY81_252
#define _KTY_DEF_KTY84_130
#define _KTY_DEF_KTY84_150
#define _KTY_DEF_KTY84_151



typedef enum {
#ifdef _KTY_DEF_KTY81_210
    KTY_VARIANT_KTY81_210,
#endif
#ifdef _KTY_DEF_KTY81_220
    KTY_VARIANT_KTY81_220,
#endif
#ifdef _KTY_DEF_KTY81_221
    KTY_VARIANT_KTY81_221,
#endif
#ifdef _KTY_DEF_KTY81_222
    KTY_VARIANT_KTY81_222,
#endif
#ifdef _KTY_DEF_KTY81_250
    KTY_VARIANT_KTY81_250,
#endif
#ifdef _KTY_DEF_KTY81_251
    KTY_VARIANT_KTY81_251,
#endif
#ifdef _KTY_DEF_KTY81_252
    KTY_VARIANT_KTY81_252,
#endif
#ifdef _KTY_DEF_KTY84_130
    KTY_VARIANT_KTY84_130,
#endif
#ifdef _KTY_DEF_KTY84_150
    KTY_VARIANT_KTY84_150,
#endif
#ifdef _KTY_DEF_KTY84_151
    KTY_VARIANT_KTY84_151,
#endif

} kty_variant_t;


/**
 * Returns the temperature equivalent to the resistance.
 *
 * @param variant A variation of the KTY.
 * @param resistance Resistance in ohms.
 * @return Temperature in degrees Celsius.
*/
float kty_ResistanceToC(kty_variant_t variant, float resistance);

/**
 * Returns the temperature equivalent to the resistance.
 *
 * @param variant A variation of the KTY.
 * @param resistance Resistance in ohms.
 * @return Temperature in Kelvin.
*/
float kty_ResistanceToK(kty_variant_t variant, float resistance);

/**
 * Returns the temperature equivalent to the resistance
 *
 * @param variant A variation of the KTY.
 * @param resistance Resistance in ohms.
 * @return Temperature in degrees Fahrenheit.
*/
float kty_ResistanceToF(kty_variant_t variant, float resistance);

/**
 * Returns the minimum and maximum resistance values for the safe measurement range.
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
