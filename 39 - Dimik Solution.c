// Add some code
#include<stdio.h>
#include<string.h>
int main()
{
    int t,isp,len,i,j=0;
    scanf("%d",&t);
    char str[1001],strRv[1001];
    while(t--){
        //gets(str);
        scanf("%s",str);
        len = strlen(str);
        for(i=len-1; i>=0; i--){
            strRv[j] = str[i];
            j++;
        }
        strRv[j]='\0';
        isp = strcmp(str,strRv);
        j = 0;

        if(isp==0) printf("Yes! It is palindrome!\n");
        else printf("Sorry! It is not palindrome!\n");


    }
}
//Find out everyWhere ©Alraaafi
