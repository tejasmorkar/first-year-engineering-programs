#include<stdio.h>
void main(){
	char c;
	printf("Enter a character\n");
	scanf("%c", &c);
	if(c >= 65 && c <= 90)
		printf("The given char is caps\n");
	else
		printf("The given char is not caps\n");
}
