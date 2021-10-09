#include <iostream>
#include<conio.h>
#include"calculos.h"

void menu();
void tabla_multiplicar();
void numero_perfecto();
void suma_pares_impares();

Calculos calculo;//objeto calculo de tipo Calculos  //objeto principal del programa

int main() {
	menu();
	return 0;
}

//menu del programa
void menu(){
	char opc;
	
	do{
		system("cls");
		std::cout<<"\n1. Tabla de multiplicar de un numero";
		std::cout<<"\n2. Suma de pares en impares hasta numero que yo digite";
		std::cout<<"\n3. Determinar si un numero es perfecto";
		std::cout<<"\n4. Salir";
		std::cout<<"\nOpcion: ";std::cin>>opc;
		
		switch(opc){
			case '1': tabla_multiplicar();break;
			case '2': suma_pares_impares();break;
			case '3': numero_perfecto();
			case '4':break;
			default: std::cout<<"\n*OPCION INCORRECTA*\n\n";
		}
		getch();
	}while(opc!='4');
	
}

//analisa si un numero es perfecto o no
void numero_perfecto(){
	int x;
	std::cout<<"\nDigite el numero a analizar : ";std::cin>>x;
	calculo.set_userInput(x);
	
	if(calculo.numero_perfecto()==true){
		std::cout<<"si es un numero perfecto";
	}
	else{
		std::cout<<"no es un numero perfecto";
	}
	
}

//genara la tabla de multiplicar del numero digitado
void tabla_multiplicar(){
	int x;
	std::cout<<"\nDigite un numero: ";std::cin>>x;
	calculo.set_userInput(x);
	calculo.tabla_multiplicar();
	std::cout<<"\n";
}

//suma los pares que hay entre el numero digitado y 0, y negativamente igual
void suma_pares_impares(){
	int x;
	std::cout<<"\ndigite un numero: ";std::cin>>x;
	calculo.set_userInput(x);
	calculo.suma_pares_impares();
}