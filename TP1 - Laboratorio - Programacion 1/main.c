#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{

    int opcion = 0;
    float numeroUno=0;
    float numeroDos=0;
    char mensaje[]= "Opcion invalida";
    int primOpcion = 1;
    int ultOpcion= 5;

    do
    {
        setbuf(stdin,NULL);
        opcion = menu(numeroUno, numeroDos, mensaje, primOpcion, ultOpcion);


        switch(opcion)
        {
        case 1:
            getFloat(&numeroUno);
            break;
        case 2:
            getFloat(&numeroDos);
            break;
        case 3:
            operacionSuma(numeroUno,numeroDos);

            operacionResta(numeroUno,numeroDos);

            operacionDivision(numeroUno,numeroDos);

            operacionMultiplicacion(numeroUno,numeroDos);

            operacionFact(numeroUno);

            printf("Se han calculado las operaciones\n");

            system("pause");
            break;
        case 4:
            printf("El resultado de la suma es: %.2f\n", operacionSuma(numeroUno,numeroDos));

            printf("El resultado de la resta es: %.2f\n", operacionResta(numeroUno,numeroDos));

            printf("\n",mostrarDivision(numeroUno, numeroDos));

            printf("El resultado de la multiplicacion es: %.2f\n", operacionMultiplicacion(numeroUno,numeroDos));

            printf("\n",mostrarFac(numeroUno));

            system("pause");
            break;
        }
        system("cls");
    }
    while (opcion != 5);

    return 0;
}
