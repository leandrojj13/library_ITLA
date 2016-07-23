#include "Pila.h"

Pila::Pila():_ultimate(NULL)
{
}

void Pila::add(Elemento* element)
{
    if(!_ultimate){
        _ultimate = element;
    }else{
        Elemento* _ultimateAnterior = _ultimate;
        _ultimate = element;
        _ultimate->setNext(_ultimateAnterior);
    }
}
Elemento* Pila::pop()
{
    if(_ultimate == NULL){
        return NULL;
    }

    Elemento* retorno = _ultimate;
    _ultimate = _ultimate->getNext();

    return retorno;
}

Pila::~Pila()
{
    //dtor
}
