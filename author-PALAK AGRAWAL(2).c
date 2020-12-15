#include <stdio.h>
int isprime(int n)
{
	int i,f,c;
	for(i=0;i<n;i++)
	{
		if(n%c==0)
		c++;
	}
	if(c==2)
	{
		f=1;
	}
	else 
	{
		f=0;
	}
}
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",num);
	int r=isprime(num);
	if(r==1)
	printf("%d is prime",num);
	else
	printf("%d is not prime",num);
}
