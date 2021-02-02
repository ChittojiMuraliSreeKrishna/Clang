#include <stdio.h>
void main(){
    char hey[30];
    printf("Enter username: ");
    scanf("%s", hey);
    printf("Username: %s.\n", hey);
    printf("Ascii value: %d \n", hey);
    int num1, num2, sum;
    printf("enter the two numbers: \n");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, sum);
    float num3, num4, num5, fsum;
    printf("enter the three numbers: \n");
    scanf("%f%f%f", &num3, &num4, &num5);
    fsum = num3 + num4 + num5;
    printf("%f + %f + %f = %f \n", num3, num4, num5, fsum);

}
