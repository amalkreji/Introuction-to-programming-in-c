#include <stdio.h>

int main() {
    int a;
    printf("Enter a number :");
    scanf( "%d", &a);

    if (a%6 == 0)
    {
        printf( "Input %d is divisible by 6", a);
    } else {
        printf( "Input %d is not divisible by 6" , a);
    }
    return 0;
}