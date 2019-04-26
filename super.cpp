#include <iostream>
using namespace std;
#include "gondola.h"
#include "chango.h"

int mostrar_menu_principal();
void mostrar_menu_seleccion(int usuario);

int main()
{
	int opcion_elegida = 0;
	Gondola gondola;
	opcion_elegida = mostrar_menu_principal();
	
	if(opcion_elegida == 4)
	{
		string nombre_archivo;
		cout<<"Ingrese el nombre del archivo"<<endl;
		cin>>nombre_archivo;
		gondola.cargar_productos(nombre_archivo);
	}
	
	return 0;
}

int mostrar_menu_principal()
{
	int usuario = 0;
	int opcion = 0;
	//bool en_uso = true;
	
	cout<<"Ingresar tipo de usuario: "<<endl;
	cout<<"1- Repositor"<<endl;
	cout<<"2- Cliente"<<endl;
	cin>>usuario;
	
	if(usuario == 1)
	{
		cout<<"1- Mostrar la Gondola"<<endl;
		cout<<"2- Ver Productos en Oferta"<<endl;
		cout<<"3- Cargar 1 Producto"<<endl;
		cout<<"4- Cargar desde un Archivo"<<endl;
		cout<<"5- Buscar un Producto en la gondola ~ (Por Nombre)"<<endl;
		cout<<"6- Buscar un Producto en la gondola ~ (Por Codigo de Barras)"<<endl;
		
		cin>>opcion;
		return opcion;
		
		/*
		cout<<"1- Modificar El Precio"<<endl;
		cout<<"2- Quitar Producto"<<endl;
		*/
	}
	else if(usuario == 2)
	{
		/*
		cout<<"1- Mostrar el Chango"<<endl;
		cout<<"2- Mostrar la Gondola"<<endl;
		cout<<"3- Ver Productos en Oferta"<<endl;
		cout<<"4- Seleccionar Producto de la gondola ~ (Por Nombre)"<<endl;
		cout<<"5- Calcular Total Chango"<<endl;
		cin>>opcion;
		
		cout<<"1- Cargar Producto al Chango"<<endl;
		cout<<"2- Quitar Producto del Chango"<<endl;
		*/
	}
	/*
	while(en_uso)
	{
		
		cout<<"Continuar?\nSi-> 1\nNo-> 0"<<endl;
		cin>>en_uso;
	}
	*/
}
