#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,s=0,n1,n2,p=0,count=0;
    scanf("%d",&t);

    for(i=1; i<=t; i++){
        scanf("%d%d",&n1,&n2);
        for(j=n1; j<=n2; j++){
            for(k=2; k<j; k++){
                if(j%k==0){
                    p++;
                    break;
                }
            }
            if(p==0 && j!=1) count++;
            p = 0;
        }
        printf("%d\n",count);
        count=0;
    }
}
//Find out everyWhere ©Alraaafi
