#include<stdio.h>
int main()
{
	int a,b,c;
	a=3;
	b=4;
	c=5;
	if (a+b>c && b==c)
	{
	printf("真命题");
	}
	else
	{
	printf("假命题");
	}
	return 0;
}


int main()
{
	int a,b,c;
	a=3;
	b=4;
	c=5;
	if (a||b+c && b-c)
	{
	printf("真命题");
	}
	else
	{
	printf("假命题");
	}
	return 0;
}


int main()
{
	int a,b,c;
	a=3;
	b=4;
	c=5;
	if (!(a>b) && !c||1)
	{
	printf("真命题");
	}
	else
	{
	printf("假命题");
	}
	return 0;
}


int main()
{
	int a,b,c,x,y;
	a=3,b=4,c=5; 
	x=a,y=b;
	if (!(x=a) && (y=b) && 0)
	{
	printf("真命题");
	}
	else
	{
	printf("假命题");
	}
	return 0;
}


int main()
{
	int a,b,c;
	a=3;
	b=4;
	c=5;
	if (!(a+b)+c-1 && b+c/2)
	{
	printf("真命题");
	}
	else
	{
	printf("假命题");
	}
	return 0;
}
