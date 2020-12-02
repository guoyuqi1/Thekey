#include<stdio.h>
int main()
{
    char n;
    printf("欢迎使用本奥德赛软件\n");
    printf("请输入WASD来控制方向\n");
    scanf("%c",&n);
    switch(n)
{
        case 'w':printf("你在点击“上”键\n");break;
        case 'a':printf("你在点击“左”键\n");break;
        case 's':printf("你在点击“下”键\n");break;
        case 'd':printf("你在点击“右”键\n");break;
        case 'j':printf("轻拳\n");break;
        case 'k':printf("轻脚\n");break;
        case 'l':printf("格挡\n");break;
        case 'u':printf("重拳\n");break;
        case 'i':printf("重脚\n");break;
        case 'o':printf("爆气\n");break;
        default:printf("无效键");
}
return 0;
}
