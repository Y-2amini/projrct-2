#include<stdio.h>
extern int i,j;
extern int k;

int main()
{
	char name='y';
	printf("%c\n",name);
	float a=11.3;
	double b=91.63,c;
	c=a+b;
	printf("%f\n",c);
	int i,j,k;
	i=12;
	j=10;
	k=i+j;
	printf("%d\n",k);
	return 0;
}

