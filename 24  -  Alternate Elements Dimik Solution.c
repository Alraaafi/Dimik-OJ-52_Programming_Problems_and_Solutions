#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,n;
    scanf("%d",&t);

    for(i=1; i<=t; i++){
        scanf("%d",&n);
        int arr[n];
        for(j=0; j<n; j++){
          scanf("%d",&arr[j]);
        }

        if(n%2==0) k = 2;
        else if(n%2!=0) k = 1;
        for(j=0; j<n-k;j+=2){
          printf("%d ",arr[j]);
        }
        printf("%d\n",arr[j]);

    }
}
//Find out everyWhere ©Alraaafi
