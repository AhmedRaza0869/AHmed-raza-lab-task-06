#include<stdio.h>
int main()
{
	int num,on,rem,res=0;
	printf("Enter any three digit number:\n");
	scanf("%d", &num);
	on=num;
	while(on!=0)
	{
		rem = on % 10;
        res += rem * rem * rem;
        on /= 10;
	}
	if (res == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
	
}