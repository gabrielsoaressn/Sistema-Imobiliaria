#include "Horista.h"

Horista::Horista()
{
    //ctor
}

Horista::Horista(double salarioPorHora, double horasTrabalhadas)
{
    this -> salarioPorHora = salarioPorHora;
    this -> horasTrabalhadas = horasTrabalhadas;
}

Horista::~Horista()
{
    //dtor
}

double Horista::calculaSalario(double salarioPorHora, double horasTrabalhadas){
    return salarioPorHora*horasTrabalhadas;

}
