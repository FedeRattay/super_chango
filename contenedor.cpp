#include "producto.h"
#include "contenedor.h"


Contenedor::Contenedor()
{
	tamanio = 0;
	contenido = new Producto[tamanio];
}

void mostrar_producto(Producto un_producto)
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
	Producto* aux = new Producto[nuevo_tamanio];
    if (nuevo_tamanio > 0){
        //guarda en el producto en un auxiliar
        for (int i = 0; i < nuevo_tamanio; i++)
        {
            aux[i] = contenido[i];
        }
        delete [] contenido;
    }
    for (int i = 0; i < nuevo_tamanio; i++){
        contenido[i] = aux[i];
    }
    tamanio = nuevo_tamanio;
    delete [] aux;
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

Contenedor::~Contenedor()
{
	delete[] contenido;
}