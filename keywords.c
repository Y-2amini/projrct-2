#include<stdio.h>
int main()
{
	int a=63;
	int b=63;
	if (a==b)
		printf("a is equal to b:\n");
	                                           //if
//-------------------------------------------------------------------
int c=91;
int d=107;
if (c==d)
	                                           //if,else
	printf("c is equal to d");
else
		
	printf("c is not equal to d\n");
//------------------------------------------------------------------
                                                  //for,break
int i;
for (i=1;i<20;i++)
{
	printf("%d\n",i);
	if (i==10)
        break;
}
printf("break the value at the number i=%d\n",i);
//--------------------------------------------------------------------
                                                 //for,if,continue
int  j=1;
for (j=1;j<10;j++)
{
if (j==5)
{
	continue;
}
printf("%d\n",j);
}
//-------------------------------------------------------------------
/*int k;                                         //do,while,return
do
{
	printf("%d\n",k);
	k++;
}
while(k<5);*/
return 0;
}

