#include <iostream>
#include <string.h>

using namespace std;

#include "entities/Perfil.h"
#include "entities/Treino.h"

    Treino::Treino(string load, string period):Perfil()
    {
        setCarga(load);
        setPeriodizacao(period);
    }

    Treino::~Treino()
    {
        cout << "\n Fim do treino. \n" << endl;
    }

    void Treino::setCarga(string load)
    {
        carga = load;
    }

    void Treino::setPeriodizacao(string period)
    {
        periodizacao = period;
    }

    string Treino::getCarga() const
    {
        return carga;
    }

    string Treino::getPeriodizacao() const
    {
        return periodizacao;
    }

    void Treino::imprime()
    {
        cout << "\n Carga do treino: " << carga
             << "\n Periodizacao do treino: " << periodizacao
             << endl;
    }