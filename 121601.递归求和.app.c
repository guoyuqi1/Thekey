#include<stdio.h>
int myfunction(int i)
{
    if(i<=0)
        {
        return 0;
        }
    return i+myfunction(i-1);
}
int main()
{
    int k;
    scanf("%d",&k);
    printf("%d",myfunction(k));
return 0;
}
