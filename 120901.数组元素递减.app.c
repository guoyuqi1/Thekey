#include<stdio.h>
int main()
{
	int row,column;
	int arr[9][10]={0};
	for(row=0;row<9;row++){
		for(column=0;column<10;column++){
			printf("%d ",arr[row][column]);}
	printf("\n");
	}
	for(row=0;row<9;row++){
		for(column=0;column<10;column++){
			arr[row][column]=(8-row)*10+(9-column)+1;
			printf("%-2d ",arr[row][column]);}
	printf("\n");
	}
	return 0;
}
