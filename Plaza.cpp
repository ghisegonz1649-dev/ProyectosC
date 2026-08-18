/*
Mariam Ghise Ju�rez Gonz�lez
*/

#include <iostream>
#include "Cajero_automatico.h"
#include "Cine.h"
#include "Restaurante.h"
#include "Estacionamiento.h"
using namespace std;

main()
{
	int opcion;
		
	do
	{
   cout<<"\t\nBIENVENIDO A PLAZA NEZA"<<endl;
   cout<<"Cajero Automatico...........(1)"<<endl;
   cout<<"Cine........................(2)"<<endl;
   cout<<"Restaurante.................(3)"<<endl;
   cout<<"Estacionamiento.............(4)"<<endl;
   cout<<"Salir / Exit................(5)"<<endl;
   cout<<"A donde quieres ir: "<<endl;
   cin>>opcion;
   
   if (opcion== 1) {
   	Cajero();
   }  
   
   if (opcion == 2){
   	cine();
   }
   
   if (opcion == 3){
   	Restaurante();
   }
   
   if (opcion == 4){
   	Estacionamiento();
   }
   
    } 
	while (opcion !=5);
	
	return 0;

}
