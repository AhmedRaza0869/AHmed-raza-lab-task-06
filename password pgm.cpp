#include<stdio.h> 

int main() { 
    int password = 5000, n; 
    
    do { 
        printf("Enter password: "); 
        scanf("%d", &n); 
        
        if (n == password) { 
            printf(" Password Matched\n"); 
        } 
        else
        {
        	printf("\nEnter your password again:!!!");
		}
    } while (n != password); 
    
    return 0; 
}