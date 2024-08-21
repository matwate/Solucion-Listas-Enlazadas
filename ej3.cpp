#include "list.h"

// Ejercicio 3
/*
    Implemente la rutina find de la STL, que devuelve el iterador que contiene el valor buscado
*/

// Solucion: 

template <typename Iterator, typename Object> // Defino una plantilla para la funcion
Iterator find(Iterator begin, Iterator end, const Object &x) { // Defino la funcion find que recibe un iterador de inicio, un iterador de fin y un objeto a buscar
    while (begin != end && *begin != x) { // Mientras no llegue al final y el valor del iterador no sea el valor buscado
        ++begin; // Avanzo el iterador
    }
    return begin; // Retorno el iterador
}

// Test
int main(){
    List<int> L;
    L.push_back(1);
    L.push_back(2);
    L.push_back(3);
    L.push_back(4);
    L.push_back(5);
    L.push_back(6);

    auto it = find(L.begin(), L.end(), 3);
    std::cout << *it << std::endl;

    return 0;
}