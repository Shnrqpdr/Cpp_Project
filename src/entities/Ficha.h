#include <iostream>
#include <string.h>

using namespace std;

class Treino;

class Ficha: public Perfil
{
    protected:

        const float peso;
        string objetivo;

    public:

        Ficha(const float weight, string goal, Treino tipo);
        ~Ficha();

        //Os setters não são necessários.

        //void setPeso(const float weight);
        //void setObjetivo(string goal);

        const float getPeso() const;
        string getObjetivo() const;

        string getTreino(Treino tipo) const; //Esse é o friend

        void imprime();
};

