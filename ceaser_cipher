#include <stdio.h>
#include<string.h>
int main()
{
  char a[20];
  char b[20];
  char c[20];
  printf("ENTER PLAIN TEXT");
  scanf("%s",a);
  int i;
  // ENCRYPTION:
  printf("CIPHER TEXT: ");
  for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<97)
        {
        b[i]=((a[i]-65+3)%26)+65;
        printf("%c",b[i]);
        }
        else if(a[i]>=97)
        {
        b[i]=((a[i]-97+3)%26)+97;
        printf("%c",b[i]);   
        }
    }
    printf("\n");
    // DECRYPTION 
    printf("PLAIN TEXT: ");
    for(i=0;i<strlen(b)-1;i++)
    {
        if(b[i]>=65 && b[i]<97)
        {
             if(b[i]-65-3>=0)
            c[i]=((b[i]-65-3)%26)+65;
            else
            c[i]=26+(b[i]-65-3)+65;
            printf("%c",c[i]);
        }
        else if(b[i]>=97)
        {
            if(b[i]-97-3>=0)
            c[i]=((b[i]-97-3)%26)+97;
            else
            c[i]=26+(b[i]-97-3)+97;
            printf("%c",c[i]);
        }
    }
    return 0;
}

