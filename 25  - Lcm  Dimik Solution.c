// Add some code
#include<stdio.h>
#include<string.h>
int main()
{
    long long unsigned i,t,n1,n2,rem,x,y,gcm,lcm,temp;
    scanf("%llu",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%llu %llu",&n1,&n2);
        x = n1;
        y = n2;

        if(x<y){
            temp = x;
            x = y;
            y = temp;
        }

        while(1){
            rem = x%y;
            x = y;
            y = rem;
           if(rem==0) break;
        }
        gcm = x;
        lcm = (n1*n2)/gcm;
        printf("LCM = %llu\n",lcm);
    }
}
//Find out everyWhere ©Alraaafi
