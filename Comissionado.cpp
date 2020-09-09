#include "Comissionado.h"

Comissionado::Comissionado(double vendasSemanais, double percentualComissao)
{
    vendasSemanais=vendasSemanais;
    percentualComissao=percentualComissao;
}

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::~Comissionado()
{
    //dtor
}
double Comissionado::calculaSalario(double vendasSemanais, double percentualComissao)
{
    return vendasSemanais*percentualComissao;
}
