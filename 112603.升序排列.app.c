#include<stdio.h>
int main()
{
int a,b,c,t;
printf("请输入三个数字");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
t=b;
b=a;
a=t;
}
if(a>c)
{
t=c;
c=a;
a=t;
}
if(b>c)
{
t=c;
c=b;
b=t;
}
printf("%d\n%d\n%d\n",a,b,c);
return 0;
}
