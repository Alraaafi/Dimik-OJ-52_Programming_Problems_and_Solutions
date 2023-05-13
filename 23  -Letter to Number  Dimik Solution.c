#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t;
    char s[102];
    scanf("%d",&t);

    for(i=1; i<=t; i++){
        scanf("%s",s);
        for(j=0; s[j]!='\0'; j++){
            printf("%d",s[j]-64);
        }
        printf("\n");
    }
}
//Find out everyWhere ©Alraaafi
