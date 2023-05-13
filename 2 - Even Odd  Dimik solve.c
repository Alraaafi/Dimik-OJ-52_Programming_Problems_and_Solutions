#include<stdio.h>
#include<string.h>
int main()
{
int n,i;
scanf("%d",&n);

for(i=1; i<=n; i++){
char a[101],ch[1];
scanf("%s",a);
int d,l = strlen(a);
ch[0] = a[l-1];
ch[1] = '\0';
d = atoi(ch);
//printf("%d\n",d);
if(d%2==0) printf("even\n");
else printf("odd\n");
}
}
//Find out everyWhere ©Alraaafi
