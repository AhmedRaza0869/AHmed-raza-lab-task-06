#include<stdio.h>
int main()
{
	int n,i;
	long f=0,s=1,n1;
	printf("Enter number of n terms to find the fibonacci series:\n");
	scanf("%d", &n);
	if(n==0)
	{
		return 0;
	}
	else
	printf("\nFibonacci series\n");
	for(i=1;i<=n;i++){
		printf("%ld\n",f);
		n1=f+s;
		f=s;
		s=n1;
	}
	printf("\n");
	return 0;
	
	
	
}