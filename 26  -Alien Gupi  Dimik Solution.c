#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,day=0;
    double n;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%lf",&n);
        while(n>=1.00){
            n = n/2;
            day++;
        }
        printf("%d days\n",day);
        day=0;
    }
}
//Find out everyWhere ©Alraaafi
