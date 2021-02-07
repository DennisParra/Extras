
#pragma once

#include "Persona.h"
#include "Fecha.h"
#include "Lista.h"

Persona::Persona() {
	nombre = "";
	apellido = "";
	cedula = "";
	correo = "";
}

void Persona::setNombre(string _nombre){
	nombre = _nombre;
}

void Persona::setApellido(string _apellido){
	apellido = _apellido;
}

void Persona::setCedula(string _cedula){
	cedula = _cedula;
}

void Persona::setCorreo(string _correo){
	correo = _correo;
}

void Persona::setEdad(int _edad) {
	edad = _edad;
}


string Persona::getNombre(){
	return nombre;
}

string Persona::getApellido()
{
	return apellido;
}

string Persona::getCedula()
{
	return cedula;
}

int Persona::getEdad() {
	return edad;
}



void Persona::mostrarInformacion() {
	cout << "\n\n\tNombre: " << nombre << endl;
	cout << "\tApellido: " << apellido << endl;
	cout << "\tCedula: " << cedula << endl;
	cout << "\tCorreo electronico: " << generarCorreo(nombre, apellido) << endl;
	cout << "\tEdad: " << edad << endl;
}

string Persona::generarCorreo(string apellido, string nombre) {

	string dominio = "@espe.edu.ec";
	string correo;

	apellido = getNombre();
	nombre = getApellido();

	correo = nombre[0] + apellido + dominio;
	
	return correo;

}

