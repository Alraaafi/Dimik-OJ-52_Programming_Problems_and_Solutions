#include<stdio.h>
#include<math.h>
int main(){
    int t,n,digit=1,rem,sum=0,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        x = n;
        while(x/=10) digit++;
        x = n;
        while(x){
            rem = x%10;
            sum = sum + pow(rem,digit);
            x/=10;
        }
        //printf("arm=%d\n",sum);
        if(sum == n) printf("%d is armstrong number!\n",n);
        else printf("%d is not armstrong number!\n",n);
        digit=1;
        sum = 0;
    }
}
//Find out everyWhere ©Alraaafi
