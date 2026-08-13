#include <iostream>
#include <stdlib.h>
#define max_columnas 10
#define max_filas 10 

using namespace std;

{
  system ("COLOR 1E");
  
  int opciones,opcion;
  int i;
  int j;
  int fila;
  int columna;
  int mat[max_columnas][max_filas];
  
  do {
  	
   cout<<"\n*********BIENVENIDO AL CINE***********"<<endl;
   cout<<"\n***********CINEPOLIS******************"<<endl;
   cout<<"Vaciar sala..........................(1)"<<endl;
   cout<<"Visualizar asientos disponibles......(2)"<<endl;
   cout<<"Reservar asientos....................(3)"<<endl;
   cout<<"----------------------------------------"<<endl;
   cout<<"Cartelera............................(4)"<<endl;
   cout<<"Dulceria.............................(5)"<<endl;
   cout<<"Rango de edades admitidas............(6)"<<endl;
   cout<<"Salir / Exit.........................(7)"<<endl;
   cout<<"Escoge una opcion: "<<endl;
   cin>>opcion;
           
  switch(opcion)
  {
  	case 1: // Vaciar sala
      for (i=0; i < max_columnas; i++) {
      for (j=0; j < max_filas; j++) {
      mat[i][j] = 0;
        }
    }
    cout<<("La sala ha sido vaciada correctamente")<<endl;
    break;
 
     case 2: // Visualizar asientos disponibles
      for (i= 0;  i < max_columnas; i++) {
        printf("\n");
        for (j= 0; j < max_filas; j++) {
        printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    break;
   
     case 3: // Reservar asientos
      cout<<("\tReserva de asientos")<<endl;
      cout<<("\n------------------------------\n")<<endl;
      cout<<("\nEscribe la fila: ")<<endl;
      cin>>fila;
      cout<<("\nEscribe la columna: ")<<endl;
      cin>>columna;
      if(mat[fila][columna] == 0)
     {
     mat[fila][columna] = 1;
     cout<<("Asiento asignado correctamente")<<endl;
     }
     else
     {
     cout<<("Asiento ocupado")<<endl;
     }
     break;
 
     case 4: //Cartelera
     
     cout<<"******CARTELERA*************"<<endl;
     cout<<"----------PELICULAS---------"<<endl;
     cout<<"\n 1)El conjuro 4"<<endl;
     cout<<"\n 2)La monja"<<endl;
     cout<<"\n 3)Avengers "<<endl;
     cout<<"\n 4)Guerra Mundial Z"<<endl;
     cout<<"\n 5)No manches frida"<<endl;
     cout<<"\n 6)Un jefe en panales"<<endl;
     cout<<"\n 7)Titanic"<<endl;
     cout<<"\n Escoge una pelicula: "<<endl;
     cin>>opcion;
     
     if (opcion==1)
     {
	 cout<<"Usted a seleccionado la pelicula del El conjuro 4"<<endl;
	 }
	 
     else if(opcion==2)
     {
	 cout<<"Usted a seleccionado la pelicula de La monja"<<endl;
	 }
	 
	 else if(opcion==3)
     {
	 cout<<"Usted a seleccionado la pelicula de Avengers"<<endl;
	 }
	 
	 else if(opcion==4)
     {
	 cout<<"Usted a seleccionado la pelicula de Guerra mundial Z"<<endl;
	 }
	 
	 else if(opcion==5)
     {
	 cout<<"Usted a seleccionado la pelicula de No manches frida"<<endl;
	 }
	 
	 else if(opcion==6)
     {
	 cout<<"Usted a seleccionado la pelicula de Un jefe en pañales"<<endl;
	 }
	 
	 else if(opcion==7)
     {
	 cout<<"Usted a seleccionado la pelicula de Titanic"<<endl;
	 }
	 
	 else
     {
   	 cout<<"Se equivico de opcion de menu";
     }
     break;
     
     case 5: //Dulceria
        cout<<"*********Combos de comida**********"<<endl;
        cout<<"\n";
        cout<<"-----DULCERIA CINEPOLIS------- "<<endl;
     cout<<"\n Combo 1: Palomitas $30"<<endl;
     cout<<"\n Combo 2: Palomitas y Refresco $50"<<endl;
     cout<<"\n Combo 3: Nachos $40"<<endl;
     cout<<"\n Combo 4: Dulces dependiendo del dulce"<<endl;
     cout<<"\n Combo 5: Hot Dog $35"<<endl;
     cout<<"\n Escoge un paquete: "<<endl;
     cin>>opcion;
    
     if (opcion==1)
     {
	 cout<<"Usted a seleccionado el Combo 1"<<endl;
	 }
	 
     else if(opcion==2)
     {
	 cout<<"Usted a seleccionado el Combo 2"<<endl;
	 }
	 
	 else if(opcion==3)
     {
	 cout<<"Usted a seleccionado el Combo 3"<<endl;
	 }
	 
	 else if(opcion==4)
     {
	 cout<<"Usted a seleccionado el Combo 4"<<endl;
	 }
	 
	 else if(opcion==5)
     {
	 cout<<"Usted a seleccionado El combo 5"<<endl;
	 }
	 
    else
     {
   	 cout<<"Se equivico de opcion de menu";
     }
     
     break;
     
     case 6: //Rango de edades admitidad
	 int i;
	 cout<<"---------Rango de edades admitidas----------"<<endl;
	 i=18;
	 while(i<=50){
		cout<<i<<endl;
		i++;
     }
	 cout<<"Fuera de este rango de edad no son admitidos"<<endl;
      break;
    
	default: cout<<"\nGracias por visitar CINEPOLIS :)"<<endl;
	break;
	
   }
     
	}while(opcion!=7);
}

  
