#include <stdio.h>
#include <conio.h>

int main()
{
 float calificacion;

printf("Ingresa Calificacion: ");
scanf("%f", &calificacion);
if(calificacion>6)
{
    printf("Aprobado");
}
else
{
    printf("reprobaste \a");
}
  getch();

}