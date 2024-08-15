#include <iostream>
#include "Pilha.h"
#include "CheckBalance.h"
#include <string>
using namespace std;
int main(){
    
    string entrada;
    cin>> entrada;
    CheckBalance cb;
    cb.isBalanced(entrada) ? cout<<"Balanceado\n" : cout<<"Nao balanceado\n";


    

    return 0;
}
