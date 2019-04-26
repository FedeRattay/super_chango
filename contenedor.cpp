#include "producto.h"
#include "contenedor.h"

Contenedor::Contenedor()
{
	tamanio = 0;
	contenido = new Producto[tamanio];
}

void Contenedor::mostrar_producto(Producto un_producto)
{
	cout << un_producto.obtener_nombre();
	cout << " [" << un_producto.obtener_codigo_barra() << "] ";
	cout << "$" << un_producto.obtener_precio() << " | ";
	cout << (un_producto.obtener_oferta() ? "Oferta 10% OFF\n" : "No esta en oferta\n");
}

void Contenedor::ver_contenido()
{
	for (int i = 0; i < tamanio; i++)
	{
		mostrar_producto(contenido[i]);
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
			mostrar_producto(contenido[i]);
		}
		else
			i++;
	}
}

void Contenedor::redimensionar(int nuevo_tamanio)
{
//aqui usar la funcion;
}

void Contenedor::agregar_producto(Producto un_producto)
{
	contenido[tamanio] = un_producto;
	redimensionar(++tamanio);
}

void Contenedor::quitar_producto(string nombre_producto)
{
	int pos = 0;
	bool encontrado = false;
	Producto aux;
	for (int i = 0; i < tamanio; i++)
	{
		if (contenido[i].obtener_nombre() == nombre_producto)
		{
			pos = i;
			encontrado = true;
			aux = contenido[i];
		}
	}
	if (encontrado)
	{
		contenido[pos] = contenido[tamanio];
		contenido[tamanio] = aux;
		//redimensionar(tamanio--);
	}
	else
	{
		cout << "El producto no existe" << endl;
	}
}

Contenedor::~Contenedor()
{
	delete[] contenido;
}