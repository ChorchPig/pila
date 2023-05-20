#include <iostream>
#include "prototipos.h"

int main(){
    nodo *inicioFila=NULL;
    nodo *finalFila=NULL;
    int option=1, num=0;
    bool *mesas=new bool[cantMesas];
    for(int i=0; i<cantMesas; i++){
       mesas[i]=false;
    }
    while(option){
        std::cout<<"Select an option \n\t";
        std::cout<<"1. Add to the queue \n\t2. Next in the queue ";
        std::cout<<"\n\t3. Call table \n\t4. Free table ";
        std::cout<<"\n\t0. Exit program \n";
        std::cin>>option;
        switch(option){
            case 0: confirmarSalida(&option); break;
            case 1: {
                insertarFila(inicioFila, finalFila, num);
                std::cout<<num<<" succesfuly stored.\n";
                num++;
            } break;
            case 2: {
                if(inicioFila){
                    std::cout<<"Next one in the queue: "<<inicioFila->dato<<"\n";
                }
                else{
                    std::cout<<"The queue is empty.\n";
                }
            } break;
            case 3: if(llamarMesa(mesas))quitarFila(inicioFila, finalFila); break;
            case 4: liberarMesa(mesas); break;
            default : std::cout<<"No option selected\n";
        }
    }
    while(inicioFila){
        quitarFila(inicioFila, finalFila);
    }
    delete []mesas;
    return 0;
}
