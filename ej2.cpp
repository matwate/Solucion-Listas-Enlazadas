#include <list.h>

auto Solucion(List<int> l, int idx1, int idx2){
    
    // Hallamos el iterador en la posicion idx1
    auto it1 = l.begin();
    for (int i = 0; i < idx1 && it1 != l.end(); i++) {
        ++it1;
    }

    // El iterador ahora mismo se encuentra en la posicion idx1

    auto it2 = l.begin();
    for (int i = 0; i < idx2 && it2 != l.end(); i++) {
        ++it2;
    }

    // El iterador ahora mismo se encuentra en la posicion idx2

    // Verificamos que los iteradores no esten en el final de la lista
    if (it1 == l.end() || it2 == l.end()) {
        throw std::runtime_error("Index out of bounds");
    }

    if (it1 == it2) {
        throw std::runtime_error("El profesor no fue explicito en el enunciado por lo que no se que hacer en este caso");
    }
    // Guardamos los valores 
    auto val1 = *it1;
    auto val2 = *it2;


    // Y despues de leer suficiente, no se puede realizar porque no existen metodos publicos los cuales permitan acceder a prev y next de un nodo de la lista


}