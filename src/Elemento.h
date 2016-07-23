#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>

class Elemento
{
    public:
        Elemento(std::string name);
        virtual ~Elemento();
        std::string getName(){
            return _name;
        }
        void setName(std::string name){
            _name = name;
        }
        Elemento* getNext(){
            return _next;
        }
        void setNext(Elemento* elemento){
            _next = elemento;
        }
        std::string getCategory(){
            return _category;
        }
        void setCategory(std::string category){
            _category = category;
        }
    private:
        std::string _name;
        Elemento* _next;
        std::string _category;
};

#endif // ELEMENTO_H
