#include <stdio.h>
#include <math.h>

int main()
{
    float deg, rad;
    const float pi = 3.14;

    printf("Enter the Angle (in Degree):  ");
    scanf("%f", &deg);

    rad = deg * (pi / 180.0);

    printf("sin(%.2f) = %.2f\n", deg, sin(rad));
    printf("cos(%.2f) = %.2f\n", deg, cos(rad));
    printf("tan(%.2f) = %.2f\n", deg, tan(rad));
    printf("cot(%.2f) = %.2f\n", deg, 1/tan(rad));
    printf("sec(%.2f) = %.2f\n", deg, 1/cos(rad));
    printf("cosec(%.2f) = %.2f\n", deg, 1/sin(rad));

    return 0;

}