// Add some code
#include<stdio.h>
int main()
{
    int i,n,t,sum,f,l;
    scanf("%d",&t);

    for(i=1; i<=t; i++){
       scanf("%d",&n);
       f = n/10000;
       l = n%10;
       sum = f+l;
       printf("Sum = %d\n",sum);

    }

}
//Find out everyWhere ©Alraaafi
