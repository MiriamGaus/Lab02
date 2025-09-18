#include <stdio.h>
#include <math.h>

int main()
{
    double x1;
    double x2;
    double y1;
    double y2;

    // get user input
    printf("Enter the x-value for the first point: ");
    scanf("%lf", &x1);
    printf("Enter the y-value for the first point: ");
    scanf("%lf", &y1);
    printf("Enter the x-value for the second point: ");
    scanf("%lf", &x2);
    printf("Enter the y-value for the second point: ");
    scanf("%lf", &y2);
    // calculate the length

    double distance = pow(pow(x2 - x1, 2) + pow(y2 - y1, 2), 0.5);

    // print the result
    printf("The distance between (%1.f,%1.f) and (%.1f,%.1f) is %f.\n", x1,y1,x2,y2,distance);

    return 0;
}