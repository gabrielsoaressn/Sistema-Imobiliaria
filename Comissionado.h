#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado:public Funcionario
{
    public:
        Comissionado(double vendasSemanais, double percentualComissao);
        Comissionado();
        virtual ~Comissionado();
        double calculaSalario(double vendasSemanais, double percentualComissao);

    protected:
        double vendasSemanais;
        double percentualComissao;

    private:
};

#endif // COMISSIONADO_H
