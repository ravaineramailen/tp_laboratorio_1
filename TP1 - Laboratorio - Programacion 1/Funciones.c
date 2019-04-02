#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

// -------- MENU --------
int menu(float numeroUno, float numeroDos, char mensaje[], int primOpcion, int ultOpcion)
{
    int opcion;
    int respuesta = 0;

    system("cls");

    printf("1- Ingresar primer operando: (A=%.2f)\n",numeroUno);
    printf("2- Ingresar segundo operando: (B=%.2f)\n",numeroDos);
    printf("3- Calcular todas las operaciones \n");
    printf("4- Mostras resultados\n");
    printf("5- Salir\n");

    scanf("%d",&opcion);

// -------- INGRESAR DEL 1/5 SINO MSJ ERROR --------
    if(opcion>=primOpcion && opcion<=ultOpcion)
    {
        respuesta=opcion;
    }
    else
    {
        printf("%s",mensaje);
        getch()!='\n';
    }

    return respuesta;
}

void getFloat(float* numero)
{
    float auxilar;
    int scanNumero;

    printf("Ingrese un numero: ");
    scanNumero=scanf("%f",&auxilar);

    if(scanNumero==0)
    {
        printf("Dato invalido \n");
        getch()!='\n';
    }
    else
    {
        *numero=auxilar;
    }
}

//-------- OPERACION SUMA --------
float operacionSuma(float numeroUno, float numeroDos)
{
    float suma;
    suma = numeroUno + numeroDos;
    return suma;
}

//-------- OPERACION RESTA --------
float operacionResta (float numeroUno, float numeroDos)
{
    float resta;
    resta = numeroUno - numeroDos;
    return resta;
}

//-------- OPERACION DIVISION --------
float operacionDivision (float numeroUno, float numeroDos)
{
    float division;

    if (numeroDos == 0)
    {
        division= 0;
    }
    else
    {
        division =(float)numeroUno / numeroDos;
    }
    return division;
}

//-------- MUESTRA RESULTADO DE LA DIVISION --------
int mostrarDivision(float numeroUno, float numeroDos)
{
    float division = operacionDivision(numeroUno, numeroDos);

    if(division == 0)
    {
        printf("No se puede realizar la operacion division.");
    }
    else
    {
        printf("El resultado de la division es: %.2f", division);
    }

    return division;
}

//-------- OPERACION MULTIPLICAR --------
float operacionMultiplicacion (float numeroUno, float numeroDos)
{
    float multiplicacion;
    multiplicacion = numeroUno * numeroDos;
    return multiplicacion;
}

//-------- OPERACION FACTORIAL --------
float operacionFact (float numeroUno)
{

    int factorial;
    int auxiliar;
    auxiliar= numeroUno;
    auxiliar= (int)auxiliar;

    if(numeroUno<0 || auxiliar!=numeroUno)
    {
        factorial = 0;
    }
    else
    {
        if(numeroUno == 0)
        {
            factorial= 1;
        }
        else
        {
            factorial = numeroUno*operacionFact(numeroUno-1);
        }
    }

    return factorial;
}

//-------- MUESTRA EL RESULTADO FACTORIAL --------
int mostrarFac(float numeroUno)
{
    float factorial = operacionFact(numeroUno);

    if(factorial == 0)
    {
        printf("No se puede realizar la operacion factorial.");
    }
    else
    {
        printf("El resultado de la factorizacion es: %.2f",factorial);
    }

    return factorial;
}
