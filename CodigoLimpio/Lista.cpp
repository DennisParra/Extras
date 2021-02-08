#pragma once
#include <iostream>
#include "Lista.h"

using namespace std;

Lista::Lista() {
	cabeza = NULL;
}

void Lista::setPersona(Persona _persona) {
	persona = _persona;
}

Persona Lista::getPersona() {
	return persona;
}

bool Lista::vacia() {

	if (cabeza == NULL) {
		return true;
	}
	else {
		return false;
	}

}

int Lista::tamanio() {

	int contador = 0;

	Lista* aux = new Lista;
	aux = cabeza;

	while (aux != NULL){

		contador += 1;
		aux = aux->siguiente;
	}
	return contador;
}

void Lista::insertar(Persona persona) {

	Lista* nuevaPersona = new Lista;
	nuevaPersona->persona = persona;
	nuevaPersona->siguiente = NULL;

	if (vacia()) {
		cabeza = nuevaPersona;
	}
	else {

		nuevaPersona->siguiente = cabeza;
		cabeza = nuevaPersona;

	}
}

void Lista::mostrar() {

	Lista* aux;
	aux = cabeza;

	while (aux != NULL) {
		aux->persona.mostrarInformacion();
		aux = aux->siguiente;
	}
}

void Lista::buscar(Persona persona, string buscar) {

	bool encontrado = false;
	Lista* aux;
	aux = cabeza;

	while (encontrado == false && aux != NULL){

		if (aux->persona.getCedula() == buscar) {
			encontrado = true;
			
			aux->persona.mostrarInformacion();
		}
		aux = aux->siguiente;
	}

	if (encontrado == false) {
		cout << "Elemento no encontrado\n";
	}
}

void Lista::ordenar() {

	Lista* aux = cabeza;
	Lista* aux2 = NULL;

	Persona persona;

	while (aux->siguiente != NULL) {
		aux2 = aux->siguiente;

		while (aux2 != NULL) {

			if (aux->getPersona().getEdad() > aux2->getPersona().getEdad()) {
				persona = aux2->getPersona();
				aux2->setPersona(aux->getPersona());
				aux->setPersona(persona);
			}
			aux2 = aux2->siguiente;

		}

		aux = aux->siguiente;
	}

}
