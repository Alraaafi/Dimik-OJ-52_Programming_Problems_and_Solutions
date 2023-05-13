#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,s=0;
    char str[1002];
    scanf("%d",&t);

    for(i=1; i<=t; i++){
        scanf(" %[^\n]",str);

        for(j=0; str[j]!='\0'; j++){
            if(str[j]==' ' && (str[j+1]>='A' && str[j+1]<='z' ) ){
                s++;
            }
        }
        printf("Count = %d\n",s+1);
        s=0;
    }
}
//Find out everyWhere ©Alraaafi
