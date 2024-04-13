#include <stdio.h>
#define END_OF_VECTOR -1
int main()
{
    int factores[]={1,3,10,20,END_OF_VECTOR};

    int *pFactores=&factores; //pFactores es igual a la direccion de memoria de factores
    //porque tenemos el *? xq estoy definiendo pF
    pFactores=&pFactores[0];
    //donde para usar pF en vez de factores...*(pFactores+i)
    //peeero pFactores guarda direc.de.memo, es decir en hexagecimal...
    //y el i es un entero(guarda en enteros)
    //entonces como trabaja el C-> basicamente multiplica la cantidad de bytes que ocupa cada direccion de memoria por el i
    //osea, int=4bytes ->pFactores[i] va a hacer 4bytes*1=a la posicion 4...(i++)...4bytes*2=a la posicion 8...
    //la convension actual se modifico y en vez de colocar *(pFactores+i) se usa pFactores[i]

    //si queremos sumar que hacemos?
    //int suma=suma+pFactores[i] dentro del for

    //para eso empezamos a usar libreris helper.c/.h
    //.header funciones, declaracion de punteros,constantes..
    //desarrollamos el .header
    //testeamos lo que definimos en las librerias
    int suma=0;
    ;    for(int i=0;pFactores[i]!=END_OF_VECTOR;i++)
    {
        suma=suma+pFactores[i];
        printf("valor %d\n",pFactores[i]);
        printf("%d",suma);
    }

    return 0;
}
