#include "Persona.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

#include <time.h>
#include <windows.h>
#include <string>
#include <ctime>

using namespace std;

class Archivo {

public:
	void crearArchivo(Persona persona);
	void backUp();
};