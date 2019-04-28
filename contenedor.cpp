#include "producto.h"
#include "contenedor.h"

Contenedor::Contenedor()
{
	tamanio = 0;
	espacio_ocupado = 0;
	contenido = new Producto[tamanio];
}
int Contenedor::obtener_cantidad_productos() { return espacio_ocupado; }
void Contenedor::mostrar_producto(Producto un_producto)
{
	cout << un_producto.obtener_codigo_barra() << "|" << un_producto.obtener_nombre() << "|$";
	cout << un_producto.obtener_precio() << "-> ";
	cout << (un_producto.obtener_oferta() ? "Oferta 10% OFF\n" : "No esta en oferta\n");
}
void Contenedor::ver_contenido()
{
	for (int i = 0; i < espacio_ocupado; i++)
	{
		mostrar_producto(contenido[i]);
	}
}
int Contenedor::esta_producto(string nombre_producto)
{
	int posicion_buscada = -1;
	int pos_producto = 0;
	while ((pos_producto < tamanio) && (posicion_buscada != -1))
	{
		if (contenido[pos_producto].obtener_nombre() == nombre_producto)
		{
			posicion_buscada = pos_producto;
		}
		else
			pos_producto++;
	}
	return posicion_buscada;
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
		delete[] contenido;
		contenido = aux;
		tamanio = nuevo_tamanio;
	}
}
void Contenedor::agregar_producto(Producto un_producto)
{
	int tam_new = 0;
	int primera_pos_disponible = 0;
	string nombre_new = un_producto.obtener_nombre();
	string codigo_new = un_producto.obtener_codigo_barra();
	double precio_new = un_producto.obtener_precio();
	bool oferta_new = un_producto.obtener_oferta();
	if (tamanio == 0) //El vector estaba vacio
	{
		tam_new = 5;
		redimensionar(tam_new);
	}
	else if (tamanio != 0)
	{
		primera_pos_disponible = espacio_ocupado;
		if (espacio_ocupado == tamanio) //El vector estaba lleno
		{
			tam_new = espacio_ocupado + 5;
			redimensionar(tam_new);
		}
	}
	contenido[primera_pos_disponible].asignar_nombre(nombre_new);
	contenido[primera_pos_disponible].asignar_codigo_barra(codigo_new);
	contenido[primera_pos_disponible].asignar_precio(precio_new);
	contenido[primera_pos_disponible].asignar_oferta(oferta_new);
	espacio_ocupado++;
}

void Contenedor::quitar_producto(string nombre_producto)
{
	int pos_eliminar = 0;
	bool encontrado = false;

	while ((pos_eliminar < tamanio) && (!encontrado))
	{
		if (contenido[pos_eliminar].obtener_nombre() == nombre_producto)
		{
			encontrado = true;
			contenido[pos_eliminar] = contenido[tamanio - 1];
			espacio_ocupado--;
		}
		else
			pos_eliminar++;
	}
}
Contenedor::~Contenedor()
{
	delete[] contenido;
}