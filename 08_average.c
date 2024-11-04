#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main()
{
    int a=5.0, b=5.0, c=5.0;
    printf("The averge of a, b and c is %f", average(a, b, c));
    return 0;
}
