#include "calculos.h"
#include <iostream>

	//set and get
  void Calculos::set_userInput(int _input){//set
  	userInput=_input;
  }
  
  int Calculos::get_userInput(){//get
  	return userInput;
  }
  
  //atributes
  
  //tablas de multiplica de n numeros
  void Calculos::tabla_multiplicar(){
  	int _x=get_userInput();
  	
  	for(int i=1;i<=_x;i++){
  		std::cout<<"Tabla del "<<i<<"\n";
  		for(int j=0;j<13;j++){
  			std::cout<<i<<" x "<<j<<" = "<<i*j<<"\n";
		  }
		  std::cout<<"\n";
	  }
  }
  
  //numero perfecto
  bool Calculos::numero_perfecto(){
  	int _x=get_userInput();//user input
  	int y,suma=0;
  	
  	for(int i=1;i<_x;i++){
  		for(int j=1;j<=_x;j++){
  			y=i*j;
  		
  			if(y==_x){
  				suma+=i;
			}	  
 		}
	  }
  	
	  if(suma==_x){
	  	return true;
	  }
	  else{
	  	return false;
	  }
  }
  
  //retorna la suma de pares e impares
  void Calculos::suma_pares_impares(){
  	  int x=get_userInput();
	  int sumaP=0,sumaN=0;
  	
  	  for(int i=0;i<=x;i++){
  		if(i%2==0){
  			sumaP+=i;
		  }
		  else{
		  	sumaN+=i;
		  }
	    }
  	  
  	  std::cout<<"\nSuma de pares: "<<sumaP<<std::endl<<"\nSuma de impares: "<<sumaN<<"\n";//mostrando resultado
  }