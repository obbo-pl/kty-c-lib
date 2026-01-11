/*
 * kty.c
 *
 * Created on: 13 kwi 2023
 *     Author: Krzysztof Markiewicz <obbo.pl>
 *
 * MIT License
 *
 * Copyright (c) 2023 Krzysztof Markiewicz
 */


#include "kty.h"
#include <float.h>


#ifdef _KTY_DEF_KTY81_210
#define KTY_DEF_KTY81_210  _KTY_LEN(24)_KTY_DATAPRT(kty81_210)
#else
#define KTY_DEF_KTY81_210  /**/
#endif
#ifdef _KTY_DEF_KTY81_220
#define KTY_DEF_KTY81_220  _KTY_LEN(24)_KTY_DATAPRT(kty81_220)
#else
#define KTY_DEF_KTY81_220  /**/
#endif
#ifdef _KTY_DEF_KTY81_221
#define KTY_DEF_KTY81_221  _KTY_LEN(24)_KTY_DATAPRT(kty81_221)
#else
#define KTY_DEF_KTY81_221  /**/
#endif
#ifdef _KTY_DEF_KTY81_222
#define KTY_DEF_KTY81_222  _KTY_LEN(24)_KTY_DATAPRT(kty81_222)
#else
#define KTY_DEF_KTY81_222  /**/
#endif
#ifdef _KTY_DEF_KTY81_250
#define KTY_DEF_KTY81_250  _KTY_LEN(24)_KTY_DATAPRT(kty81_250)
#else
#define KTY_DEF_KTY81_250  /**/
#endif
#ifdef _KTY_DEF_KTY81_251
#define KTY_DEF_KTY81_251  _KTY_LEN(24)_KTY_DATAPRT(kty81_251)
#else
#define KTY_DEF_KTY81_251  /**/
#endif
#ifdef _KTY_DEF_KTY81_252
#define KTY_DEF_KTY81_252  _KTY_LEN(24)_KTY_DATAPRT(kty81_252)
#else
#define KTY_DEF_KTY81_252  /**/
#endif
#ifdef _KTY_DEF_KTY84_130
#define KTY_DEF_KTY84_130  _KTY_LEN(36)_KTY_DATAPRT(kty84_130)
#else
#define KTY_DEF_KTY84_130  /**/
#endif
#ifdef _KTY_DEF_KTY84_150
#define KTY_DEF_KTY84_150  _KTY_LEN(36)_KTY_DATAPRT(kty84_150)
#else
#define KTY_DEF_KTY84_150  /**/
#endif
#ifdef _KTY_DEF_KTY84_151
#define KTY_DEF_KTY84_151  _KTY_LEN(36)_KTY_DATAPRT(kty84_151)
#else
#define KTY_DEF_KTY84_151  /**/
#endif


#define KTY_ITEMS  \
    KTY_DEF_KTY81_210  \
    KTY_DEF_KTY81_220  \
    KTY_DEF_KTY81_221  \
    KTY_DEF_KTY81_222  \
    KTY_DEF_KTY81_250  \
    KTY_DEF_KTY81_251  \
    KTY_DEF_KTY81_252  \
    KTY_DEF_KTY84_130  \
    KTY_DEF_KTY84_150  \
    KTY_DEF_KTY84_151


typedef struct {
    int temperature_c;
    int resistance;
} kty_couple_t;

#undef _KTY_LEN
#define _KTY_LEN(len)               len
#undef _KTY_DATAPRT
#define _KTY_DATAPRT(ptr)           /**/

#if KTY_DEF_KTY81_210 + 0 > 0
static const kty_couple_t kty81_210[KTY_DEF_KTY81_210] =   {{ -55,   980},
                                                            { -50,  1030},
                                                            { -40,  1135},
                                                            { -30,  1247},
                                                            { -20,  1367},
                                                            { -10,  1495},
                                                            {   0,  1630},
                                                            {  10,  1772},
                                                            {  20,  1922},
                                                            {  25,  2000},
                                                            {  30,  2080},
                                                            {  40,  2245},
                                                            {  50,  2417},
                                                            {  60,  2597},
                                                            {  70,  2785},
                                                            {  80,  2980},
                                                            {  90,  3182},
                                                            { 100,  3392},
                                                            { 110,  3607},
                                                            { 120,  3817},
                                                            { 125,  3915},
                                                            { 130,  4008},
                                                            { 140,  4166},
                                                            { 150,  4280}};
