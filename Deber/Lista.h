#pragma once
#include "Persona.h"

class Lista {

	private:
		Persona persona;
		Lista* siguiente;
		Lista* cabeza;

	public:
		Lista();
		int tamanio();
		bool vacia();
		void insertar(Persona persona);
		void mostrar();		
		void buscar(Persona persona, string buscar);
};
