#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,sln,count=0;
    char str[10001],ch;
    scanf("%llu",&t);
    for(i=1; i<=t; i++)
    {
        fflush(stdin);
        gets(str);
        scanf("%c",&ch);

        sln = strlen(str);
        for(j=0; j<sln; j++){
            if(str[j]==ch) count++;
        }

        if(count==0) printf("'%c' is not present\n");
        else printf("Occurrence of '%c' in '%s' = %d\n",ch,str,count);
        count = 0;

    }

}
//Find out everyWhere ©Alraaafi
