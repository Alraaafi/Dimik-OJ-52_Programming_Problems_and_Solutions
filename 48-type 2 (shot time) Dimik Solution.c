#include<stdio.h>
int main()
{
    int t,temp,n,i,sum,miss,total;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=1; i<n; i++){
            scanf("%d",&temp);
            sum = sum + temp;
        }
        n++;
        total = (n*(n-1))/2.0;
        miss = total - sum;
        printf("%d\n",miss);

    }
}
//Find out everyWhere ©Alraaafi
