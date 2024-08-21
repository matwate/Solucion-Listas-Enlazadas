#include <list.h>


// Ejercicio 6
/*
    Problema de josephuss
 */

auto Solucion(int n, int m){
    // Generamos una lista de n elementos donde el ultimo apunta al primero
    List<int> L;
    for (int i = 0; i < n; i++) {
        L.push_back(i);
    }
    auto it = L.begin();
    for (int i = 0; i < n - 1; i++) {
        ++it;
    }
    
    // No se puede realizar porque no existen metodos publicos los cuales permitan acceder a prev y next de un nodo de la lista
    




    

}