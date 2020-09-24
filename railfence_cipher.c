#include <stdio.h>
#include<string.h>
int main()
{
    int k=0,r=0,k1=-1;
    char pt[50],ct[50],pt2[50];
    char a[50][50];
    printf("enter the plain text");
    scanf("%s",pt);
    printf("enter key");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    for(int j=0;j<strlen(pt);j++)
    {
        a[i][j]=0;
    }
    for(int i=0;i<strlen(pt);i++)
    {
        a[r][i]=pt[i];
        if(r==0 || r==k-1)
        {
            k1=k1*(-1);
        }
        r=r+k1;
    }
    int c=0;
    for(int i=0;i<k;i++)
    {
    printf("\n");    
    for(int j=0;j<strlen(pt);j++)
    {
        if(a[i][j]!=0)
        {
            printf("%c",a[i][j]);
            ct[c]=a[i][j];
            c++;
        }
        else
        printf(" ");
    }
    }
    printf("%s",ct);
    
    //DECRYPTION
    char b[50][50];
    for(int i=0;i<k;i++)
    for(int j=0;j<strlen(pt);j++)
    {
        b[i][j]='o';
    }
    r=0;k1=-1;
    for(int i=0;i<strlen(pt);i++)
    {
        b[r][i]='l';
        if(r==0 || r==k-1)
        {
            k1=k1*(-1);
        }
        r=r+k1;
    }
    int d=0;
   for(int i=0;i<k;i++)
   for(int j=0;j<strlen(pt);j++)
   if(b[i][j]=='l')
   {
   b[i][j]=ct[d];
    d++;
   }r=0;
   k1=-1;
   printf("\n");
    for(int i=0;i<strlen(pt);i++)
    {
        printf("%c",b[r][i]);
        if(r==0 || r==k-1)
        {
            k1=k1*(-1);
        }
        r=r+k1;
    }
  

    
    return 0;
}


