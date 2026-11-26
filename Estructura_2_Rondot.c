#include <stdio.h>

typedef struct{
char nombre[30];
int edad;
int anio;
} Alumno;

int main(){

Alumno alumnos[3];
int i;

for(i=0;i<3;i++){
printf("\nAlumno %d\n",i+1);

printf("Nombre: ");
scanf("%s",alumnos[i].nombre);

printf("Edad: ");
scanf("%d",&alumnos[i].edad);

printf("Anio: ");
scanf("%d",&alumnos[i].anio);
}

printf("\nDatos ingresados:\n");

for(i=0;i<3;i++){
printf("\nAlumno %d\n",i+1);
printf("Nombre: %s\n",alumnos[i].nombre);
printf("Edad: %d\n",alumnos[i].edad);
printf("Anio: %d\n",alumnos[i].anio);
}

return 0;
}
