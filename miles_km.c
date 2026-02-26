#include <stdio.h>

int main (void) 
{
    double distance_miles;
    double distance_kilometres; 

    printf("enter distance in miles");
    scanf("%lf", &distance_miles);

    distance_kilometres = distance_miles * 1.609;

    printf("that equals %lf kilometres\n", distance_kilometres);

    return 0;
}
