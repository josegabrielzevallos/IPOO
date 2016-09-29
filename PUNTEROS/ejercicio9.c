#include <stdio.h>
#include <string.h>

void reverse(char *s)
{
    int c,i,j;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
}

int  main()
{
    char s[30]="happy";
    reverse(s);
    printf("%s",s);

}
