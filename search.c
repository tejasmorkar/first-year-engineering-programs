#include<stdio.h>
void main(){
	int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, i, n, flag;
	printf("Enter the number you wish to search\n");
	scanf("%d", &n);
	flag = 0;
	for (i = 0; i < 10; i++){
		if ( list[i] == n ){
			flag = i;
			break;
		}
	}
	if (flag != 0)
		printf("Your number was found in the array at position #%d\n", flag);
	else
		printf("Your number was not found in the array\n");
}

