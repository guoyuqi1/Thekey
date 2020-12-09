#include<stdio.h>
#include<string.h>
int main()
{
    printf("吃吃货的日常\n");
    printf("请输入节日\n");
    char s1[50];
    scanf("%s",&s1);
    if(strcmp(s1,"春节"))
        {
            printf("给我安排饺子\n");
        }
        else if(strcmp(s1,"端午节"))
            {
            printf("给我安排饺子\n");
            }
        else if(strcmp(s1,"中秋节")){printf("给我安排月饼\n");}
        else if(strcmp(s1,"元宵节")){printf("给我安排元宵\n");}
        else{printf("暂无安排");}
    return 0;
}
