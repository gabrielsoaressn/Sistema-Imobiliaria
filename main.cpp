#include <iostream>
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"


int main()
{
    Assalariado *assalariado1 = new Assalariado();
    Horista *horista1 = new Horista();
    Comissionado *comissionado1 = new Comissionado();

    assalariado1->setNome("Marcos");
    assalariado1->setMatricula(10);


    std::cout<< assalariado1->calculaSalario(1800) << std::endl;
    std::cout<< assalariado1->getNome()<<std::endl;
    std::cout<< assalariado1->getMatricula()<<std::endl;

    horista1 -> setNome("Clayton");
    horista1 -> setMatricula(7);

    std::cout<< horista1->calculaSalario(30, 40) << std::endl;
    std::cout<< horista1->getNome()<<std::endl;
    std::cout<< horista1->getMatricula()<<std::endl;

    comissionado1 -> setNome("Nando");
    comissionado1 -> setMatricula(9);

    std::cout << comissionado1 -> calculaSalario (80,80)<<std::endl;
    std::cout << comissionado1 -> getNome()<<std::endl;
    std::cout << comissionado1 -> getMatricula()<<std::endl;



    delete assalariado1, horista1, comissionado1;
    return 0;
}
