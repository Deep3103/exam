#include <stdio.h>

int main()
{
    int n, num1,num2,num3, reverse;    

    printf("Enter the number to reverse:\n");
    scanf("%d", &n);

    num1 = n / 100;
    num2 = (n % 100) / 10;
    num3 = (n % 100)%10;

    reverse = num3*100+ num2*10+num1;
    printf("The reverse is %d", reverse);

    
    
}
