#include <iostream>
#include "Pilha.h"
#include "CheckBalance.h"
#include <string>
using namespace std;
int main(){
    
    string teste1 = "[a+b]*[c-d)";
    string teste2 = "(a+b)*[c-d]";
    string teste3 = ")";

    CheckBalance cb;
    cb.isBalanced(teste2) ? cout<<"Balanceado\n" : cout<<"Nao balanceado\n";


    

    return 0;
}
