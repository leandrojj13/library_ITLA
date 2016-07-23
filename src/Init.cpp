#include "Init.h"


Pila* pila = new Pila;

void init(){
    welcome("Welcome to VMeta Library");

    cout <<"\n\n\n\n" << endl;
    system("pause");
}

void welcome(string title){
    clean;
    cout << "\n\n\t\t\t\t\t\t" << title <<"\n\n\n\t\t\t\t\t\t";
    cout << "     Choose an opcion: "<<" \n\n\n\t\t\t\t\t 1. Books List  \n\t\t\t\t\t 2. Insert book \n\t\t\t\t\t 3. Request latest book stack \n\t\t\t\t\t 4. Search book by category \n\t\t\t\t\t 5. Close \n\n\n \t\t\t\t\t"<< "Option for start: ";
    string option;
    cin >> option;
    while(!verify(option,5)){
        cin >> option;
    }

    if(option == "1"){
        bookList();
    }else if(option == "2"){
        insertBook();
    }else if(option == "3"){
        ultimateBook();
    }else if(option == "4"){
        searchByCategory();
    } else if(option == "5"){
      exit(0);
    }
}
void  bookList(){
    clean;
    cout << "\n\n\t\t\t\t\t\tBook List" << "\n\n\n\t\t\t\t\t\t" <<endl;
    Elemento* element = pila->getUltimate();
    if(element == NULL){
       cout << "\n\n\t\t\t\t\t There aren't book added " << "\n\n\n";
    }
    while(element != NULL){
        cout << "\nName: "<<element->getName() << " \n Category: " << element->getCategory() << endl;
        element = element->getNext();
    }
     cout << "\n--Press Enter for return to the main menu--";
            cin.ignore();
            cin.get();
            welcome("\tVMeta Library");
}

void insertBook(){
    clean;
    cout << "\n\n\t\t\t\t\t\tInsert book \n\n\n\t\t\t\t\t\t" << endl;
    cout << " Introduce book's name: ";
    string name;
    cin >> name;
    cout << "\n Introduce book's category: ";
    string category;
    cin >> category;

    Elemento* elem1 = new Elemento(name);
    elem1->setCategory(category);
    pila->add(elem1);

    cout <<"\n\n The book was add succefully!!\n\n";
    cout << "\n--Press Enter for return to the main menu--";
    cin.ignore();
    cin.get();
    welcome("\tVMeta Library");
}

void searchByCategory(){
    clean;
    cout << "\n\n\t\t\t\t\t\tSearch Book for category" << "\n\n\n\t\t\t\t\t\t" <<endl;

    Elemento* element = pila->pop();

    if(element == NULL){
       cout << "\n\n\t\t\t\t\t There aren't book added " << "\n\n\n";
    }else{
        cout << " Introduce book's category: ";
        string category;
        cin >> category;
        while(element != NULL){
            if(element->getCategory() != category){
                cout << "\n The book: "<<element->getName() << " has been remove, becouse doesn't meet the search criteria.";
            }else{
                cout << "\n The book: "<<element->getName() << " has been remove, meet the search criteria.";
            }
            element = pila->pop();
        }
    }
    cout << "\n\n--Press Enter for return to the main menu--";
    cin.ignore();
    cin.get();
    welcome("\tVMeta Library");
}


void ultimateBook(){
    clean;
    Elemento* element = pila->pop();
     cout << "\n\n\t\t\t\t\t\tUltimate book \n\n\n\t\t\t\t\t\t" << endl;
    if(element != NULL){
        cout << "\n Book's name: " << element->getName() << " -- Category: " << element->getCategory() << endl;

        cout <<"\n You have the book now, enjoy it!!\n\n";
    }else{
           cout << "\n\n\t\t\t\t\t There aren't book added " << "\n\n\n";
    }
    cout << "\n--Press Enter for return to the main menu--";
    cin.ignore();
    cin.get();
    welcome("\tVMeta Library");
}

bool verify(string option, int maximun){
    int a = atoi(option.c_str());
     if(a > maximun || a < 1){
        cout << "\n\t\t\t\t\tIncorrect option!!!, Please Choose again: ";
        return false;
    }
        return true;

}


