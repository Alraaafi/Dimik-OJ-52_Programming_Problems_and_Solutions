#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,x,k,i,sum=0;
    scanf("%d",&t);
    while(t--){
      scanf("%d%d",&x,&k);
      for(i=0; i<=k; i++){
        sum = sum + pow(x,i);
      }
      printf("Result = %d\n",sum);
      sum = 0;
    }
}
//Find out everyWhere ©Alraaafi
