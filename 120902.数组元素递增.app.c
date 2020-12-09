#include<stdio.h>
int main()
{
	int row,column;
	int arr[19][20]={0};
	for(row=0;row<19;row++){
		for(column=0;column<20;column++){
			printf("%d ",arr[row][column]);}
	printf("\n");
	}
	for(row=0;row<19;row++){
		for(column=0;column<20;column++){
			arr[row][column]=(row)*10+(column)+1;
			printf("%-2d ",arr[row][column]);}
	printf("\n");
	}
	return 0;
}