#endif

#if KTY_DEF_KTY81_220 + 0 > 0
static const kty_couple_t kty81_220[KTY_DEF_KTY81_220] =   {{ -55,   980},
                                                            { -50,  1030},
                                                            { -40,  1135},
                                                            { -30,  1247},
                                                            { -20,  1367},
                                                            { -10,  1495},
                                                            {   0,  1630},
                                                            {  10,  1772},
                                                            {  20,  1922},
                                                            {  25,  2000},
                                                            {  30,  2080},
                                                            {  40,  2245},
                                                            {  50,  2417},
                                                            {  60,  2597},
                                                            {  70,  2785},
                                                            {  80,  2980},
                                                            {  90,  3182},
                                                            { 100,  3392},
                                                            { 110,  3607},
                                                            { 120,  3817},
                                                            { 125,  3915},
                                                            { 130,  4008},
                                                            { 140,  4166},
                                                            { 150,  4280}};
#endif

#if KTY_DEF_KTY81_221 + 0 > 0
static const kty_couple_t kty81_221[KTY_DEF_KTY81_221] =   {{ -55 ,  970},
                                                            { -50,  1019},
                                                            { -40,  1123},
                                                            { -30,  1235},
                                                            { -20,  1354},
                                                            { -10,  1480},
                                                            {   0,  1613},
                                                            {  10,  1754},
                                                            {  20,  1903},
                                                            {  25,  1980},
                                                            {  30,  2059},
                                                            {  40,  2222},
                                                            {  50,  2393},
                                                            {  60,  2571},
                                                            {  70,  2757},
                                                            {  80,  2950},
                                                            {  90,  3150},
                                                            { 100,  3358},
                                                            { 110,  3571},
                                                            { 120,  3779},
                                                            { 125,  3876},
                                                            { 130,  3967},
                                                            { 140,  4125},
                                                            { 150,  4237}};
#endif

#if KTY_DEF_KTY81_222 + 0 > 0
static const kty_couple_t kty81_222[KTY_DEF_KTY81_222] =   {{ -50,  1040},
                                                            { -40,  1146},
                                                            { -30,  1260},
                                                            { -20,  1381},
                                                            { -10,  1510},
                                                            {   0,  1646},
                                                            {  10,  1790},
                                                            {  20,  1941},
                                                            {  25,  2020},
                                                            {  30,  2100},
                                                            {  40,  2267},
                                                            {  50,  2441},
                                                            {  60,  2623},
                                                            {  70,  2812},
                                                            {  80,  3009},
                                                            {  90,  3214},
                                                            { 100,  3426},
                                                            { 110,  3643},
                                                            { 120,  3855},
                                                            { 125,  3955},
                                                            { 130,  4048},
                                                            { 140,  4208},
                                                            { 150,  4323}};
#endif

#if KTY_DEF_KTY81_250 + 0 > 0
static const kty_couple_t kty81_250[KTY_DEF_KTY81_250] =   {{ -55,   980},
                                                            { -50,  1030},
                                                            { -40,  1135},
                                                            { -30,  1247},
                                                            { -20,  1367},
                                                            { -10,  1495},
                                                            {   0,  1630},
                                                            {  10,  1772},
                                                            {  20,  1922},
                                                            {  25,  2000},
                                                            {  30,  2080},
                                                            {  40,  2245},
                                                            {  50,  2417},
                                                            {  60,  2597},
                                                            {  70,  2785},
                                                            {  80,  2980},
                                                            {  90,  3182},
                                                            { 100,  3392},
                                                            { 110,  3607},
                                                            { 120,  3817},
                                                            { 125,  3915},
                                                            { 130,  4008},
                                                            { 140,  4166},
                                                            { 150,  4280}};
#endif

