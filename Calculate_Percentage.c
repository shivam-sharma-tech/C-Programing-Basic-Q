#include<stdio.h>

/* We have calculate total marks of percentage */


int main(){
	
	float percentage;
	int total_marks = 600;
	int score_marks = 500;
	
	percentage= (float) score_marks / total_marks * 100;
	
	printf("Percentage is = %.2f%% ", percentage);
	
	
	return 0;
}
