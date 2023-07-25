//Calculator for int numbers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Math{
    int Add;
    int Sub;
    int Mult;
    int Div;
    int A;
    int B;
    int C;
    int D;
    int Result;
}Maths;


void Add();
void Substract();
void Mult();
void Div();

main(){
Maths m1;
int i, j, op, OP=1;

while(OP==1){
    system("cls");

        for(i=0; i<35; i++){
        printf("*");
        }
        printf("\n\tCalculator\n");
        for(j=0; j<35; j++){
        printf("*");
        }

    printf("\n\tChoose your option\n");
    printf("1.- Add\n");
    printf("2.- Substract\n");
    printf("3.- Multiply\n");
    printf("4.- Divide\n");
    scanf("\n%i",&op);

       switch(op){
         case 1: Add();
         break;
         case 2: Substract();
         break;
         case 3: Mult();
         break;
         case 4: Div();
         break;
        }

    printf("\n\tWant to continue?\n\t1.- Yes | 2.- No \n");
    scanf("%i",&OP);
    }

    system("cls");
    printf("\n\t\tThank you for using this calculator!\n");
    getchar();
}

void Add(){
    Maths m1;

    system("cls");
    printf("\n\tWrite two numbers: \n");
    scanf("%i",&m1.A);
    scanf("%i",&m1.B);
    m1.Result=m1.A+m1.B;
    printf("\n\tYour result is: %i\n",m1.Result);
}

void Substract(){
    Maths m1;

    system("cls");
    printf("\n\tWrite two numbers: \n");
    scanf("%i",&m1.C);
    scanf("%i",&m1.D);
    m1.Result=m1.C-m1.D;
    printf("\n\tYour result is: %i\n",m1.Result);
}

void Mult(){
    Maths m1;

    system("cls");
    printf("\n\tWrite two numbers: \n");
    scanf("%i",&m1.A);
    scanf("%i",&m1.B);
    m1.Result=m1.A*m1.B;
    printf("\n\tYour result is: %i\n",m1.Result);
}

void Div(){
    Maths m1;

    system("cls");
    printf("\n\tWrite two numbers: \n");
    scanf("%i",&m1.C);
    scanf("%i",&m1.D);
    m1.Result=m1.C/m1.D;
    printf("\n\tYour result is: %i\n",m1.Result);
}