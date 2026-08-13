#include <iostream>
using namespace std;
Cajero ()
{
  system ("COLOR 9");
  
  int saldo, retirar,opcion, depositar;
  int saldo_inicial = 0;
    
	do {
   
   cout<<"\t\t\t\n---------Bienvenido al cajero BBVA BANCOMER--------"<<endl;
   cout<<"\n----------MENU DEL CAJERO---------------"<<endl;
   cout<<"Consulta de saldo inicial..................(1)"<<endl;
   cout<<"Depositar dinero...........................(2)"<<endl;
   cout<<"Retirar dinero.............................(3)"<<endl;
   cout<<"Consulta de saldo al depositar.............(4)"<<endl;
   cout<<"Consulta de saldo al retirar...............(5)"<<endl;
   cout<<"Salir / Exit...............................(6)"<<endl;
   cout<<"Elija la transaccion que desea realizar: "<<endl;
   cin>>opcion;
   
   if (opcion == 1) //Consutar saldo
   {
		 cout<<"\nLa cantidad disponible en cuenta es de: " <<saldo_inicial;
   }
   
   else if (opcion ==2) //Depositar
   {
   	     cout<<"\nIngrese la cantidad a depositar: ";
   	     cin>>depositar;
   	     saldo = saldo_inicial + depositar;
   	     cout<<"\nCantidad disponible en la cuenta: "<<saldo;
   }
   
   else if(opcion==3) //Retirar
   {
   	     cout<<"\nCual es la cantidad que desea retirar:";
   	     cin>> retirar;
	    
		 saldo = saldo - retirar;
		 cout<<"\nCantidad disponible en cuenta: " <<saldo;
   }

   else if (opcion == 4) //Consultar saldo
   {
         cout<<"\t\nCantidad disponible en tu cuenta al depositar dinero: \t\n"<<saldo_inicial + depositar;
   }
	else if (opcion == 5) //Consultar saldo 
   {
         cout<<"\t\nCantidad disponible en tu cuenta al retirar dinero: \t\n"<<saldo;
   }
    else if (opcion == 6) //Salir
   {
         cout<<"\t\nGracias por utilizar nuestro cajero automatico\t\n";
   }
   
   else
   {
   	     cout<<"Se equivico de opcion de menu";
   }

   }
   
   while(opcion!=6);

}
