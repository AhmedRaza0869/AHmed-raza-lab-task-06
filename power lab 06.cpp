#include<stdio.h>
#include<math.h>
int main()
{
long long power,number;
long long  cal;
printf("Enter any number you want to calculate its power:\n");
scanf("%lld",&number);
printf("Enter the power:\n");
scanf("%lld", &power);
cal=pow(number,power);
printf("The number %lld^%lld is equal to %lld",number,power,cal);
return 0;

}