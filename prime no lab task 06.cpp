#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,p ;
	printf("Enter a number:\n");
	scanf("%d", &n);
	if(n<2)
	{
		p=0;
	}
	else{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				p=0;
				break;
			}
		}
		
	}
	if(p)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	return 0;
	
}