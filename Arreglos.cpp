#include "Numeros.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main (int argc, char * arg[])
{
	int n,t=1,tq=1;
	bool x=false;
	
	
	do
	{
		
		
		system ("cls");
	cout<<"Buscador de Numeros de Arreglos"<<endl;
	cout<<"Cuantos numeros quiere ingresar"<<endl;
	cin>>n;
		Numeros N(n);
		N.setA1();
		
			
			system ("cls");
			N.buscar();
			N.visualizar();
		
			
	
		N.liberar();
		cout<<" Si quiere  volver ingresar otro dato presione 1 "<<endl;
		cin>>t;
	}while (t==1);
	getchar();
	system("pause");
	return 0;
}
