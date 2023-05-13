#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
    scanf("%d",&n);
    sq = sqrt(n);
    if(sq*sq==n) printf("YES\n");
    else  printf("NO\n");
    }

}
//Find out everyWhere ©Alraaafi
