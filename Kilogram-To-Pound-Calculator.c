#include <stdio.h>

int main()
{
    float kg, lb;

    printf("Enter the value in Kilogram: ");
    scanf("%f", &kg);

    lb = kg * 2.20462;

    printf("%.2f Kilogram is %.2f pound.", kg, lb);
    
    return 0;
}