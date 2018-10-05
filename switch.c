#include<stdio.h>
void main(){
	int ch, a, b, c;
	do{
		printf("1. Sum\n");
		printf("2. Difference\n");
		printf("3. Product\n");
		printf("4. Quotiont\n");
		printf("5. Exit\n");
		printf("Kya hona aapko? 1, 2, 3, 4 ya 5?\n");
		scanf("%d", &ch);
		switch(ch){
			case 1: printf("Enter 2 number to be added\n");
					scanf("%d %d", &a, &b);
					c = a + b;
					printf("The result is %d\n", c);
					break;
			case 2: printf("Enter 2 number to be subtracted\n");
					scanf("%d %d", &a, &b);
					c = a - b;
					printf("The result is %d\n", c);
					break;
			case 3: printf("Enter 2 number to be multiplied\n");
					scanf("%d %d", &a, &b);
					c = a * b;
					printf("The result is %d\n", c);
					break;
			case 4: printf("Enter 2 number to be divided\n");
					scanf("%d %d", &a, &b);
					c = a / b;
					printf("The result is %d\n", c);
					break;
			case 5: printf("Thike, alvidaa!\n");
					break;
			default: printf("Abbe 1 aur 5 ke bichmeke number dena sirf!\n");
		}
	}while(ch != 5);
}
