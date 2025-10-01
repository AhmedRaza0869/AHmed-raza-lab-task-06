#include<stdio.h>
int main()
{
	int n,o,aub,res=0;
	printf("Enter any number:\n");
	scanf("%d", &n);
	o=n;
	while (n != 0) {
        aub = n % 10;
        res = res * 10 + aub;
        n = n / 10;
    }

    if (o == res)
        printf("%d is a palindrome.\n", o);
    else
        printf("%d is not a palindrome.\n", o);

	return 0;
	}