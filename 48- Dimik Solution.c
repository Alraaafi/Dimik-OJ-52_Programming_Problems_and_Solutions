#include<stdio.h>
int main()
{
    int t,x,i,j,miss;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        int n[x-1];
        for(i=0; i<x-1; i++){
            scanf("%d",&n[i]);
        }
        int cnt = 0;
        for(j=1; j<=x; j++){
            for(i=0; i<x-1; i++){
            if(n[i]==j){
                cnt++;
                break;
            }
        }
        if(cnt==0){
            miss = j;
            break;
        }
        cnt = 0;
        }
        printf("%d\n",miss);
    }
}
//Find out everyWhere ©Alraaafi
