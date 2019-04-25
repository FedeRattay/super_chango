#include "producto.h"
//Producto Metodos Asignar
void Producto::asignarNombre(string _nombre) { nombre = _nombre; }
void Producto::asignarCodigoBarra(unsigned long long _codigoBarra) { codigo = _codigoBarra; }
void Producto::asignarPrecio(double _precio) { precio = _precio; }
void Producto::asignarOferta(bool _oferta) { oferta = _oferta; }
// Producto Metodos Obtener
string Producto::obtenerNombre() { return nombre; }
unsigned long long Producto::obtenerCodigoBarra() { return codigo; }
double Producto::obtenerPrecio() { return precio; }
bool Producto::obtenerOferta() { return oferta; }

Producto::Producto()
{
	asignarNombre("");
	asignarCodigoBarra(0);
	asignarPrecio(0);
	asignarOferta(0);
}

Producto::Producto(string _nombre, unsigned long long _codigoBarra, double _precio, bool _oferta)
{
	asignarNombre(_nombre);
	asignarCodigoBarra(_codigoBarra);
	asignarPrecio(_precio);
	asignarOferta(_oferta);
}