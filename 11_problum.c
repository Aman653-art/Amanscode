#include<stdio.h>

float force(float);

float force(float mass){
    return mass*9.8;
}
int main(){
    int m = 4.0;
    printf("The value of Grevitatesnal force on mass is %f\n", force(m));
    return 0;
}