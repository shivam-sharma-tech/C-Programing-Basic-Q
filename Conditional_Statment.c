#include<stdio.h>

int main(){
	
	int age;
	
	printf("Enter your Age:\n");
	scanf("%d", &age);
	
	if(age>=18){
		printf("You can vote now");
	}else{
		
	 printf("Your age is less than 18 so You can not vote now.");
	 
	}
	
	return 0;
}
