#include<stdio.h>
#include<math.h>
int main()
{
        int i,isprime=1,n;
        printf("Enter any number");
        scanf("%d",&n);
        for(i=2;i<=sqrt(n);i++)
        {
            if((n%i)==0)
            {

                isprime=0;

                break;
                }
        }
            if(isprime==1)
                printf("%d prime",n);
            else
                printf("%d composite",n);
            return 0;
}
