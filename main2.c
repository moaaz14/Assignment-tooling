#include <stdio.h>
#include <stdlib.h>
int IsPrime(int x)
{
    if(x==0 || x==1)
        return 0;
    else if(x==2 || x==3)
        return 1;
    else
    {
        int flag;
        for(int i=2; i<=(x/2); i++)
        {
            if((x%i)==0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        return flag;
    }
}
int main()
{
    int x,flag;
    do
    {
        flag=0;
        printf("Enter a number:");
        scanf(" %d",&x);
        for(int i=2; i<=(x-1); i++)
        {
            if(IsPrime(i))
            {
                for(int j=2; j<=(x-1); j++)
                {
                    if(IsPrime(j) && i+j==x)
                    {
                        printf("your number CAN be expressed as a sum of two prime numbers->%d+%d=%d\n",i,j,x);
                        flag=1;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        if(!flag)
            printf("your number CAN NOT be expressed as a sum of two prime numbers\n");
    }
    while(1);
    return 0;
}
