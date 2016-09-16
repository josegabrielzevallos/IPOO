int ubicacion(char t,char s[])
{
    int  i,cont=0;
    for (i=0;s[i]!='\0';i++)
        cont++;
    for(i=cont;i>0;i--)
        if(s[i-1]==t)
            return i-1;
    return -3;
}

int main()
{
    char x[]="mundo";
    printf("%d",ubicacion('o',x));
    return 0;
}
