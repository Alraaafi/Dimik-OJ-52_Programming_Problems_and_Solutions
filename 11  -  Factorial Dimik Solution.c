#include<stdio.h>
int main()
{
    long long unsigned fact=1,n,t,i,j;
    scanf("%llu",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%llu",&n);
        for(j=1; j<=n; j++){
            fact = fact*j;
        }
        printf("%llu\n",fact);
        fact = 1;
    }

}
//Find out everyWhere ©Alraaafi
