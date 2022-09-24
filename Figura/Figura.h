#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>
using namespace std;

#if !defined(_FIGURA_H)
#define _FIGURA_H
class Figura{
private:
	int tipo;
	int color;
public:		
	int init();//metodo generador de numeros random
	void dibujar();	//dibuja segun el valor de tipo	
};

#endif








