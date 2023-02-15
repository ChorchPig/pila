#include <iostream>
#include "prototipos.h"

int main(){
    nodo *inicioFila=NULL;
    nodo *finalFila=NULL;
    int option=1, num=0;
    while(option){
        std::cout<<"Select an option \n\t";
        std::cout<<"1. Add data to the queue \n\t2. Remove data from the queue ";
        std::cout<<"\n\t3. Show first data added to the queue \n\t0. Exit program \n";
        std::cin>>option;
        switch(option){
            case 0: confirmarSalida(&option); break;
            case 1: {
                std::cout<<"Give me a number: ";
                std::cin>>num;
                insertarFila(inicioFila, finalFila, num);
                std::cout<<num<<" succesfuly stored.\n";
            } break;
            case 2: quitarFila(inicioFila, finalFila, num); break;
            case 3: {
                if(inicioFila){
                    std::cout<<"First data added to the pile the queue: "<<inicioFila->dato<<"\n";
                }
                else{
                    std::cout<<"The queue is empty.\n";
                }
            } break;
            default : std::cout<<"No option selected\n";
        }
    }
    while(inicioFila){
        quitarFila(inicioFila, finalFila, num);
    }
    return 0;
}
