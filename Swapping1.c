#include<stdio.h>

/* We are swapped two element to eachother by using temp variable. */

int main(){
	
	
	int a,b;
	
	printf("Enter the two value to swapping: \n");
	scanf("%d %d", &a, &b);
	
	
	int temp=a;
	a=b;
	b=temp;
	
	printf("After swapping the value is: a = %d, b = %d",a,b);
	
	
	return 0;
}
