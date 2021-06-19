#include <stdio.h>
#include <stdlib.h>
int a=0;

int suma(int num1, int num2){
    return num1+num2;
}
int resta(int num1, int num2){
    return num1-num2;
}
int multiplicacion(int num1, int num2){
    return num1*num2;
}
int division(int num1, int num2){
    return num1/num2;
}
void todasLasFunciones(int num1, int num2){
    printf("Suma: %i", suma(num1, num2));
    printf("\nResta%i", resta(num1, num2));
    printf("\nMultiplicacion%i", multiplicacion(num1, num2));
    printf("\nDivision%i", division(num1, num2));
}
void calculadora(){
    int opcion = 0;
    while(opcion == 0){
        // ingreso de opciones
        printf("Ingrese una opcion: ");
        printf("1) Sumar ");
        printf("\n2) Restar ");
        printf("\n3) Mulriplicar ");
        printf("\n4) Dividir ");
        printf("\n5) Todas las funciones ");
        scanf("%d", &opcion);
        // opciones
        if(opcion == 1){
            int num1, num2;
            system("cls");
            printf("Ingrese el numero 1: ");
            scanf("%d",&num1);
            printf("\nIngrese el numero 2: ");
            scanf("%d",&num2);
            printf("\nEl resultado es: %i\n", suma(num1, num2));
            system("pause");
            system("cls");
            opcion = 0;
        }
        if(opcion == 2){
            int num1, num2;
            system("cls");
            printf("Ingrese el numero 1: \n");
            scanf("%d",&num1);
            printf("\nIngrese el numero 2: ");
            scanf("%d",&num2);
            printf("\nEl resultado es: %i\n", resta(num1, num2));
            system("pause");
            system("cls");
            opcion = 0;
        }
        if(opcion == 3){
            int num1, num2;
            system("cls");
            printf("Ingrese el numero 1: \n");
            scanf("%d",&num1);
            printf("\nIngrese el numero 2: ");
            scanf("%d",&num2);
            printf("\nEl resultado es: %i\n", multiplicacion(num1, num2));
            system("pause");
            system("cls");
            opcion = 0;
        }
        if(opcion == 4){
            int num1, num2;
            system("cls");
            printf("Ingrese el numero 1: \n");
            scanf("%d",&num1);
            printf("\nIngrese el numero 2: ");
            scanf("%d",&num2);
            printf("\nEl resultado es: %i\n", division(num1, num2));
            system("pause");
            system("cls");
            opcion = 0;
        }
        if(opcion == 5){
            int num1, num2;
            system("cls");
            printf("Ingrese el numero 1: \n");
            scanf("%d",&num1);
            printf("\nIngrese el numero 2: ");
            scanf("%d",&num2);
            todasLasFunciones(num1, num2);
            system("pause");
            system("cls");
            opcion = 0;
        }
    }
}

int main(){
    int a=0;
    int opcion = (a>0) ? 1 : 2;
    int opcion;
    if(a>0)
        opcion =1;
    else
        opcion=2;
    printf("\n%i", opcion);
    calculadora();
    return 0;
}