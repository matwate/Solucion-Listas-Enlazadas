#include <list.h>

// Ejercicio 2
/* 

    Intercambia 2 elementos adyacentes ajustando unicamente los enlaces
    y no los datos usando una lista doblemente enlazada
*/

void Solucion(List<int> &L, int pos1, int pos2){
    // Check if the positions are valid
    if (pos1 < 0 || pos2 < 0 || pos1 >= L.size() - 1 || pos2 >= L.size() - 1) {
        // Handle invalid positions
        return;
    }
    
    // Get the nodes at the specified positions
    auto beg_it = L.begin();
    for (int i = 0; i < pos1; i++) {
        ++beg_it;
    }
    auto  node1 = *beg_it;

    beg_it = L.begin();
    for (int i = 0; i < pos2 - pos1; i++) {
        ++beg_it;
    }
    auto node2 = *beg_it;

    // Este lo voy a dejar incompleto porque no veo como retornar el Nodo, la dereferencia retorna el valor del nodo

}


