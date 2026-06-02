#include <stdio.h>

int main() {
    // Conversion constants
    double  MILES = 0.621371;
    double  METRES = 1000.0;
    double CENTIMETRES = 100000.0;

    double KELVIN = 273.15;

    double miles, metres, centimetres,kilometres;
    double fahrenheit, kelvin,celsius;

    // Distance input
    printf("Enter distance in kilometres: ");
    scanf("%lf", &kilometres);

    // Distance conversions
    miles = kilometres * MILES;
    metres = kilometres * METRES;
    centimetres = kilometres * CENTIMETRES;

    printf("\nDistance Conversions:\n");
    printf("%.2lf km = %.2lf miles\n", kilometres, miles);
    printf("%.2lf km = %.2lf metres\n", kilometres, metres);
    printf("%.2lf km = %.2lf centimetres\n", kilometres, centimetres);

    // Temperature input
    printf("\nEnter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Temperature conversions
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + KELVIN;

    printf("\nTemperature Conversions:\n");
    printf("%.2lf C = %.2lf F\n", celsius, fahrenheit);
    printf("%.2lf C = %.2lf K\n", celsius, kelvin);

    return 0;
}