#pragma once
#include <string>

using namespace std;

class Planta
{
private:
	float vida;
	string tipoPlanta;
	int costo;
	float recarga;
	
public:
	void disparar();
	void plantar();
	void explotar();
	void generarSoles();
	void generarMonedas();
	void comer();
	void congelar();
	void quemar();
	void empujar();
	void paralizar();
	void golpear();
	void envenenar();

};

