/*
 * main.c
 */

/* Ceci est un test /*  */
int fct1(int *p)
{
    int a = p;
    return a + 4;
}

void fct2(int **a)
{
    int b = 1;
    *a = &b;
}

// Fonction main
int main(int argc, char *argv[])
{
    int a[10];
    int b;
    int c;
    int i;

    for (i = 0; i < 11; i++)
        a[i] = 0;
    b = fct1(a);
    fct2(&a[i]);

    return b;
}
