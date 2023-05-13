// Add some code
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,sum=0,ln;
    char str[100001]; //10000001
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        fflush(stdin);
       gets(str);
       ln = strlen(str);
       for(j=0; j<ln; j++){
        if(str[j]>='0' && str[j]<='9' && str[j+1]==' ') sum++;
       }
       printf("%d\n",sum+1);
       sum = 0;

    }

}
//Find out everyWhere ©Alraaafi
