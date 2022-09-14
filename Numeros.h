#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

class Numeros
{
	private:
		int *A1;
		int n;
		bool x;
		int na;
		
	public:
		Numeros (int num) {n=num;A1=new int [num]; x=false; na=0;}
		
		void visualizar();
		void buscar();
		void setA1();
		void liberar();
		
};


void Numeros::visualizar()
{
	cout<< "posicion de Datos" <<endl;
	for (int i=0;i<n;i++)
	{
		cout<< i <<"    " <<A1[i]<<endl;
	}
	
}

void Numeros::setA1()
{
	cout<< "Escribe los "<< n << "Numeros"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>A1[i];
	}
}

void Numeros::buscar()
{
	cout<<" ¿Que numero desea buscar ?"<<endl;
	cin>>na;
	for(int i=0;i<na;i++)
	{
		if (A1[i]==na)
		{
			x=true;
			cout<<"El numero" <<na<< " Si se encuentra en los datos ingresados" <<i<<endl;
		}
	
	
}

	if (x==false)
	{
		cout<<" El numero "<<na<<" No se encuentra entre los datos que se ingresaron "<<endl;
	}


}
void Numeros::liberar()
{
	delete []A1;
}
