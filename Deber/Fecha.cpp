#pragma once
#include "Fecha.h"

Fecha::Fecha() {
	dia = 0;
	mes = 0;
	anio = 0;
}

Fecha::Fecha(int _dia, int _mes, int _anio) {
	dia = _dia;
	mes = _mes;
	anio = _anio;
}

void Fecha::setDia(int _dia){
	dia = _dia;
}

void Fecha::setMes(int _mes) {
	mes = _mes;
}

void Fecha::setAnio(int _anio) {
	anio = _anio;
}

int Fecha::getDia() {
	return dia;
}

int Fecha::getMes() {
	return mes;
}	

int Fecha::getAnio() {
	return anio;
}

void Fecha::generarFecha() {
	time_t tiempoActual;
	struct tm  tiempoLocal;
	time(&tiempoActual);
	localtime_s(&tiempoLocal, &tiempoActual);
	anio = tiempoLocal.tm_year + 1900; //le sumamos 1900 ya que desde este año se empezaron a contar
	mes = tiempoLocal.tm_mon + 1; // le sumamos uno ya que empieza desde cero
	dia = tiempoLocal.tm_mday;
}
