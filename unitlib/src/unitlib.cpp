#include "unitlib.h"
namespace unitlib {
    double celsiusToFahrenheit(double c) {
        return c * 9.0 / 5.0 + 32.0;
    }
    double fahrenheitToCelsius(double f) {
        return (f - 32.0) * 5.0 / 9.0;
    }
    double metersToFeet(double m) {
        return m * 3.280839895;
    }
    double feetToMeters(double ft) {
        return ft / 3.280839895;
    }
    double poundsToKilograms(double lb) {
        return lb * 0.45359237;
    }
    double kilogramsToPounds(double kg) {
        return kg / 0.45359237;
    }
}