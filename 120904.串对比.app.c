#include<stdio.h>
#include<string.h>
int main()
{
    printf("欢迎使用TX软件！\n");
    char s1[]="welcome to use TX !\n";
    char s2[]="we'll come to you STX!\n";
    if(strcmp(s1,s2)==0){
        printf("相同\n");
    }
    else{printf("不相同\n");}
    return 0;
}
