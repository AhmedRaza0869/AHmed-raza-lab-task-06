#include<stdio.h>
int main()
{
	int i,j,sum=0,sum1=0;
printf("Sum of even numberstill 20\n");
for(i=2;i<=20;i+=2)
{
	sum+=i;
}
	printf("Sum of even numbers till 20 is %d\n",sum);
for(j=1;j<=20;j++)
{
	{
		if(j%2!=0)
		{
			sum1=sum1+j;
		}
	}

	
}
	printf("\nSum of odd numbers till 20 is %d",sum1);
	return 0;
		
	}
