#include <iostream>
#include "funcs.h"
using namespace std;


int main()
{
	char nome[20];

	cout<<"Digite o seu nome: ";	
	cin>>nome;

	inverteNome(nome);
	cout<<"Seu nome invertido: "<<nome;
	system("pause");
	
}
