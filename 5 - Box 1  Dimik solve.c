// Add some code
#include<stdio.h>
int main()
{
    int i,j,k,n,t;
    scanf("%d",&t);

    for(i=1; i<=t; i++){
       scanf("%d",&n);
        for(j=1; j<=n; j++){
            for(k=1; k<=n; k++){
                printf("*");
            }
            printf("\n");
        }
        if(i==t) break;
        printf("\n");

    }

}
//Find out everyWhere ©Alraaafi
