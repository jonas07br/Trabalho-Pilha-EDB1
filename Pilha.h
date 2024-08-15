#ifndef PILHA_H
#define PILHA_H
#include <iostream>
using namespace std;

class Pilha{
    private:
        char* elementos;
        int tamanho;
    public:
        Pilha();
        ~Pilha();
        void push(char);
        void pop();
        int size();
        char top();

};
Pilha::Pilha(){
    elementos= new char[20];
    this->tamanho=0;
}
Pilha::~Pilha(){
    delete [] elementos;
}
void Pilha::push(char l){
    elementos[tamanho]=l;
    this->tamanho=tamanho+1;
}
void Pilha::pop(){
    this->tamanho=tamanho-1;
}
int Pilha::size(){
    return tamanho;
}
char Pilha::top(){
    return elementos[tamanho-1];
}
#endif