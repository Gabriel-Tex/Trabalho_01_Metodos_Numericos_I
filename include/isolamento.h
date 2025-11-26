#include <iostream>
#include <vector>

// extremidades do intervalo
struct intervalo{
    double a, b;
};

// função de isolamento convencional
std::vector<intervalo> isolamento(double a, double b, double A);

// função de isolamento para função com A variado
intervalo isolamento_para_f_com_A_variado(double A);