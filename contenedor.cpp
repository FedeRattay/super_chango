#include "producto.h"
#include "contenedor.h"

Contenedor::Contenedor()
{
	tamanio = 0;
	contenido = new Producto[tamanio];
}

void Contenedor::mostrar_producto(Producto un_producto)
{
	cout << un_producto.obtener_codigo_barra() << "|" << un_producto.obtener_nombre() << "|$";
	cout << un_producto.obtener_precio() << "-> ";
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

void Contenedor::agregar_producto(Producto un_producto)
{
	int tam_new = 0;
	if (tamanio > 0)
		tam_new = tamanio + 1;
	else
		tam_new = 1;

	int ultima_pos = tamanio;

	string nombre_new = un_producto.obtener_nombre();
	string codigo_new = un_producto.obtener_codigo_barra();
	double precio_new = un_producto.obtener_precio();
	bool oferta_new = un_producto.obtener_oferta();

	redimensionar(tam_new);

	contenido[ultima_pos].asignar_nombre(nombre_new);
	contenido[ultima_pos].asignar_codigo_barra(codigo_new);
	contenido[ultima_pos].asignar_precio(precio_new);
	contenido[ultima_pos].asignar_oferta(oferta_new);
}

void Contenedor::quitar_producto(string nombre_producto)
{
	int pos_eliminar = 0;
	bool encontrado = false;
	int nuevo_tamanio = --tamanio;

	Producto aux;

	while ((pos_eliminar < tamanio) && (!encontrado))
	{
		if (contenido[pos_eliminar].obtener_nombre() == nombre_producto)
		{
			encontrado = true;
		}
		else
			pos_eliminar++;
	}
	if (encontrado)
	{
		aux = contenido[pos_eliminar];
		contenido[pos_eliminar] = contenido[tamanio];
		contenido[tamanio] = aux;
	}
	redimensionar(nuevo_tamanio);
}

Contenedor::~Contenedor()
{
	delete[] contenido;
}
