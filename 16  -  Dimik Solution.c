#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,k=0;
    char str[1002],word[1002];
    scanf("%d",&t);

    for(i=1; i<=t; i++){
        fflush(stdin);
        scanf(" %[^\n]",str);

        for(j=0; j<strlen(str); j++){

            if(str[j]==' '){
              word[k]='\0';
              printf("%s ",strrev(word));
              k = 0;
            }else{
              word[k] = str[j];
              k++;
            }
        }
        if(k>0){
            word[k]='\0';
            printf("%s\n",strrev(word));
            k = 0;
        }

    }
}
//Find out everyWhere ©Alraaafi
