#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>


class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        virtual double calculaSalario();
        std::string getNome();
        int getMatricula();
        void setSalario(double salario);
        void setNome(std::string nome);
        void setMatricula(int matricula);


    protected:
        std::string nome;
        int matricula;
        double salario;

    private:
};

#endif // FUNCIONARIO_H
