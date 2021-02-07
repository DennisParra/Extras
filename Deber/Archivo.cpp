#include "Archivo.h"

void Archivo::crearArchivo(Persona persona) {

	ofstream archivo;

	archivo.open("C://Users//Lenovo//Desktop//U//Bases de datos//DeberesP2//Deber//Archivo.txt", ios::out | ios::app);

	if (archivo.fail()) {
		cout << "Erro!! Archivo no pudo ser creado ";
		exit(1);
	}

	archivo << "Nombre: " << persona.getNombre() << endl;
	archivo << "Apellido: " << persona.getApellido() << endl;
	archivo << "Cédula: " << persona.getCedula() << endl;
	archivo << "Edad: " << persona.getEdad() << endl;

	archivo << "\n\n";

	archivo.close();
}