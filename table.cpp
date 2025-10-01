#include<stdio.h>
int main()
{
	int n,m,c;
	do
	{
		printf("For which number you need its table:\n");
		scanf("%d", &n);
		printf("Table of %d\n",n);
		for(int i=1;i<=10;i++)
		{
			m=n*i;
			printf("%d*%d=%d\n",n,i,m);
		}
		printf("\aDo you want to print another table (any number) for yes, (0) for No\n");
		scanf("%d", &c);
		if(c==0)
		{
			return 0;
		}
		}
	while(c=1);

return 0;
}
