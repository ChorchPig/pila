#include <iostream>
#include "prototipos.h"

void insertarFila(nodo *&inicioFila, nodo *&finalFila, int num){
    nodo *nuevoNodo=new nodo();
    nuevoNodo->dato=num;
    nuevoNodo->siguiente=NULL;
    (inicioFila==NULL)?inicioFila=nuevoNodo:finalFila->siguiente=nuevoNodo;
    finalFila=nuevoNodo;
}

void quitarFila(nodo *&inicioFila, nodo *&finalFila){
    nodo *aux=inicioFila;
    if(inicioFila==finalFila){
        inicioFila=NULL;
        finalFila=NULL;
    }
    else{
        inicioFila=inicioFila->siguiente;
    }
    delete aux;
}

void confirmarSalida(int *option){
    std::cout<<"You are about to exit the program, to confirm this action press 0.\n";
    std::cin>>*option;
}

bool llamarMesa(bool *&mesa){
    int index=0;
    while(index<cantMesas){
        if(!mesa[index]){
            mesa[index]=true;
            std::cout<<"Go to table "<<index+1<<".\n";
            return true;
        }
        else{index++;}
    }
    if(index==cantMesas){
        std::cout<<"All tables are bussy.\n";
    }
    return false;
}

void liberarMesa(bool *&mesa){
    int index=-1;
    while(index<0||index>=cantMesas){
        std::cout<<"What table is now free?\n";
        std::cin>>index;
        if(index<0||index>=cantMesas)std::cout<<"The table does not exist.\n";
    }
    if(mesa[index]){
        mesa[index]=false;
        std::cout<<"Table "<<index+1<<" is now free.\n";
    }
    else {std::cout<<"The table is already free.\n";}
}
