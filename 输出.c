#include<stdio.h>
int main()
{
int i;                                    //i可以替换成user_num
int arr[ ]={31,28,31,30,31,30,31,31,30,31,30,31};
for(i=1;i<=12;i++)
{
printf("%d\n",arr[i]);
}
scanf("%d",&i);
printf("%d\n",arr[i-1]);
return 0;
}
