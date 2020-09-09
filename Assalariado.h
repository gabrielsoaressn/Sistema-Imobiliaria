#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"


class Assalariado: public Funcionario
{
    public:
        Assalariado();
        Assalariado(double salario);
        virtual ~Assalariado();
        double calculaSalario(double salario);

    protected:


    private:
};

#endif // ASSALARIADO_H
