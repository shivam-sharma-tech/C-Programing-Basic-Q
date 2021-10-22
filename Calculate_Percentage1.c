#include<stdio.h>

int main(){
	
	int phy, che, eng, hind, math;
	float per;
	
	printf("Enter the five subject of marks: \n");
	scanf("%d%d%d%d%d", &phy, &che, &eng, &hind, &math);
	
	/* Divide sum of all subjects by total number of subject to find average i.e. average = total / 5. */
	
	per = (phy + che + eng + hind + math) / 5.0;
	
	printf("Percentage = %.2f\n", per);
	
	/* Finding grade acording to marks */
	
	if(per >= 90){
		
		printf("Grade A");
	}
	
	else if(per >= 80){
		
		printf("Grade B");
	}
	
	else if(per >= 70){
		
		printf("Grade C");
	}
	
	else if(per >= 60){
		
		printf("Grade D");
	}
	
	else if(per >= 40){
		
		printf("Grade E");
	}
	
	else{
		
	printf("Grade F");
		
	}
	
	return 0;
}
