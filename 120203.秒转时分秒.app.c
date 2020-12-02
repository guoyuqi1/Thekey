#include<stdio.h>
int main()
{
    int i,a,b,c;
    printf("欢迎使用死兆星软件！\n");
    printf("请输入秒数:\n");
    scanf("%d",&i);
        a=i/3600;
        b=i/60;
        c=i%60;
        if(a<10)
            {
            printf("0%d:",a);
            }
        else
            {
            printf("%d:",a);
            }
        if(b<10)
            {
            printf("0%d:",b);
            }
        else
            {
            printf("%d:",b);
            }
        if(c<10)
            {
            printf("0%d:",c);
            }
        else
            {
            printf("%d:",c);
            }
    return 0;
}
