#include <iostream>
using namespace std;
//Tarifa por hora- 18 pesos 
#define hpesos 18 

int hora_entrada;
int hora_salida;
int horas_servicio;
int importe_pagar;
int importe_recibir;
int cambio;
int c1;
int billete_1; 
int billete_2;
int billete_3;
int moneda_4;
int moneda_5;
int moneda_6;
int moneda_7;

main ()
{
	system ("COLOR 8F");
		
	cout<<"**********ESTACIONAMIENTO PLAZA*****************"<<endl;
	
	cout<<"\nHora de entrada: "<<endl; 
	cin>>hora_entrada;
	
	cout<<"\nHora de salida : "<<endl;
	cin>>hora_salida;
	
	horas_servicio=hora_salida-hora_entrada;
	importe_pagar=horas_servicio*hpesos;
	
    cout<<"\nHoras de servicio:"<<horas_servicio<<endl;
	cout<<"\n\nImporte a pagar:"<<importe_pagar<<endl;
	cout<<"\nInsertar dinero: "<<endl; 
	cin>>importe_recibir;
	
	cambio=importe_recibir-importe_pagar;
	c1=cambio;
	
	billete_1=c1/100;
	c1=c1-(billete_1*100);
	
	billete_2=c1/50;
	c1=c1-(billete_2*50);
	
	billete_3=c1/20;
	c1=c1-(billete_3*20);
	
	moneda_4=c1/10;
	c1=c1-(moneda_4*10);
	
	moneda_5=c1/5;
	c1=c1-(moneda_5*5);
	
	moneda_6=c1/2;
	c1=c1-(moneda_6*2);
	
	moneda_7=c1/1;
	c1=c1-(moneda_7*1);
	
	cout<<"Cambio:"<<cambio<<endl;
	cout<<"\n $100: "<<billete_1<<endl;
	cout<<"\n $50: "<<billete_2<<endl;
	cout<<"\n $20: "<<billete_3<<endl;
	cout<<"\n $10: "<<moneda_4<<endl;
	cout<<"\n $5: "<<moneda_5<<endl;
	cout<<"\n $2: "<< moneda_6<<endl;
	cout<<"\n $1: "<< moneda_7<<endl;
}


