#include <stdio.h>

float convertir(char m[])
{
    int i,j=1;
    int a1=0;
    int a2;
    float num1=0;
    float num2=0;


    for(i=0;m[i]>='0'&&m[i]<='9';i++)
    {
        num1=10*num1+(m[i]-'0');
        a1++;//3
    }
    a1++;//4
    a2=a1;

    for(i=a1;m[i]>='0'&&m[i]<='9';i++)
    {
        num2=10*num2+(m[i]-'0');
        j*=10;
        a2++;//6
    }
    num2=num1+(num2/j);//num2 tiene el numero digital
    a2++;//7
    num1=0;

    for(i=a2+1;m[i]>='0'&&m[i]<='9';i++)
        num1=10*num1+(m[i]-'0');//obtiene el valor exponencial
    j=1;
    if(m[a2]=='-')
    {
        for(i=0;i<num1;i++)
            j*=10;
        return num2/j;
    }
    else if(m[a2]=='+')
    {
        for(i=0;i<num1;i++)
            j*=10;
        return num2*j;
    }
}

int main()
{
    char x[30]="123.45e-6";
    printf("Numero: %.10f",convertir(x));
}