#if KTY_DEF_KTY81_251 + 0 > 0
static const kty_couple_t kty81_251[KTY_DEF_KTY81_251] =   {{ -55,   956},
                                                            { -50,  1004},
                                                            { -40,  1106},
                                                            { -30,  1216},
                                                            { -20,  1333},
                                                            { -10,  1457},
                                                            {   0,  1589},
                                                            {  10,  1728},
                                                            {  20,  1874},
                                                            {  25,  1950},
                                                            {  30,  2028},
                                                            {  40,  2189},
                                                            {  50,  2357},
                                                            {  60,  2532},
                                                            {  70,  2715},
                                                            {  80,  2905},
                                                            {  90,  3102},
                                                            { 100,  3307},
                                                            { 110,  3517},
                                                            { 120,  3721},
                                                            { 125,  3817},
                                                            { 130,  3907},
                                                            { 140,  4062},
                                                            { 150,  4173}};
#endif

#if KTY_DEF_KTY81_252 + 0 > 0
static const kty_couple_t kty81_252[KTY_DEF_KTY81_252] =   {{ -55,  1005},
                                                            { -50,  1055},
                                                            { -40,  1163},
                                                            { -30,  1278},
                                                            { -20,  1401},
                                                            { -10,  1532},
                                                            {   0,  1670},
                                                            {  10,  1817},
                                                            {  20,  1970},
                                                            {  25,  2050},
                                                            {  30,  2132},
                                                            {  40,  2301},
                                                            {  50,  2478},
                                                            {  60,  2662},
                                                            {  70,  2854},
                                                            {  80,  3054},
                                                            {  90,  3262},
                                                            { 100,  3477},
                                                            { 110,  3697},
                                                            { 120,  3912},
                                                            { 125,  4013},
                                                            { 130,  4108},
                                                            { 140,  4271},
                                                            { 150,  4387}};
#endif

#if KTY_DEF_KTY84_130 + 0 > 0
static const kty_couple_t kty84_130[KTY_DEF_KTY84_130] =   {{ -40,   359},
                                                            { -30,   391},
                                                            { -20,   424},
                                                            { -10,   460},
                                                            {   0,   498},
                                                            {  10,   538},
                                                            {  20,   581},
                                                            {  25,   603},
                                                            {  30,   626},
                                                            {  40,   672},
                                                            {  50,   722},
                                                            {  60,   773},
                                                            {  70,   826},
                                                            {  80,   882},
                                                            {  90,   940},
                                                            { 100,  1000},
                                                            { 110,  1062},
                                                            { 120,  1127},
                                                            { 130,  1194},
                                                            { 140,  1262},
                                                            { 150,  1334},
                                                            { 160,  1407},
                                                            { 170,  1482},
                                                            { 180,  1560},
                                                            { 190,  1640},
                                                            { 200,  1722},
                                                            { 210,  1807},
                                                            { 220,  1893},
                                                            { 230,  1982},
                                                            { 240,  2073},
                                                            { 250,  2166},
                                                            { 260,  2261},
                                                            { 270,  2357},
                                                            { 280,  2452},
                                                            { 290,  2542},
                                                            { 300,  2624}};
#endif

#if KTY_DEF_KTY84_150 + 0 > 0
static const kty_couple_t kty84_150[KTY_DEF_KTY84_150] =   {{ -40,   359},
                                                            { -30,   391},
                                                            { -20,   424},
                                                            { -10,   460},
                                                            {   0,   498},
                                                            {  10,   538},
                                                            {  20,   581},
                                                            {  25,   603},
                                                            {  30,   626},
                                                            {  40,   672},
                                                            {  50,   722},
                                                            {  60,   773},
                                                            {  70,   826},
                                                            {  80,   882},
                                                            {  90,   940},
                                                            { 100,  1000},
                                                            { 110,  1062},
                                                            { 120,  1127},
                                                            { 130,  1194},
                                                            { 140,  1262},
                                                            { 150,  1334},
                                                            { 160,  1407},
                                                            { 170,  1482},
                                                            { 180,  1560},
                                                            { 190,  1640},
                                                            { 200,  1722},
                                                            { 210,  1807},
                                                            { 220,  1893},
                                                            { 230,  1982},
                                                            { 240,  2073},
                                                            { 250,  2166},
                                                            { 260,  2261},
                                                            { 270,  2357},
                                                            { 280,  2452},
                                                            { 290,  2542},
                                                            { 300,  2624}};
