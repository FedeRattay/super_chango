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
		cout << "ERROR" << endl;
	}
	else
	{
		int posicion = 0;
		string cantidad_productos;
		string codigo;
		string nombre;
		string precio_aux;
		string oferta_aux;
		double precio = 0;
		bool oferta;

		getline(archivo_stock, cantidad_productos, ',');
		int cantidad = stoi(cantidad_productos);

		Producto *aux = new Producto[cantidad];
		if (cantidad > 0)
		{
			for (int i = 0; i < tamanio; i++)
			{
				aux[i] = contenido[i];
			}
			while (
				getline(archivo_stock, codigo, ',') &&
				getline(archivo_stock, nombre, ',') &&
				getline(archivo_stock, precio_aux, ',') &&
				getline(archivo_stock, oferta_aux, ','))
			{
				precio = stod(precio_aux);
				oferta = (oferta_aux == "1");
				aux[posicion].asignar_codigo_barra(codigo);
				aux[posicion].asignar_nombre(nombre);
				aux[posicion].asignar_precio(precio);
				aux[posicion].asignar_oferta(oferta);
				posicion++;
			}
			tamanio = cantidad;
			delete[] contenido;
			contenido = aux;
		}
	}
}

void Gondola::buscar_producto_codigo(string codigo_producto)
{
	int i = 0;
	bool encontrado = false;
	while ((i < tamanio) && (!encontrado))
	{
		if (contenido[i].obtener_codigo_barra() == codigo_producto)
		{
			encontrado = true;
			mostrar_producto(contenido[i]);
		}
		else
			i++;
	}
}
void Gondola::modificar_precio(string nombre_producto, double precio_nuevo)
{
	int pos_modificar = 0;
	bool encontrado = false;

	while ((pos_modificar < tamanio) && (!encontrado))
	{
		if (contenido[pos_modificar].obtener_nombre() == nombre_producto)
		{
			encontrado = true;
		}
		else
			pos_modificar++;
	}
	if (encontrado)
	{
		contenido[pos_modificar].asignar_precio(precio_nuevo);
	} //else "existe el producto"?
}
void Gondola::ver_ofertas()
{
	/*
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
	*/
}

/*Gondola::~Gondola()
{
	//delete[] ...;
}
*/
