#include <iostream>
#include <cmath>
#include <vector>
#include <isolamento.h>
#include "funcao.h"

// função de isolamento convencional 
std::vector<intervalo> isolamento(double a, double b, double A){
    // vetor que guarda os intervalos que contém raízes
    std::vector<intervalo> intervalos;
    for(double i = a; i<b; i+=0.5){
        
        // teorema: f(a)*f(b) < 0 -> tem raiz entre a e b!
        if(f_a(i, A) * f_a(i+0.5, A) < 0){
            intervalo I;
            I.a = i;
            I.b = i+0.5;
            intervalos.push_back(I);
        }
        // tentar implementar corolário
            // f'(d) < 0 ou f'(d) > 0, para todo d em [a,b] -> raiz única entre a e b!
        // tentar apertar intervalo
        
    }

    return intervalos;
}

// função de isolamento para função f com A variado
intervalo isolamento_para_f_com_A_variado(double A){
    intervalo I;
    double a = 0.000001; // menor valor de A com para a raiz d buscada existir
    double b = 2.165364; // maior valor de A truncado para a raiz d buscada existir
    for(double i = a; i<b; i+=0.2){
        // teorema: f(a)*f(b) < 0 -> tem raiz entre a e b!
        if(f_a(i, A) * f_a(i+0.2, A) < 0){
            I.a = i;
            I.b = i+0.2;
        }
        // tentar implementar corolário
            // f'(d) < 0 ou f'(d) > 0, para todo d em [a,b] -> raiz única entre a e b!
        // tentar apertar intervalo     
    }
    return I;
}