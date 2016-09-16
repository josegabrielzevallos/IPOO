char convertir(char s[])
{
    int i;
    float n;

    n=0;
    int x=0;


    for (i=0;x!=1;++i)
    {
        if (s[i]=='e')
        {
            x=1;
            break;
        }
        if (s[i]=='.')
            continue;
        n=10*n+(s[i]-'0');
    }

    n=n/100000;
    printf("%f\n",n);

}

int main()
{

    char s[100]="123.45e-6";
    convertir(s);

    return 0;
}

