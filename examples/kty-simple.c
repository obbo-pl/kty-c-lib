/*
 * kty-simple.c
 *
 * Created on: 09 jan 2026
 *     Author: Krzysztof Markiewicz <obbo.pl>
 *
 * MIT License
 *
 * Copyright (c) 2026 Krzysztof Markiewicz
 */

#include <stdio.h>
#include "kty.h"


#define KTY                         KTY_VARIANT_KTY81_220
#define KTY_UNKNOWN_VARIANT         123



int main (void) {
    printf("Testing on variant KTY81-220 \n\n");
    int min;
    int max;
    kty_GetMinMaxResistance(KTY, &min, &max);
    printf("Minimum resistance: %i[ohm], corresponding temperature: %6.1f[C] \n", min, kty_ResistanceToC(KTY, min));
    printf("Maximum resistance: %i[ohm], corresponding temperature: %6.1f[C] \n\n", max, kty_ResistanceToC(KTY, max));
    min -= 30;
    max += 30;
    printf("The library also operates outside the safe range \n\t resistance: %i[ohm], corresponding temperature: %6.1f[C] \n", min, kty_ResistanceToC(KTY, min));
    printf("Unsupported KTY type returns -FLT_MAX \n\t resistance: %i[ohm], corresponding temperature: %.10e[C] \n\n", min, kty_ResistanceToC(KTY_UNKNOWN_VARIANT, min));
    printf("Test in a range of values (%i, %i) with 1 ohm steps \n", min, max);
    printf("press [Enter] to continue. \n");
    getchar();
    printf("resistance [ohm];temperature [C] \n");
    for (int i = min; i < max + 1; i++) {
        printf("%i;%.1f \n", i, kty_ResistanceToC(KTY, i));
    }
    return 0;
}
