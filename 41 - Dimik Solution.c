#include<stdio.h>
#include<math.h>
long long unsigned fct(int n){
    long long unsigned i,f=1;
    for(i=1; i<=n; i++){
        f = f*i;
    }
    return f;
    f = 1;
}
int main()
{
    int t,x,j;
    double sum=0;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&x);
      for(j=1; j<=x; j++){
        sum = sum + ((double)j)/fct(j);
      }
      printf("%.4lf\n",sum);
      sum = 0;
     }
}
//Find out everyWhere ©Alraaafi
