#include <iostream>
using namespace std;
#include "producto.h"

void Contenedor::ver_contenido()
{
	for(int i = 0; i < tamanio; i++)
	{
		cout<<contenido[i].nombre<<endl;
		cout<<contenido[i].codigo<<endl;
		cout<<contenido[i].precio<<endl;
		if(contenido[i].oferta)
			cout<<"En Oferta"<<endl;
	}
}
void Contenedor::buscar_producto_nombre(string nombre_producto)
{
	int i = 0;
	bool encontrado = false;
	while((i < tamanio)&&(!encontrado))
	{
		if(contenido[i].nombre == nombre_producto)
		{
			encontrado = true;
			cout<<contenido[i].nombre<<endl;
			cout<<contenido[i].codigo<<endl;
			cout<<contenido[i].precio<<endl;
			if(contenido[i].oferta)
				cout<<"En Oferta"<<endl;
		}
		else
			i++;
	}
}
void Contenedor::quitar_producto(string nombre_producto)
{
	Producto auxiliar;
	for(int i = 0; i < tamanio; i++)
	{
		contenido[i] = contenido[i+1];
	}
	tamanio--;
}
