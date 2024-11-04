#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int a = 1;
    int b = 4;
    int c = sum(a, b); //function call
    printf("%d\n", c);

    int a1 = 4;
    int b1 = 8;
    int c1 = (a1 + b1);
    sum(a1, b1); //function call
    printf("%d\n", c1);
}
