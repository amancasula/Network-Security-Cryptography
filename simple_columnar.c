#include<stdio.h>
#include<string.h>

int main()
{
    int klen,coln,rown,var,s;
    char k[20];
    char k1[20];
    char k2[20];
    char pt[40];
    char ct[40];
    int l=0;
    int x=1;
    printf("enter key length");
    scanf("%d",&klen);
    printf("enter key sequence");
    scanf("%s",k);
    printf("enter plain text");
    scanf("%s",pt);
     for(int i=0;i<klen;i++)
    {
     k1[i]=k[i];
    }
    int var3;
    for(int i=0;i<klen;i++)
    for(int j=i+1;j<klen;j++)
    if(k1[i]>k1[j])
    {
    var3=k1[i];
    k1[i]=k1[j];
    k1[j]=var3;
    }
     int o=0;
   int w=1;
    
   for(int i=0;i<klen;i++)
   for(int j=0;j<klen;j++)
    {
    if(k1[i]==k[j])
     {
     if(k1[i]==k1[i-1])
     {
      continue;
     }
     k2[j]=w;
     w++;
      }
    }
    int checker=strlen(pt);
    while(1)
    if(strlen(pt)%klen!=0)
    {
        s=strlen(pt);
        pt[s]='x';
    }
    else 
    {
        break;
    }
    rown=strlen(pt)/klen;
    coln=klen;
    char arr[rown][coln];
    for(int i=0;i<rown;i++)
    for(int j=0;j<coln;j++)
    {
        arr[i][j]=pt[l];
        l++;
    }
    for(int i=0;i<rown;i++)
    {
    printf("\n");
    for(int j=0;j<coln;j++)
    {
        printf("%c  ",arr[i][j]);

    }
    }
    int cs=0;
    printf(" \n CIPHER TEXT:");
    while(x<=coln)
    {
    for(int i=0;i<coln;i++)
    {
        if(k2[i]==x)
        var=i;
    }
    for(int j=0;j<rown;j++)
    {
        printf("%c",arr[j][var]);
        ct[cs]=arr[j][var];
        cs++;
    }
    x++;
    }
     printf(" \n PLAIN TEXT:" );
    //DECRYPTION
    char b[rown][coln];
    int var2;
    int y=1;
    int count=0;
    while(y<=klen)
    {
    for(int i=0;i<klen;i++)
    {
        if(k2[i]==y)
        var2=i;
    }
    for(int j=0;j<rown;j++)
    {
        b[j][var2]=ct[count];
        count++;
    }
    y++;
    }
    int lcheck=0;
    for(int i=0;i<rown;i++)
    for(int j=0;j<coln;j++)
    {
        if(lcheck<=checker)
        {
        printf("%c",b[i][j]);
        lcheck++;
        }
    }
      return 0;
}
