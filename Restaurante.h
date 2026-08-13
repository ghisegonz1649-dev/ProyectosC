#include <iostream>
using namespace std;

   int menu;
   int platos;
   float costo_platos;
   float costo_propina;
   float iva;
   float precio;
   float propina;
   float suma;
   float suma_total;
   
void mostrarmenu();
void resumen();
void procesocompra();
void masopciones(int opcion);
void multiplicacion();

 void mostrarmenu()
   {
   	
   	 cout<<"ELIJA EL NUMERO PARA ELEGIR UN PLATO DE LA CARTA: \n"<<endl;
   	 cout<<"------------------------------------------------------------------"<<endl;
   	 cout<<"Pozole (Blanco o Rojo) - $55 c/u...............................(1)"<<endl;
   	 cout<<"Enchiladas (Verdes o de Mole) - $50 c/u........................(2)"<<endl;
   	 cout<<"Tostadas (Tinga,Pata,Carne,Picadillo) - $45 c/u................(3)"<<endl;
   	 cout<<"Tacos dorados - $12 c/u .......................................(4)"<<endl;
   	 cout<<"Sopes - $20 c/u................................................(5)"<<endl;
   	 cout<<"Huaraches (Bistec,Chorizo,Suadero,Queso,Cecina)- $60 c/u...... (6)"<<endl;
   	 cout<<"Chiles rellenos con arroz (Queso,Picadillo,Pollo) - $87 c/u....(7)"<<endl;
   	 cout<<"Quesadillas (Queso,Tinga,Carne) - $29 c/.......................(8)"<<endl;
   	 cout<<"Chilaquiles sencillos (Verdes o Rojos) - $40 c/u...............(9)"<<endl;
   	 cout<<"Esquites - $30................................................(10)"<<endl;
     cout<<"Agua de botella- $20..........................................(11)"<<endl;
     cout<<"Cerveza - $32.................................................(12)"<<endl;
     cout<<"Agua de fruta - $30...........................................(13)"<<endl;
     cout<<"Refrescos - $28...............................................(14)"<<endl;
   }
   
 void masopciones();
 void masopciones()

  { 
int opcion;
 
  cout<<"---------------------------------------------------"<<endl;
  cout<<"Desea algo adicional"<<endl;
  cout<<"1  - Si"<<endl;
  cout<<"2  - No"<<endl;
  cout<<"---------------------------------------------------"<<endl;

cin>>opcion;

    if(opcion == 1){
    	procesocompra();
	}else if (opcion == 2){
		resumen ();
	}else{
		cout<<"Elija una opcion correcta"<<endl;
		masopciones();
	}
	
	
  }
 
 void resumen()
  {
	
	iva=suma*0.18;
	propina=suma*0.10;
	suma_total=suma+iva+propina;
	
	cout<<"---------------------------------------------"<<endl;
	cout<<"Su cuenta es de: "<<suma<<"pesos"<<endl;
	cout<<"El IVA por su consumo total es de: "<<iva<<"pesos"<<endl;
	cout<<"Se agradece su propina de: "<<propina<<"pesos"<<endl;
	cout<<"------------------"<<endl;
	cout<<"La Factura total asciende a:  "<<suma_total<<"pesos"<<endl;
	
	cout<<"---------------------------------------------"<<endl;
    cout<<"GRACIAS POR SU VISITA, VUELVA PRONTO :)"<<endl;
  }
int Restaurante()
  {
	
	system ("COLOR 5B");
	
	int saludo=0;
	
	if(saludo==0)
	{
		cout<<"BIENVENIDOS A LA FONDA DE DONA FLORINDA"<<endl;
		saludo=1;
	}
	
procesocompra();
	
  }

 void procesocompra()
  {
	
	mostrarmenu();
	
	cout<<"-------------------------------------------------"<<endl;
	cout<<"Escriba el numero de su opcion: ";
	cin>>menu;
	cout<<"-------------------------------------------------"<<endl;
	
if(menu>0 && menu<=14){
	cout<<"Cuantos platos o bebidas : "<<endl;
	cin>>platos;
	
	
	switch (menu){
		
		case 1: precio=55;
		break;
		
		case 2: precio=50; 
		break;
		
		case 3: precio=45; 
		break;
		
		case 4: precio=35; 
		break;
		
		case 5: precio=50; 
		break;
		
	    case 6: precio=60; 
		break;
		
		case 7: precio=87; 
		break;
		
		case 8: precio=29; 
		break;
		
		case 9: precio=40; 
		break;
		
	    case 10: precio=30; 
		break;
		
		case 11: precio=20; 
		break;
		
		case 12: precio=32; 
		break;
		
		case 13: precio=30; 
		break;
		
		case 14: precio=28; 
		break;
		
	 default: cout<<"Elija correctamente, por favor"<<endl; 
	 mostrarmenu();   
	 break;
		
	}
	
	
	
	costo_platos=precio*platos;
	suma=suma+costo_platos;
	cout<<"El precio hasta ahora es de: $ "<<suma<<"pesos."<<endl;
	
	masopciones();
	
}else{
	cout<<"Elija correctamente, por favor "<<endl;procesocompra();
	
    }

  }

