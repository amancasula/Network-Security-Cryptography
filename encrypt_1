#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
int n,i;
char alpha[26]="abcdefghijklmnopqrstuvwxyz";
char word[30];
int num[30];
int key;
printf("enter word  ");
scanf("%s",&word);
n=strlen(word);
for(i=0;i<n;i++)
num[i]=toascii(tolower(word[i])-'a');
printf("enter key ");
scanf("%d",&key);
for(i=0;i<n;i++)
num[i]=(num[i]+key)%26;
for(i=0;i<n;i++)
word[i]=alpha[num[i]];
printf("encrypted word:  ");
printf("%s\n",word);
for(i=0;i<n;i++)
{
num[i]=(num[i]-key)%26;
if(num[i]<0)
num[i]=num[i]=26;
word[i]=alpha[num[i]];
}
printf("decrypted word:  ");
printf("%s\n",word);
return 0;
}


