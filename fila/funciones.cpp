#include <iostream>
#include "prototipos.h"

void insertarFila(nodo *&inicioFila, nodo *&finalFila, int num){
    nodo *nuevoNodo=new nodo();
    nuevoNodo->dato=num;
    nuevoNodo->siguiente=NULL;
    (inicioFila==NULL)?inicioFila=nuevoNodo:finalFila->siguiente=nuevoNodo;
    finalFila=nuevoNodo;
}

void quitarFila(nodo *&inicioFila, nodo *&finalFila, int &num){
    nodo *aux=inicioFila;
    num=aux->dato;
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
