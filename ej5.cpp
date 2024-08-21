#include "list.h"

// Ejercicio 5
/*
    Dadas 2 listas ordenadas de enteros L1 y L2, escriba un procedimiento para calcular L1 U L2
*/

auto Solucion(List<int> L1, List<int> L2){
    auto l1_it = L1.begin(); // iterador de la lista 1
    auto l2_it = L2.begin(); // iterador de la lista 2

    List<int> Output = List<int>(); // Creo una lista de salida

    for (; l1_it != L1.end() && l2_it != L2.end(); ) { // Mientras no llegue al final de ninguna de las listas
        if (*l1_it == *l2_it) { // Si los valores de los iteradores son iguales
            Output.push_back(*l1_it); // Agrego el valor a la lista de salida
            ++l1_it; // Avanzo el iterador de la lista 1
            ++l2_it; // Avanzo el iterador de la lista 2
        } else if (*l1_it < *l2_it) { // Si el valor de la lista 1 es menor al valor de la lista 2
            Output.push_back(*l1_it); // Agrego el valor a la lista de salida
            ++l1_it; // Avanzo el iterador de la lista 1
        } else { // Si el valor de la lista 2 es menor al valor de la lista 1
            Output.push_back(*l2_it); // Agrego el valor a la lista de salida
            ++l2_it; // Avanzo el iterador de la lista 2
        }
    }

    // Agrego los elementos restantes de cualquiera de las listas
    while (l1_it != L1.end()) {
        Output.push_back(*l1_it);
        ++l1_it;
    }

    while (l2_it != L2.end()) {
        Output.push_back(*l2_it);
        ++l2_it;
    }

    return Output; // Retorno la lista de salida
}

// Test

int main(){

    // Creo la lista 1
    List<int> L1;
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(3);

    // Creo la lista 2
    List<int> L2;
    L2.push_back(2);
    L2.push_back(3);
    L2.push_back(4);

    // Llamo a la funcion Solucion
    auto Output = Solucion(L1, L2);

    // Print al output
    for (auto it = Output.begin(); it != Output.end(); ++it) {
        std::cout << *it << " ";
    }

    // Profit

    return 0;
}