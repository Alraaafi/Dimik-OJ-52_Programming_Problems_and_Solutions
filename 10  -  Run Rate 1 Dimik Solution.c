#include<stdio.h>
int main()
{
    int terget,current,rem,i,t;
    double myRate,needRate;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
         scanf("%d%d%d",&terget,&current,&rem);
         myRate = (double)current/((300-rem)/6.0);
         needRate = (double)(terget-current+1)/(rem/6.0);
         printf("%.2lf %.2lf\n",myRate,needRate);
    }

}
//Find out everyWhere ©Alraaafi
