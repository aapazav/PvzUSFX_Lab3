#pragma once
#include <string>
using namespace std;
class Zombi
{
private:
	string tipoZombi;
	float vida;
	float da�o;
	float velocidad;
	int nivelfuria;

public:
	void caminar();
	void comer();
	void saltar();
	void morir();
	void bailar();
	void explotar();
};

