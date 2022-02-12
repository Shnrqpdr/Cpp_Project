#include <iostream>
#include <string.h>

using namespace std;

#include "entities/Perfil.h"
#include "entities/Treino.h"
#include "entities/Ficha.h"

int main()
{
    {
        Treino tipo("Maxima","A-B-C");
        Ficha fichatec(75.5, "Hipertrofia", tipo);

        cout << "\nPeso da pessoa: " << fichatec.getPeso()
             << "\nObjetivo da pessoa: " << fichatec.getObjetivo()
             << "\nTipo de treino: " << fichatec.getTreino(tipo)
             << endl;
    }

    {
        Treino tipo("Maxima","A-B-C");
        Ficha fichatec(75.5, "Hipertrofia", tipo);

        Perfil *perfil1 = 0, *perfil2 = 0;

        perfil1 = &fichatec;
        perfil2 = &tipo;

        perfil1->imprime();
        perfil2->imprime();
        
    }
}