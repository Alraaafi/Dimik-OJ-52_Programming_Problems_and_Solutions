#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,v=0;
    char str[1002];
    scanf("%d",&t);

    for(i=1; i<=t; i++){
        scanf(" %[^\n]",str);

        for(j=0; j<strlen(str); j++){
            if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u'){
                v++;
            }
        }
        printf("Number of vowels = %d\n",v);
        v=0;
    }
}
//Find out everyWhere ©Alraaafi
