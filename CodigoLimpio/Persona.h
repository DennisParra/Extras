#pragma once

#include <string.h>
#include <iostream>
#include <string>

using namespace std;

class Persona {

	private:
		string nombre;
		string apellido;
		string cedula;
		string correo;
		
		int edad;

	public:
		Persona();
		void setNombre(string _nombre);
		void setApellido(string _apellido);
		void setCedula(string _cedula);
		void setCorreo(string _correo);
		void setEdad(int _edad);
		
		string getNombre();
		string getApellido();
		string getCedula();
	    int getEdad();

		void mostrarInformacion();
		string generarCorreo(string nombre, string apellido);
};
