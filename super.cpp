#include <iostream>
using namespace std;
#include "super.h"

int main()
{
	bool en_uso = true;
	Gondola gondola;
	Chango chango;
	
	int usuario = 0;
	int opcion_elegida = 0;
	
	while(en_uso == true)
	{
		opcion_elegida = mostrar_menu_principal(usuario); //QUE ACCION Y DE QUE TIPO DE USUARIO SE REALIZARA
		if(opcion_elegida == -1)
			cout<<"ERROR opcion Incorrecta"<<endl;
		else
			realizar_accion(usuario, opcion_elegida, en_uso, gondola, chango);
	}
	return 0;
}

int mostrar_menu_principal(int &usuario)
{
	cout<<"Ingresar tipo de usuario: "<<endl;
	cout<<"1- Repositor"<<endl;
	cout<<"2- Cliente"<<endl;
	cin>>usuario;
	if(usuario == 1)
	{
		return mostrar_menu_repositor();
	}
	else if(usuario == 2)
	{
		return mostrar_menu_cliente();
	}
	else
		return -1;
}
int mostrar_menu_repositor()
{
	int opcion = 0;
	cout<<"1- Mostrar la Gondola"<<endl;
	cout<<"2- Ver Productos en Oferta"<<endl;
	cout<<"3- Cargar 1 Producto"<<endl;
	cout<<"4- Cargar desde un Archivo"<<endl;
	cout<<"5- Buscar un Producto en la gondola ~ (Por Nombre)"<<endl;
	cout<<"6- Buscar un Producto en la gondola ~ (Por Codigo de Barras)"<<endl;	
	cin>>opcion;
	return opcion;
}
int mostrar_menu_cliente()
{
	int opcion = 0;
	cout<<"1- Mostrar el Chango"<<endl;
	cout<<"2- Quitar un Producto del Chango ~ (Por Nombre)"<<endl;
	cout<<"3- Mostrar la Gondola"<<endl;
	cout<<"4- Ver Productos en Oferta"<<endl;
	cout<<"5- Agregar un Producto de la gondola ~ (Por Nombre)"<<endl;
	cout<<"6- Calcular Total Chango"<<endl;
	cin>>opcion;
	return opcion;
}
void realizar_accion(int usuario, int opcion_elegida, bool &en_uso, Gondola gondola, Chango chango)
{
	if(usuario == 1)
	{
		acciones_repositor(opcion_elegida,gondola);
	}
	else if(usuario == 2)
	{
		acciones_cliente(opcion_elegida,gondola,chango);
	}
	cout<<"Continuar[1] - Salir[0]"<<endl;
	cin>>en_uso;
}
void acciones_repositor(int opcion_elegida, Gondola gondola)
{
	int posicion_buscada = 0;
	int sub_opcion_elegida = 0;
	string nombre_buscado;
	double new_prc;
	
	if(opcion_elegida == 1)
		gondola.ver_contenido();
	if(opcion_elegida == 2)
		gondola.ver_ofertas();
	if(opcion_elegida == 3)
	{
		Producto new_producto;
		string new_name;
		string new_cb;
		bool new_ofr;

		cout<<"Codigo de Barras: ";
		cin>>new_name;
		cout<<"Nombre: ";
		cin>>new_name;
		cout<<"Precio: ";
		cin>>new_prc;
		cout<<"En Oferta?  "<<"SI[1] - NO[0]"<<endl;
		cin>>new_ofr;
		new_producto.asignar_codigo_barra(new_cb);
		new_producto.asignar_nombre(new_name);
		new_producto.asignar_precio(new_prc);
		new_producto.asignar_oferta(new_ofr);
		
		gondola.agregar_producto(new_producto);
	}
	else if(opcion_elegida == 4)
	{
		string nombre_archivo;
		cout<<"Nombre del Archivo: "<<endl;
		cin>>nombre_archivo;
		gondola.cargar_productos(nombre_archivo);
	}
	else if(opcion_elegida == 5)
	{
		cout<<"Nombre del Producto: "<<endl;
		cin>>nombre_buscado;
		posicion_buscada = gondola.buscar_producto_nombre(nombre_buscado);
		if(posicion_buscada != NO_ENCONTRADO)
		{
			cout<<"1- Modificar El Precio"<<endl;
			cout<<"2- Quitar Producto"<<endl;
			cin>>sub_opcion_elegida;
		}
	}
	else if(opcion_elegida == 6)
	{
		string codigo_buscado;
		cout<<"Codigo del Producto: "<<endl;
		cin>>codigo_buscado;
		gondola.buscar_producto_codigo(codigo_buscado);
		if(posicion_buscada != NO_ENCONTRADO)
		{
			cout<<"1- Modificar El Precio"<<endl;
			cout<<"2- Quitar Producto"<<endl;
			cin>>sub_opcion_elegida;
		}
	}
	if(sub_opcion_elegida == 1)
	{
		cout<<"Precio Nuevo: ";
		cin>>new_prc;
		gondola.modificar_precio(posicion_buscada,new_prc);
	}
	else if(sub_opcion_elegida == 2)
	{
		gondola.quitar_producto(posicion_buscada);
	}
}
void acciones_cliente(int opcion_elegida, Gondola gondola, Chango chango)
{
	if(opcion_elegida == 1)
		chango.ver_contenido();
	else if(opcion_elegida == 2)
	{
		string nombre;
		cout<<"Nombre del Producto: "<<endl;
		cin>>nombre;
		int posicion_buscada;
		posicion_buscada = gondola.buscar_producto_nombre(nombre);
		if(posicion_buscada != NO_ENCONTRADO)
			chango.quitar_producto(posicion_buscada);
	}
	else if(opcion_elegida == 3)
		gondola.ver_contenido();
	else if(opcion_elegida == 4)
		gondola.ver_ofertas();
	else if(opcion_elegida == 5)
	{
		string nombre;
		cout<<"Nombre del Producto: "<<endl;
		cin>>nombre;
		int posicion_buscada;
		posicion_buscada = gondola.buscar_producto_nombre(nombre);
		if(posicion_buscada != NO_ENCONTRADO)
		{
			chango.agregar_producto(gondola.obtener_producto(posicion_buscada));
		}
	}
	else if(opcion_elegida == 6)
	{
		chango.calcular_total();
	}
}
