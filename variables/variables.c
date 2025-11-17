#include <stdio.h>

int main() {
    float centigrades, fahrenheit;

    centigrades=60;
    fahrenheit = ((9*centigrades)/5) + 32;

    printf( "The temperature %f Celsius\n" , centigrades);
    printf(" equals %f Fahrenheit", fahrenheit);
    return 0;
    
}