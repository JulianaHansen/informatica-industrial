#include <iostream>
using namespace std;

void inverteNome(char* nome)
{
    char auxiliar[20];
    int i=0;
    for(i; i<20; i++)
    {
        auxiliar[i] = *nome;
        nome++;
        if(*nome==0)
        break;
    }

    for(int j=0; j<=i; j++)
    {
        nome--;
        *nome = auxiliar[j];
    }

    }



