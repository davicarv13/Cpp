#include "iostream"
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
	system("clear || cls");
	setlocale(LC_ALL, "Portuguese");
	float comprimento, altura;

	cout << "Informe a lagura do retangulo:";
	cin >> comprimento;

	cout << "Informe a altura do retangulo:";
	cin >> altura;

	cout << "Área do retângulo:" << comprimento*altura;
}