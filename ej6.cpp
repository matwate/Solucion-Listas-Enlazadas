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
    
    // Se puede convertir en circular la lista si eliminamos el primer elemento y lo recolocamos al final
    // Though preferiblemente seria mejor modificar el pointer next del ultimo elemento al primer elemento
    // Asi que hay un problema en la implementacion de la lista

    // Despues de leer la implementacion, veo que eso tampoco puedo hacer
    /*
        Porque el pop front no retorna el valor eliminado, es mas, libera la memoria que ocupa el nodo eliminado
    */





    

}