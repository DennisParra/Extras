#pragma once

#include "Lista.h"
#include "Persona.h"
#include "Archivo.h"
#include <locale.h>

using namespace std;

void menu();

int main() {

	menu();

	system("pause");
	return 0;
}

void menu() {

	setlocale(LC_CTYPE, "Spanish");

	int opcion = 0;
	string dato, buscar;
	Persona objPersona;
	Lista objLista;
	Archivo objArchivo;

	while (opcion != 5) {
		cout << "1. Ingresar datos\n";
		cout << "2. Mostrar elementos\n";
		cout << "3. Buscar en la lista\n";
		cout << "4. Ordenar\n";
		cout << "5. Salir\n";
		cout << "\nDigite una opción: ";
		cin >> opcion;

		system("cls");

		if (opcion == 1) {

			cout << "Digite su nombre: ";
			cin >> dato;
			objPersona.setNombre(dato);

			cout << "Digite su apellido: ";
			cin >> dato;
			objPersona.setApellido(dato);

			cout << "Digite su cédula: ";
			cin >> dato;
			objPersona.setCedula(dato);

			int edad;
			cout << "Digite su edad: ";
			cin >> edad;
			objPersona.setEdad(edad);

			objLista.insertar(objPersona);

			objArchivo.crearArchivo(objPersona);

			objArchivo.backUp();

			cout << endl;
			system("pause");
			system("cls");
		}
		else if (opcion == 2) {

			cout << "\t\tLista de personas";
			objLista.mostrar();

			cout << endl;
			system("pause");
			system("cls");
		}
		else if (opcion == 3) {
			
			cout << "Digite el número de cedula: ";
			cin >> buscar;

			objLista.buscar(objPersona, buscar);
			
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (opcion == 4) {

			objLista.ordenar();

		}
	}
}

