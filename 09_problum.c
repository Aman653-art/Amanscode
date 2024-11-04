#include <stdio.h>

float c2f(float);

float c2f(float c)
{
    return ((9.0 / 5.0) * c) + 32.0;
}
int main()
{
    float c = 45;
    printf("Celssius to fahranhit for %f is %.2f", c, c2f(c));

    return 0;
}