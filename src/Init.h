#ifndef INIT_H
#define INIT_H

#include <time.h>
#include <iostream>
#include <stdlib.h>
#define clean system("cls");
using namespace std;
#include "Pila.h";

void init();
void welcome(string title);
void bookList();
void insertBook();
void ultimateBook();
bool verify(string option, int maximun);
void searchByCategory();
#endif // INIT_H
