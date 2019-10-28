#pragma once
#include "Empleado.h"
#include <iostream>
#include <list>
using namespace std;

int main() {
	Empleado e;
	list<Empleado*>lista;
	e.agregarEmpleado(lista,new Empleado(25,"Carlos",500));
	e.agregarEmpleado(lista, new Empleado (30, "Mauricio", 1500));
	e.agregarEmpleado(lista, new Empleado (35, "Jose", 2500));
	e.imprimirLista(lista);
	cout << "Cantidad Empleados: "<<e.ObtenerCantidadEmpleados(lista) << endl;
	cout << "Total Salarios: "<<e.ObtenerTotalSalarios(lista) << endl;
	cout << "Salario Mayor: "<<e.obtenerSalarioMayor(lista) << endl;
	e.encontrarEmpleado(lista, 25);
}
