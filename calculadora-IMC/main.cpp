#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float peso,altura, imc;

	cout << "Peso: ";
	cin >> peso;
	cout << "Altura: ";
	cin >> altura;
	
	imc = peso/(pow(altura,2));

	if (imc<18.5)
		cout << "Abaixo do peso"<<endl;
		
	else if (imc>=18.5&&imc<=24.9)
		cout << "Peso normal"<<endl;
	
	else if (imc>24.9&&imc<=29.9)
		cout << "Acima do peso"<<endl;
	
	else if (imc>29.9)
		cout << "Obeso"<<endl;
		
	else
		cout << "IMC inválido";

	system("pause");

	return 0;
}