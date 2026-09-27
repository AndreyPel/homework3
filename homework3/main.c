#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {

    double pounds;
    double kg, grams, tons;

    setlocale(LC_ALL, "RU");

    printf("¬ведите массу в фунтах: ");

    scanf("%lf", &pounds);

    kg = pounds * 0.453592;
    grams = kg * 1000.0;
    tons = kg / 1000.0;

    printf("\n–езультаты перевода:\n");
    printf("%.2lf фунтов это:\n", pounds);
    printf("- %.4lf килограмм (кг)\n", kg);
    printf("- %.2lf грамм (г)\n", grams);
    printf("- %.6lf тонн (т)\n", tons);

    return 0;
}