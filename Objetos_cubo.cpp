#include <iostream>
using namespace std;

class Cuadrado {
	public: //Atributos
		int tipo;
		int lado;
		int operacion;
	public:
		void generar_cuadrado();	
}; 

void Cuadrado::generar_cuadrado()
{
	switch(tipo){
		case 1:
			operacion = lado*lado;
	
			for(int f=0; f<operacion; f++)
			{
				if(f %lado==0)
				{
					cout<<endl;
				}
				cout<<"*";
			}
		break;
		case 2: 
			cout<<"\nopcion 2 del cuadrado"<<endl;
		break;
	}	
}

int main()
{
	Cuadrado c;
	cout<<"Selecciona el tipo que quieres hacer: "<<endl;
	cin>>c.tipo;
	cout<<"Selecciona la cantidad de lados: "<<endl;
	cin>>c.lado;
	cout<<endl;
	c.generar_cuadrado();
	
	return 0;
}