#include <iostream>
#include <string>
#include "Pilha.h"
#include <vector>

using namespace std;
#define BOLDGREEN "\033[1m\033[32m"
#define BOLDRED "\033[1m\033[31m"
#define RESET "\033[0m"

class CheckBalance{
    private:
        
    public:
        CheckBalance();
        ~CheckBalance();
        bool isBalanced(string entrada);
        void findChars(string entrada);
    };

    CheckBalance::CheckBalance(){
    }

    CheckBalance::~CheckBalance(){
    }

    bool CheckBalance::isBalanced(string entrada){
        Pilha pilha;
        int tam = entrada.size();
        cout<<"ENTRADA:"<<entrada<<endl;

        for(int i=0;i<tam;i++){

            if(entrada[i]=='(' || entrada[i]=='[' || entrada[i]=='{'){
                pilha.push(entrada[i]);
            }
            if(entrada[i]==')'){
                if(pilha.top()=='('){
                    pilha.pop();
                }
                else{
                    delete &pilha; 
                    return false;
                }
            }
            else if(entrada[i]==']'){
                if(pilha.top()=='['){
                    pilha.pop();
                }
                else{  
                    delete &pilha; 
                    return false;
                }
            }
            else if(entrada[i]=='}'){
                if(pilha.top()=='{'){
                    pilha.pop();
                }
                else{
                    delete &pilha; 
                    return false;
                }
            }
            
        }
        if(pilha.size()!=0){
            delete &pilha;
            return false;
        }
        this->findChars(entrada);
        return true;
    }

    void CheckBalance::findChars(string entrada){
        for (char c : entrada) {
            if(c=='(' || c=='[' || c=='{')
                std::cout << BOLDGREEN<< c<<RESET;
            else if(c==')' || c==']' || c=='}'){
                std::cout << BOLDGREEN<< c<<RESET;
            }
            else{
                std::cout << c;
            }
            
        }
        cout<<endl;
    }
