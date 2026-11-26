#include <stdio.h>

typedef struct{
int edad;
char iniciales[5];
char sangre[5];
float altura;
} Paciente;

int main(){

Paciente p;
int opcion;

printf("Ingrese edad: ");
scanf("%d",&p.edad);

printf("Ingrese iniciales: ");
scanf("%s",p.iniciales);

printf("Ingrese tipo de sangre: ");
scanf("%s",p.sangre);

printf("Ingrese altura: ");
scanf("%f",&p.altura);

do{

printf("\n--- MENU ---\n");
printf("1. Edad\n");
printf("2. Iniciales\n");
printf("3. Tipo de sangre\n");
printf("4. Altura\n");
printf("5. Salir\n");
printf("Opcion: ");
scanf("%d",&opcion);

switch(opcion){

case 1:
printf("Edad: %d\n",p.edad);
break;

case 2:
printf("Iniciales: %s\n",p.iniciales);
break;

case 3:
printf("Tipo de sangre: %s\n",p.sangre);
break;

case 4:
printf("Altura: %.2f\n",p.altura);
break;

case 5:
printf("Programa finalizado\n");
break;

default:
printf("Opcion incorrecta\n");
}

}while(opcion!=5);

return 0;
}