#endif

#if KTY_DEF_KTY84_151 + 0 > 0
static const kty_couple_t kty84_151[KTY_DEF_KTY84_151] =   {{ -40,   350},
                                                            { -30,   381},
                                                            { -20,   414},
                                                            { -10,   449},
                                                            {   0,   486},
                                                            {  10,   525},
                                                            {  20,   566},
                                                            {  25,   588},
                                                            {  30,   610},
                                                            {  40,   656},
                                                            {  50,   704},
                                                            {  60,   754},
                                                            {  70,   806},
                                                            {  80,   860},
                                                            {  90,   916},
                                                            { 100,   975},
                                                            { 110,  1036},
                                                            { 120,  1099},
                                                            { 130,  1164},
                                                            { 140,  1231},
                                                            { 150,  1300},
                                                            { 160,  1372},
                                                            { 170,  1445},
                                                            { 180,  1521},
                                                            { 190,  1599},
                                                            { 200,  1679},
                                                            { 210,  1761},
                                                            { 220,  1846},
                                                            { 230,  1932},
                                                            { 240,  2021},
                                                            { 250,  2112},
                                                            { 260,  2205},
                                                            { 270,  2298},
                                                            { 280,  2391},
                                                            { 290,  2479},
                                                            { 300,  2558}};
#endif



#undef  _KTY_LEN
#define _KTY_LEN(len)               len,
static int kty_data_len[] = { KTY_ITEMS };


#undef  _KTY_LEN
#define _KTY_LEN(len)               /**/
#undef  _KTY_DATAPRT
#define _KTY_DATAPRT(ptr)           ptr,
static const kty_couple_t* const kty_data_ptr[] = { KTY_ITEMS };



float kty_ResistanceToC(kty_variant_t variant, float resistance)
{
    if ((variant < 0) || (variant >= KTY_VARIANT_COUNT)) return -FLT_MAX;
    float c;
    int lower = 0;
    int upper = kty_data_len[variant] - 1;
    while (lower + 1 < upper) {
        int middle = (int)((lower + upper) / 2);
        int r = kty_data_ptr[variant][middle].resistance;
        if (resistance == r) {
            c = (float)kty_data_ptr[variant][middle].temperature_c;
            goto result;
        } else if (resistance > r) {
            lower = middle;
        } else {
            upper = middle;
        }
    }
    if ((kty_data_ptr[variant][upper].resistance - kty_data_ptr[variant][lower].resistance) == 0) {
        c = kty_data_ptr[variant][lower].temperature_c;
    } else {
        c = (float)(kty_data_ptr[variant][upper].temperature_c - kty_data_ptr[variant][lower].temperature_c) /
                (kty_data_ptr[variant][upper].resistance - kty_data_ptr[variant][lower].resistance);
        c = c * (resistance - kty_data_ptr[variant][lower].resistance) + kty_data_ptr[variant][lower].temperature_c;
    }
result:
    return c;
}

float kty_ResistanceToK(kty_variant_t variant, float resistance)
{
    if ((variant < 0) || (variant >= KTY_VARIANT_COUNT)) return -FLT_MAX;
    float k = kty_ResistanceToC(variant, resistance) + 273.15;
    return k;
}

float kty_ResistanceToF(kty_variant_t variant, float resistance)
{
    if ((variant < 0) || (variant >= KTY_VARIANT_COUNT)) return -FLT_MAX;
    float f = 1.8 * kty_ResistanceToC(variant, resistance) + 32;
    return f;
}

void kty_GetMinMaxResistance(kty_variant_t variant, int* min, int* max)
{
    if ((variant >= 0) && (variant < KTY_VARIANT_COUNT)) {
        *min = kty_data_ptr[variant][0].resistance;
        *max = kty_data_ptr[variant][kty_data_len[variant] - 1].resistance;
    }
}



