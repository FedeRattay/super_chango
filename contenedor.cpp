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
	Producto *aux = new Producto[nuevo_tamanio];
	if (nuevo_tamanio > 0)
	{
		//guarda en el producto en un auxiliar
		if (tamanio <= nuevo_tamanio)
		{
			for (int i = 0; i < tamanio; i++)
			{
				aux[i] = contenido[i];
			}
		}
		else
		{
			for (int i = 0; i < nuevo_tamanio; i++)
			{
				aux[i] = contenido[i];
			}
		}
		tamanio = nuevo_tamanio;
		delete[] contenido;
		contenido = aux;
	}
}

/*void Contenedor::agregar_producto(Producto un_producto)
{
	//aqui la linea que explota;
}*/

/*void Contenedor::quitar_producto(string nombre_producto)
{
	Producto auxiliar;
	for (int i = 0; i < tamanio; i++)
	{
		contenido[i] = contenido[i + 1];
	}
	int nuevo_tamanio = tamanio--;
	redimensionar(nuevo_tamanio);
}
*/
Contenedor::~Contenedor()
{
	delete[] contenido;
}
