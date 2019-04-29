#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "gondola.h"

void Gondola::cargar_productos(string nombre_archivo)
{
	ifstream archivo_stock(nombre_archivo);
	if (!archivo_stock.is_open())
	{
		cout << "ERROR Archivo inexistente" << endl;
	}
	else
	{
		int posicion = 0;
		string cantidad_productos;
		Producto aux;
		string codigo;
		string nombre;
		string precio_aux;
		string oferta_aux;
		double precio = 0;
		bool oferta;

		getline(archivo_stock, cantidad_productos, ',');
		int cantidad = stoi(cantidad_productos);

		redimensionar(cantidad);
		while (
			getline(archivo_stock, codigo, ',') &&
			getline(archivo_stock, nombre, ',') &&
			getline(archivo_stock, precio_aux, ',') &&
			getline(archivo_stock, oferta_aux, ','))
		{
			precio = stod(precio_aux);
			oferta = (oferta_aux == "1");
			aux.asignar_codigo_barra(codigo);
			aux.asignar_nombre(nombre);
			aux.asignar_precio(precio);
			aux.asignar_oferta(oferta);
			agregar_producto(aux);
			posicion++;
		}
	}
}
int Gondola::buscar_producto_codigo(string codigo_producto)
{
	int posicion_buscada = NO_ENCONTRADO;
	int posicion = 0;
	while ((posicion < tamanio) && (posicion_buscada == NO_ENCONTRADO))
	{
		if (contenido[posicion].obtener_codigo_barra() == codigo_producto)
		{
			posicion_buscada = posicion;
			mostrar_producto(contenido[posicion_buscada]);
		}
		else
			posicion++;
	}
	if (posicion_buscada == NO_ENCONTRADO)
	{
		cout << "No existe el producto: " << codigo_producto << endl;
	}
	return posicion_buscada;
}
void Gondola::modificar_precio(int posicion_buscada, double precio_nuevo)
{
	contenido[posicion_buscada].asignar_precio(precio_nuevo);
}
void Gondola::ver_ofertas()
{
	for (int i = 0; i < tamanio; i++)
	{
		if (contenido[i].obtener_oferta())
		{
			mostrar_producto(contenido[i]);
		}
	}
}
Producto Gondola::obtener_producto(int posicion_buscada)
{
	return contenido[posicion_buscada];
}
