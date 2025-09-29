#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:\n");
	scanf("%d", &n);
	for(int i=1;n>=10;i++)
	{
		printf("%d",n%10);
		n= (n - (n%10)) / 10;
	}
	printf("%d", n);
	
	return 0;
}