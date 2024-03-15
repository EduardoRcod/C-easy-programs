//Programa para obntener n numero de terminos de la serie de Fibonacci.
#include <stdio.h>
int main()
{
    int a, b, resultado, n, i;
    printf("Indica el numero de terminos que deseas: ");
    scanf("%d", &n);

    a=0;
    b=1;

    for(i=1; i<=n; i++)
    {

        resultado = a + b;
        a = b;
        b = resultado;

        printf("%d ", a);
    }
return 0;
}
