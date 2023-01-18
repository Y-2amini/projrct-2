/*include<stdio.h>
int main()
{
	int _n1=20;
	int n2=30,sum;
	sum =_n1 + n2;
	printf("sum of number:%d\n",sum);
	return 0;
}*/


/*                                      //void
#include<stdio.h>
void mul(int x,int y)
{
	printf("%d\n",x*y);         
}
void main()
{
	mul(3,4);
}*/


                                            //unsigned
/*#include<stdio.h>
int main()
{
	unsigned int X_=63;
	unsigned int Y_=91;
	unsigned int Z;
	Z=X_+Y_;
	printf("%u\n",Z);
	return 0;
}*/

                                           //auto

#include<stdio.h>
int main()
{
	auto int a=63;
	printf("%d\n",a);
	{
		auto int a=91;
		printf("%d\n",a);
	}
	printf("%d\n",a);
	return 0;
}

               
                                           //enum
/*					   
#include<stdio.h>
enum colors{blue=3,black,pink};
int main()
{
	enum colors c;
	c=pink;
	printf("%d\n",c);
	return 0;
}*/

