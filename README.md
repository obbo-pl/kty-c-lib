# KTY sensor C/C++ library
C/C++ library for converting KTY sensor resistance to temperature

The library uses a lookup table and linear interpolation and extrapolation to convert KTY sensor resistance to temperature in Celsius, Kelvin, or Fahrenheit. The lookup table is based on manufacturer data.
### Supports:

| KTY81 | KTY82 | KTY83 | KTY84 |
| --- | --- | --- | --- |
| KTY81-110 | KTY82-110 | KTY83-110 | KTY84-130 |
| KTY81-120 | KTY82-120 | KTY83-120 | KTY84-150 |
| KTY81-121 | KTY82-121 | KTY83-121 | KTY84-151 |
| KTY81-122 | KTY82-122 | KTY83-122 | KTY84-152 |
| KTY81-150 | KTY82-150 | KTY83-150 |
| KTY81-210 | KTY82-151 | KTY83-151 |
| KTY81-220 | KTY82-210 |
| KTY81-221 | KTY82-220 |
| KTY81-222 | KTY82-221 |
| KTY81-250 | KTY82-222 |
| KTY81-251 | KTY82-250 |
| KTY81-252 | KTY82-251 |
|           | KTY82-252 |

The library also provides functions for reading the minimum and maximum resistance values ​​specified by the manufacturer for a given sensor type. The minimum and maximum resistance correspond to the temperature range within which the sensor can safely operate and to which the sensor's characteristics are specified.

Extrapolation allows for temperature readings outside these limits. However, it's important to remember that outside the sensor's safe operating range, the sensor may be damaged, and the measurements will be significantly inaccurate.

