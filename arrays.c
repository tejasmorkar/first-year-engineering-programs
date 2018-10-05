#include<stdio.h>
void main(){
	int i, marks[5], sum;
	float avg;
	sum = 0;
	for(i = 0; i < 5; i++){
		printf("\nEnter marks for subject code 14200%d\n", i);
		scanf("%d", &marks[i]);
		sum = sum + marks[i];
	}
	for(i = 4; i >= 0; i--){
		printf("%d\n", marks[i]);
	}
	avg = sum / 5;
	printf("The sum is %d\n", sum);
	printf("The avg is %0.2f\n", avg);
} 
