#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    printf("欢迎召唤师来到英雄联盟\n");
    printf("请输入您的召唤师名称\n");
    char s1[14];
    char s2[0];
    int i;
    scanf("%s",&s1);
    if(strcmp(s1,s2)==0)
        {
        printf("邀请你进行猜数字游戏\n");
        printf("如果您能猜对，那么您将免费获得一件传说级装备！！！\n");
        printf("（这个强制型的，你莫得选择！）\n");
        printf("请输入一个数字（660~670之间）\n");
        scanf("%d",&i);
        if(i>666 && i<=670)
            {
            printf("偷偷给您一个小提示：“您猜的数字有点大啦！”\n");
            }
        else if(i>=660 && i<666)
            {
            printf("偷偷给您一个小提示：“您猜的数字有点小啦！”\n");
            }
        else if(i==666)
            {
            printf("恭喜您猜对啦！\n");
            Sleep(2000);
            printf("接下来进入游戏您将获得传说级装备！\n");
            Sleep(2000);
            printf("祝您游戏愉快！\n");
            }
            else
                {
                printf("您输入的数字似乎不在受理范围呦！\n");
                }
        }
        else
            {
            printf("非法名称，请重新输入！\n");
            }
return 0;
}
