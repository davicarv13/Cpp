#include "iostream"
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(int argc, char **argv){
	float base, comprimento, altura;

	setlocale(LC_ALL, "Portuguese");

	cout << "Informe a medida da base:";
	cin >> base;
	cout << "Informe o comprimento:";
	cin >> comprimento;
	cout << "Informe a altura:";
	cin >> altura;

	cout << "Área do paralelepípedo:" << base*altura*comprimento;

}