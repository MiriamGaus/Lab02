#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{
    // declare variables
    double a;
    double b;
    double c;

    // get user input
    printf("Enter the value for a: ");
    scanf("%lf", &a);
    printf("Enter the value for b: ");
    scanf("%lf", &b);
    printf("Enter the value for c: ");
    scanf("%lf", &c);

    /* calculate the discriminant   <-- this is a comment for multiple lines
     the discriminant is: b² - 4ac
    */
   double discimiant = b * b - 4 * a * c;

    // according to the value of the discriminant, calculate the roots and print the results

    if (discimiant > 0) {
        double x1 = (- b + pow(discimiant, 0.5)) / (2 * a);
        double x2 = (- b - pow(discimiant, 0.5)) / (2 * a);
        printf("There are two solutions:\nx1 = %.1f\nx2 =%.1f\n", x1,x2);
    } else if (discimiant == 0) {
        double x = - b / (2 * a);
        printf("There is one solution:\nx = %.1f\n", x);
    } else {
        printf("There is no solution.\n");
    }
    
    return 0;
}