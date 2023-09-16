#include<stdio.h>
int main()
{
    int n,sn,rev,sr;
    printf("Enter value for n");
    scanf("%d",&n);
    sn=(n*n);
    printf("Square of %d is %d",&n,&sn);
    while(n!=0)
    {
              rev=n%10;
              n++;
    }
    sr=(rev*rev);
    if(sn==sr)
        printf("It is Adams no.");
    else
        printf("It is not a Adams no.");
    return 0;
    }
