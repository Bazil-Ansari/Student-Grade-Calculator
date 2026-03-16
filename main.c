#include <stdio.h>

int main() {

    float math, physics, programming;
    float average;

    printf("Enter marks for Math: ");
    scanf("%f", &math);

    printf("Enter marks for Physics: ");
    scanf("%f", &physics);

    printf("Enter marks for Programming: ");
    scanf("%f", &programming);

    average = (math + physics + programming) / 3;

    printf("Average = %.2f\n", average);

    if(average >= 90)
        printf("Grade: A\n");
    else if(average >= 75)
        printf("Grade: B\n");
    else if(average >= 60)
        printf("Grade: C\n");
    else
        printf("Grade: F\n");

    return 0;
}
