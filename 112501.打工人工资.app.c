#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i>0 && i<=100)
        {
        printf("贫困打工人");
        }
    else if(i>=101 && i<=1000)
        {
        printf("一般打工人");
        }
        else if(i>=1001 && i<=20000)
        {
        printf("土豪打工人");
        }
            else if(i<=0)
        {
        printf("输入有误，请重新输入");
        }
        else
            {
            printf("人上人");
            }
        return 0;
}
