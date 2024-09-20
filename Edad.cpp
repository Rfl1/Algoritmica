#include<conio.h>//*fecha de nacimiento*⁄⁄
#include<stdio.h>

int main()
{
    int dia, mes, ano, edad;
    printf("Inserta tu dia de nacimiento:");
    scanf("%d", &dia);
    
    printf("Inseta tu mes de nacimiento:");
    scanf("%d", &mes);
    
    printf("Inserta tu ano de nacimiento:");
    scanf("%d", &ano);
    
    
    edad=2024-ano;
    printf("tu edad es %d",edad);
    
    getch();
    return 0;
}