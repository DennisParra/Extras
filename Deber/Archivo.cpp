#include "Archivo.h"

void Archivo::crearArchivo(Persona persona) {

	ofstream archivo;

	archivo.open("C://Users//EQUIPO//Desktop//Estructura De Datos//Segundo Parcial//Extra//Archivo.txt", ios::out | ios::app);

	if (archivo.fail()) {
		cout << "Error!! Archivo no pudo ser creado ";
		exit(1);
	}

	archivo << "Nombre: " << persona.getNombre() << endl;
	archivo << "Apellido: " << persona.getApellido() << endl;
	archivo << "Cédula: " << persona.getCedula() << endl;
	archivo << "Edad: " << persona.getEdad() << endl;

	archivo << "\n\n";

	archivo.close();
}