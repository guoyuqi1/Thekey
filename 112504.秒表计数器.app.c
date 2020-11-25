#include<stdio.h>
#include<windows.h>
int main()
{
	int i=1;
	do{
		Sleep(500);
	printf("%d\n",i++);
	}
while(i<=10000);
return 0;
}
