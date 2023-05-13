#include<stdio.h>
int main()
{
    int t,x,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        for(i=x; i>=0; i--)
        {
            if(i==0) printf("1");
            else if(i==1) printf("2 + ");
            else  printf("2^%d + ",i);
        }
        printf("\n");
    }
}
//Find out everyWhere ©Alraaafi
