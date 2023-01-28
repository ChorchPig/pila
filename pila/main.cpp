#include <iostream>
#include "prototipos.h"

int main(){
    nodo *pila=NULL;
    int num=0, option=1;
    while(option){
        std::cout<<"Select an option \n\t";
        std::cout<<"1. Add data to the pile \n\t2. Remove data from the pile ";
        std::cout<<"\n\t3. Show last data added to the pile \n\t0. Exit program \n";
        std::cin>>option;
        switch(option){
            case 0: confirmarSalida(&option); break;
            case 1: {
                std::cout<<"Give me a number: ";
                std::cin>>num;
                agregarPila(pila, num);
                std::cout<<num<<" succesfuly stored.\n";
            } break;
            case 2: sacarPila(pila, num); break;
            case 3: std::cout<<"Last data added to the pile the pile: "<<pila->dato<<"\n"; break;
            default : std::cout<<"No option selected\n";
        }
    }
    while(pila){
        sacarPila(pila, num);
    }
    return 0;
}
