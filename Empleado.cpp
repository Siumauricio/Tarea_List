#include "Empleado.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

Empleado::Empleado(int codigo,string nombre,float salario) {
	this->codigo = codigo;
	this->Nombre = nombre;
	this->Salario = salario;
}
Empleado::Empleado(){}

void Empleado::agregarEmpleado(list<Empleado*>&emp,Empleado* Em) {
	Empleado* e = new Empleado(Em->codigo, Em->Nombre, Em->Salario);
	if (emp.empty())
	{
		emp.push_front(e);
	} else {
		emp.push_back(e);
	}
}
float Empleado::ObtenerTotalSalarios(list<Empleado*>& emp) {
	float salarioT = 0;
	for (auto const& i : emp) {
		salarioT += i->Salario;
	}
	return salarioT;
}
float Empleado::obtenerSalarioMayor(list<Empleado*>& emp) {
	float salarioM = 0;
	for (auto const& i : emp) {
		if (i->Salario > salarioM)
		{
			salarioM = i->Salario;
		}
	}
	return salarioM;
}
void Empleado::encontrarEmpleado(list<Empleado*>&emp,int codigo) {
	for (auto & i : emp) {
		if (codigo==i->codigo)
		{
			cout << "Empleado: { Codigo: " << i->codigo << " ,Nombre: " << i->Nombre << " ,Salario: " << i->Salario << " }" << endl;
		}
	}
}
int Empleado::ObtenerCantidadEmpleados(list<Empleado*>& emp) {
	return emp.size();
}
void Empleado::imprimirLista(list<Empleado*>& emp) {
	for (auto& i : emp) {
			cout << "Empleado: { Codigo: " << i->codigo << " ,Nombre: " << i->Nombre << " ,Salario: " << i->Salario << " }" << endl;
	}
}