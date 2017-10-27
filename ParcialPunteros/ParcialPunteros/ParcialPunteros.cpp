#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

void convertir_Coordenadas();

void main(void) {
	convertir_Coordenadas();
}
void convertir_Coordenadas() {
	struct datos
	{
		float a;
		float b;
	};
	float *r, *p, *X, *Y;
	char *tipo;
	tipo = new(char);
	datos *datos_punte;
	datos_punte = new(datos);
	printf("Ingrese la primer coordenada (X o r)\n");
	cin >> datos_punte->a;
	printf("Ingrese la segunda coordenada (Y o p)\n");
	cin >> datos_punte->b;
	printf("Ingrese el tipo a convertir ('p' para polares o 'c' para cortesianas)\n");
	cin >> *tipo;

	if (*tipo == 'p') {
		X = new(float);
		Y = new(float);
		*X = (*datos_punte).a * cos((*datos_punte).b);
		*Y = (*datos_punte).a * sin((*datos_punte).b);
		printf("Valor de X= %f, Valor de Y= %f\n", *X, *Y);
		delete(X);
		delete(Y);
	}
	else if (*tipo == 'c') {
		r = new(float);
		p = new(float);
		*r = sqrt(((*datos_punte).a * (*datos_punte).a) + ((*datos_punte).b *(*datos_punte).b));
		*p = tan(((*datos_punte).b / (*datos_punte).a));
		printf("Valor de r= %f, Valor de p= %f\n", *r, *p);
		delete(r);
		delete(p);
	}
	else {
		printf("El tipo de conversion es incorrecto\n");
	}
	delete tipo;
	delete datos_punte;
	system("Pause");
}