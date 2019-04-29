#ifndef CHANGO
#define CHANGO

#include "producto.h"
#include "contenedor.h"
class Chango : public Contenedor
{
public:
	/*Calcula el gasto y ahorro total de los productos en el chango.
	PRE: El vector existe.
	POST: Se muestra el gasto total de los producto tomando en cuenta los descuentos.*/
	void calcular_total();
};

#endif
