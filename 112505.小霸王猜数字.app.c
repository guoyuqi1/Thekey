#include<stdio.h>
int main()
{
int key=666;
int i;
printf("请猜数字660-670\n");
scanf("%d",&i);
if(i==key)
{
printf("PERFECT,YOU'RE THE WINNER!!!\n");
}
else if(i>key)
{
printf("YOU'RE TOO BIG,WHO I CAN'T UNDERSTAND\n");
}
else
{
printf("YOU'RE TOO SMOLE,WHO I CAN LAUGHED\n");
}
return 0;
}
