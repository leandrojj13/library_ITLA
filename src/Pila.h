#ifndef PILA_H
#define PILA_H

#include "Elemento.h"

class Pila
{
    public:
        Pila();
        virtual ~Pila();
        void add(Elemento* element);
        Elemento* pop();
        Elemento* getUltimate(){
            return _ultimate;
        }
    private:
        Elemento* _ultimate;
};

#endif // PILA_H
