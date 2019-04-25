#include <iostream>
using namespace std;
#include "gondola.h"

void Gondola::cargar_producto(int tamanio, string nombre_archivo)
{
	//Crear vector de productos nuevo con el tamanio recibido
	//Borrar el vector vacio 'contenido' de tamanio 1
	//Cargar Prod. leido a 'Producto auxiliar' -> Cargar el aux al nuevo vector.
}
void Gondola::buscar_producto_codigo(unsigned long long codigo_producto)
{
	int i = 0;
	bool encontrado = false;
	while((i < tamanio)&&(!encontrado))
	{
		if(contenido[i].codigo == codigo_producto)
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
void Gondola::modificar_precio(string nombre_producto, double precio_nuevo)
{
	contenido[i].precio = precio_nuevo;
}
void Gondola::ver_ofertas()
{
	for(int i = 0; i < tamanio; i++)
	{
		if(contenido[i].oferta)
		{
			cout<<contenido[i].nombre<<endl;
			cout<<contenido[i].codigo<<endl;
			cout<<contenido[i].precio<<endl;
			cout<<"En Oferta"<<endl;
		}
	}
}
