#include <math.h>

int int_modulus(int a, int b) ;

double float_modulus(double x, double y);

int int_modulus(int a, int b) {
    return a % b;
}

double float_modulus(double x, double y) {
    return fmod(x, y);
}