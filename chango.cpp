#include <iostream>
using namespace std;
#include "chango.h"

void Chango::calcular_total()
{
	double gasto_total = 0;
	double descuento = 0;
	for (int i = 0; i < tamanio; i++)
	{
		if (contenido[i].obtener_oferta())
		{
			descuento = (0.1 * contenido[i].obtener_precio());
			gasto_total += (contenido[i].obtener_precio() - descuento);
		}
		else
			gasto_total += contenido[i].obtener_precio();
	}
	cout << "\n-------------------------------------------";
	cout << "\nEl Monto final es: $" << gasto_total << endl;
	cout << "Te ahorraste: $" << descuento << endl;
	cout << "-------------------------------------------"<<endl;
}