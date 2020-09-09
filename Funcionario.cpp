#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}


Funcionario::~Funcionario()
{
    //dtor
}

double Funcionario::calculaSalario()
{

}

std::string Funcionario::getNome()
{
    return nome;
}

int Funcionario::getMatricula()
{
    return matricula;
}


void Funcionario::setSalario(double salario)
{
    this -> salario = salario;
}
void Funcionario::setNome(std::string nome)
{
    this ->nome = nome;
}

void Funcionario::setMatricula(int matricula)
{
    this -> matricula = matricula;
}


