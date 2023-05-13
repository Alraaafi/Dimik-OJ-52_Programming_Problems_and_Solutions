#include<stdio.h>
int main()
{
    int j=0,i;
//scanf("%d",&n);

    for(i=1000; i>=1; i--)
    {
        j++;
        printf("%d ",i);
        if(j==5)
        {
            printf("\n");
            j=0;
        }
    }
}
//Find out everyWhere ©Alraaafi
