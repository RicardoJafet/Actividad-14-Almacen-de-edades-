/* Autor: Ricardo Jafet Granados Chable 17/03/2022
Programa que almacena las edades de un salon de clases de 10 alumnos
El programa calculara
-La media
-Varianza
-Desviación estandar
-Mediana
-Ordenar por edad */

#include<stdio.h>
#include<math.h>
#define MAX 10

int main(){
int edades[MAX], aux;
float media,suma=0, var, desviacion;
//Leer datos del teclado para llenar el arreglo completo
for (int i=0;i<MAX;i++){
printf("introduce la edad del alumno #%d:", i);
scanf("%d",&edades[i]);
}
//Imprimir todo el arreglo
printf("listado de Alumnos\n");
for (int i=0;i<MAX;i++){
printf("edad del alumno #%d: %d\n",i,edades[i]);
}
//Calcular la media
for (int i=0; i<MAX;i++){
suma=suma+edades[i];
}
media=suma/MAX;
printf("la media es %.2f\n",media);
//Varianza
suma=0;
for (int i=0; i<MAX;i++){
suma=suma+pow(edades[i]-media,2);
}
var=suma/MAX;
printf("La varianza es %.2f\n",var);
// Desviacion estandar
desviacion=sqrt(var);
printf("La desviacion estandar es %.2f\n",desviacion);
//Ordenamiento del arreglo por el metodo de la burbuja
//Usando el codigo de https://es.wikipedia.org/wiki/Ordenamiento_de_burbuja
for(int z = 1; z < MAX; ++z) {
for(int v= 0; v < (MAX - z); v++){
if(edades[v] > edades[v+1]){
aux = edades[v];
edades[v] = edades [v + 1];
edades[v+1] = aux;
}
}
}
//Imprimir todo el arreglo
printf("listado de Alumnos Ordenados \n");
for (int i=0;i<MAX;i++){
printf("edad del alumno #%d: %d\n",i,edades[i]);
}
return 0;
}
