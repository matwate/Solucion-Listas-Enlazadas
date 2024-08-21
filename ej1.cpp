
#include "list.h"


// Ejercicio 1
/* 
*/

auto Solucion(List<int> L, List<int> P){

     auto p_it = P.begin(); // iterador de la lista de posiciones
     while (p_it != P.end()) { // Mientras no llegue al final de la lista de posiciones
        auto l_it = L.begin(); // iterador de la lista de enteros
        for (int i = 0; i < *p_it; i++) { // Recorro la lista de enteros hasta la posicion que me indica la lista de posiciones
            ++l_it; // Avanzo el iterador de la lista de enteros
        }
        std::cout << *l_it << " "; // Imprimo el valor de la lista de enteros en la posicion que me indica la lista de posiciones
        ++p_it; // Avanzo el iterador de la lista de posiciones
    }
}


int main(){
    // Creo la lista de enteros
    List<int> L;
    L.push_back(1);
    L.push_back(2);
    L.push_back(3);
    L.push_back(4);
    L.push_back(5);
    L.push_back(6);

    // Creo la lista de posiciones
    List<int> P;
    P.push_back(0);
    P.push_back(2);
    P.push_back(4);

    // Llamo a la funcion Solucion
    Solucion(L, P);

    // Profit

    return 0;
}