#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[10],sum=0;
    printf("Enter ten elements :");
    for(int i=0; i<10; i++)
    {
        scanf(" %d",&arr[i]);
        sum+=arr[i];
    }
    float mean=sum/(10.0);
    float n_variance=0.0;
    for(int i=0; i<10; i++)
    {
        n_variance+=pow(mean-arr[i],2);
    }
    float sd=sqrt(n_variance/10);
    printf("standard deviation = %.6f",sd);
    return 0;
}
