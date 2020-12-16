
#include <stdio.h>
int main()
{
    int x;
    printf("enter the no. to be divided");
    scanf("%d",&x);
    for(int i=0;i<=5;i+=1)
    {
        int y=x/i;
        printf("\n the quotient after dividing the given no. by %d is %d",i,y);
    }
    return 0;
}
