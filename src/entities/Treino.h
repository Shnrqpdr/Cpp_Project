#include <iostream>
#include <string.h>

using namespace std;

class Treino: public Perfil
{
    private:
        string carga;
        string periodizacao;
    
    public:

        Treino(string load, string period);
        ~Treino();

        string getCarga() const;
        string getPeriodizacao() const;

        void setCarga(string load);
        void setPeriodizacao(string period);

        friend class Ficha;

        void imprime();
};