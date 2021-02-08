#include "Archivo.h"
#include <time.h>
#include <windows.h>
#include <string>
#include <ctime>

#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS


using namespace std;

void Archivo::crearArchivo(Persona persona) {

	ofstream archivo;

	archivo.open("Archivo.txt", ios::out | ios::app);

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

#pragma warning(disable : 4996) //Linea salvadora de codigo

void Archivo::backUp() {

	//time_t dia = time(0);
	time_t tSac = time(NULL);
	//struct tm * tlocal = localtime(&dia);
	struct tm* tmP = localtime(&tSac);
	char fecha[24];
	strftime(fecha, 24, "%d-%m-%y/%H-%M-%S.txt", tmP);//%d-%b-%y; %H-%M-%S

	char comando[64];

	strcpy(comando, "xcopy Archivo.txt ");
	strcat(comando, fecha);
	system(comando);

}

#endif