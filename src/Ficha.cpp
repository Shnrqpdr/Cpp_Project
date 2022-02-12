#include <iostream>
#include <string.h>

using namespace std;

#include "entities/Perfil.h"
#include "entities/Treino.h"
#include "entities/Ficha.h"

    Ficha::Ficha(const float weight, string goal, Treino tipo):Perfil(),
    peso(weight), objetivo(goal)
    {
    }

    Ficha::~Ficha()
    {
        cout << "\nFim da ficha. Encerrou a matricula na academia"
             << endl;
    }

    //void Ficha::setPeso(const float weight) const
    //{
    //    peso = weight;
    //}

    //void Ficha::setObjetivo(string goal) const
    //{
    //     objetivo = goal;
    //}

    const float Ficha::getPeso() const
    {
        return peso;
    }

    string Ficha::getObjetivo() const
    {
        return objetivo;
    }

    string Ficha::getTreino(Treino tipo) const
    {
        return tipo.getPeriodizacao();
    }

    void Ficha::imprime()
    {
        cout << "\nO peso da pessoa é: " << peso
             << "\nO objetivo dela na academia é: " << objetivo
             << endl; 
    }