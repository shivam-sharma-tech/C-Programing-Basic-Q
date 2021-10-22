#include<stdio.h>


/* We are swapped two element to eachother by using only two variable. */

int main(){
	
	int a,b;
	
	printf("Enter the two value to swapping:\n");
	scanf("%d%d", &a,&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	 printf("After Swapped: a = %d, b = %d", a, b);
		
	return 0;
}
