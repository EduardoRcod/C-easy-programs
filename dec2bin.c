#include <stdio.h>

int main()
{
int n, bin[999];
int i = 0;

printf("Ingresa el numero decimal a convertir: ");
scanf("%i",&n);

while (n !=0)
{
    bin[i] = n % 2;
    n = n / 2;
    i++;
}
i--;
printf("El numero en binario es: ");
while (i>=0)
{
    printf("%i",bin[i]);
    i--;
}
return 0;
}
