#include <stdio.h>

typedef struct alumno{
char nombre[30];
int edad;
int anio;
} alumno;

int main(){

alumno alumno1;

printf("Ingrese el nombre del alumno:\n");
scanf("%29s",alumno1.nombre);

printf("Ingrese la edad del alumno:\n");
scanf("%d",&alumno1.edad);

printf("Ingrese anio:\n");
scanf("%d",&alumno1.anio);

printf("Nombre: %s\n",alumno1.nombre);
printf("Edad: %d\n",alumno1.edad);
printf("Anio: %d\n",alumno1.anio);

return 0;
}
