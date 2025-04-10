// Practica 8 Ariel Anaya
// Ejercicio 10 
// do-while 
#include <stdio.h>

void main()
{
   int s = 0; 
   int i = 0;
   int n;
   printf("introduzca un numero");
   scanf("%d", &n);
   
   do{
       s = s + n;
       printf("Suma: %d \n", s);
       printf("introduzca otro numero");
       scanf("%d", &n);
       
       i++;
   }
   while(i <= 10 && s <= 100);
   
   if(s > 100){
       printf("La suma de los numeros es mayor a 100");
   }
   else{
       printf("Se introdujeron 10 numeros");
   }
}
