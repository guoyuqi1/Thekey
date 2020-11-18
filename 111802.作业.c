#include<stdio.h>
int main()
{
int i;
if(i<=500 && i>=0)
{
printf("\n赤贫\n");
}
else if(i<=1500 && i>=501)
{
printf("\n贫困\n");
}
else if(i<=3000 && i>=1501)
{
printf("\n普通打工人\n");
}
else if(i<=5000 && i>=3001)
{
printf("\n普通清洁工\n");
}
else if(i<=12000 && i>=5001)
{
printf("\n水电工工资\n");
}
else if(i<=50000 && i>=12001)
{
printf("\n脑袋大脖子粗不是老板就是伙夫\n");
}
else if(i<=200000 && i>=50001)
{
printf("\n程序员\n");
}
else i=-1;
{
printf("你还有花呗没还，无法使用该程序");
}
return 0;
}
