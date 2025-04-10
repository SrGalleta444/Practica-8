// Practica 8 Ariel Anaya
//Ejercicio 6 

#include <stdio.h>
void main()
{
    int n = 0;
    int s = 0;
    int res = 0;
    int i = 0;
    
    printf("dame un numero");
    scanf("%d", &n);
    
    while(n != 0){
        printf("Haz introducido el numero: %d \n", n );
        s = res + n;
        res = s;
        printf("dame otro numero");
        scanf("%d", &n);
        i++;
    }
    
    printf("Finalizado. Haz introducido el numero: %d \n", n);
    printf("cantidad de numeros introducidos: %d \n", i);
    printf("La suma total es: %d \n", s);
}
