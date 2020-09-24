#include<stdio.h>
#include<string.h>
int main()
{
char alpha[27]="abcdefghijklmnopqrstuvwxyz";
char pt[20];
int k[20];
int k1[20];
int k2[20];
printf("enter plain text");
scanf("%s",pt);
printf("enter key");
for(int i=0;i<strlen(pt);i++)
scanf("%d",&k[i]);
//ENCRYPTION
for(int i=0;i<strlen(pt);i++)
{
k1[i]=modd((k[i]+pt[i]-97),26);
k1[i]=modd(k1[i],26);
}
printf("cipher text: ");
for(int i=0;i<strlen(pt);i++)
printf("%c ",alpha[k1[i]]);
//DECRYPTION
printf("plain text:");
for(int i=0;i<strlen(pt);i++)
{
k2[i]=k1[i]-k[i];
k2[i]=modd(k2[i],26);
printf("%c",alpha[k2[i]]); 
}
return 0;
}
int modd(int a,int b)
{
if(a>=0)
return a%b;
else
return b+(a%b);
}
