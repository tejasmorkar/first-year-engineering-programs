#include<stdio.h>
void main(){
	int input, result, i, j;
	char grid[3][3] = {'-','-','-','-','-','-','-','-','-'};
		result = 0;
		printf("Welcome to the TicTacToe game!\nUse your NumPad as a grid layout and play turn by turn.\nLet's Begin!\n");
		for(j = 0; j < 3; j++){
			printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
		}
		for(i =0; i < 9; i++){
			if (i % 2 == 0){
				scanf("%d", &input);
				if( input == 1 ){
					grid[2][0] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 2 ){
					grid[2][1] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 3 ){
					grid[2][2] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 4 ){
					grid[1][0] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 5 ){
					grid[1][1] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 6 ){
					grid[1][2] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 7 ){
					grid[0][0] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 8 ){
					grid[0][1] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 9 ){
					grid[0][2] = 'X';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
			}
			else{
				scanf("%d", &input);
				if( input == 1 ){
					grid[2][0] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 2 ){
					grid[2][1] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 3 ){
					grid[2][2] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 4 ){
					grid[1][0] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 5 ){
					grid[1][1] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 6 ){
					grid[1][2] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 7 ){
					grid[0][0] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 8 ){
					grid[0][1] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
				if( input == 9 ){
					grid[0][2] = 'O';
					for(j = 0; j < 3; j++){
						printf("%c \t %c \t %c\n", grid[j][0], grid[j][1], grid[j][2]);
					}
				}
			}
		}
}
