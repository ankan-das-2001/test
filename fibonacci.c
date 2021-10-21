#include<stdio.h>
#include<conio.h>
int main()
{
	int n0=0,n1=1,n2=0,i;
	printf("The Fibonacci series -\n %d %d", n0, n1);
	//printf(" %d", &n0);
	for(i=0; i<=10; i++)
	{
		n2=n1+n0;
		printf(" %d", n2);
		n0=n1;
		n1=n2;
	}
	return 0;
}
