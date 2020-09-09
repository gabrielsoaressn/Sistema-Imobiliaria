#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"



class Horista : public Funcionario
{
    public:
        Horista();
        Horista(double salarioPorHora, double horasTrabalhadas);
        virtual ~Horista();
        double calculaSalario(double salarioPorHora, double horasTrabalhadas);

    protected:
        double salarioPorHora;
        double horasTrabalhadas;

    private:
};

#endif // HORISTA_H
