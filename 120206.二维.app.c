#include<stdio.h>
int main()
{
    int i;
    int arr[]={250,38,1314,520};
    int array2d[2][3]=
    {
        {34324,23434,564},
        {46234,24234,525},
    };
        int row,column;
    for(row=0;row<2;row++)
        {
        for(column=0;column<3;column++)
            {
            printf("%d ",array2d[row][column]);
            }
        printf("\n");
        }
    return 0;
}
