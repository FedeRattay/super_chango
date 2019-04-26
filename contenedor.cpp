#include "producto.h"
#include "contenedor.h"


Contenedor::Contenedor(){
    tamanio = 0;
    contenido = new Producto[tamanio];
}


void Contenedor::ver_contenido()
{
	for (int i = 0; i < tamanio; i++)
	{
		cout << (i + 1) << ". " << contenido[i].obtener_nombre();
		cout << " [" << contenido[i].obtener_codigo_barra() << "] ";
		cout << "$" << contenido[i].obtener_precio() << " | ";
		cout << (contenido[i].obtener_oferta() ? "Oferta 10% OFF\n" : "No esta en oferta\n");
	}
}
void Contenedor::buscar_producto_nombre(string nombre_producto)
{
	int i = 0;
	bool encontrado = false;
	while ((i < tamanio) && (!encontrado))
	{
		if (contenido[i].obtener_nombre() == nombre_producto)
		{
			encontrado = true;
			cout << (i + 1) << ". " << contenido[i].obtener_nombre();
			cout << " [" << contenido[i].obtener_codigo_barra() << "] ";
			cout << "$" << contenido[i].obtener_precio() << " | ";
			cout << (contenido[i].obtener_oferta() ? "Oferta 10% OFF\n" : "No esta en oferta\n");
		}
		else
			i++;
	}
}
void Contenedor::quitar_producto(string nombre_producto)
{
	Producto auxiliar;
	for (int i = 0; i < tamanio; i++)
	{
		contenido[i] = contenido[i + 1];
	}
	tamanio--;
}

Contenedor::~Contenedor(){
    delete [] contenido;
}