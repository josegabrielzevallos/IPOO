void invertir(char *m){

	if (*m)
    {
        invertir(m + 1);
		printf("%c", *m);
	}
}
int main()
{
    char hola[40];
	scanf("%s",hola);
	invertir(hola);
    return 0;
}

