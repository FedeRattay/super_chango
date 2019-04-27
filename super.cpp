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
	
	if(opcion_elegida == 3)
	{
		Producto new_producto;
		string new_name;
		string new_cb = "1234567890123";
		double new_prc = 0;
		bool new_ofr = false;
		
		cout<<"Ingrese el nombre del Producto"<<endl;
		cin>>new_name;
		cout<<"Ingrese el precio del Producto"<<endl;
		cin>>new_prc;
		
		new_producto.asignar_codigo_barra(new_cb);
		new_producto.asignar_nombre(new_name);
		new_producto.asignar_precio(new_prc);
		new_producto.asignar_oferta(new_ofr);
		
		gondola.agregar_producto(new_producto);
	}
	if(opcion_elegida == 4)
	{
		string nombre_archivo;
		cout<<"Ingrese el nombre del archivo"<<endl;
		cin>>nombre_archivo;
		gondola.cargar_productos(nombre_archivo);
	}
	
	gondola.ver_contenido();
	
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
