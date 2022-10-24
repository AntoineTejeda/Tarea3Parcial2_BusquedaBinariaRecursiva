#include <stdio.h>
#include <stdlib.h>
#define N 10
int BusquedaRecursiva(int cont,int num,int Array[N]);
int main()
{
    int cont=0,num,Array[N]={4,20,38,45,67,88,110,137,149,182};

    printf("Ingrese el numero del que quiere obtener la posicion en el arreglo: ");
    scanf("%d",&num);
    cont=BusquedaRecursiva(cont, num, Array);
    printf("La posicion del numero en el arreglo es: %d",cont);
}


int BusquedaRecursiva(int cont,int num, int Array[N])
{
    if(cont<N)
    {
        if(cont<N/2)
        {
            if(num==Array[cont])
            {
                return(cont);
            }else{BusquedaRecursiva(cont+1,num,Array);}
        }else
        {
            if(num==Array[cont])
            {
                return(cont);
            }else{BusquedaRecursiva(cont+1,num,Array);}
        }
    }
}
