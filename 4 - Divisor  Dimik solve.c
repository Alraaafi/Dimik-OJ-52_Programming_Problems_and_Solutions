#include<stdio.h>
int main()
{
    int j,dv,i,n;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&dv);
        printf("Case %d:",i);

        for(j=1; j<=dv; j++)
        {
            if(dv%j==0)
            {
                printf(" %d",j);
            }
        }
        printf("\n");
    }
}
//Find out everyWhere ©Alraaafi
