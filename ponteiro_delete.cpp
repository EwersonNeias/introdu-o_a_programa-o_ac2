#include <iostream>
using namespace std;
//biblioteca usada para o codigo
int main()//iniciando o codigo com int
{
    int *ptr = new int; //identificando o ponteiro
    *ptr = 7;
    //colocando a identificação do ponteiro
    cout<< *ptr<<endl;
    cout<< ptr<<endl;
    //delete sendo usado para excluir o ponteiro e não deixar ele ocupando memoria
    delete ptr;
    
     cout<< *ptr<<endl;
     cout<< ptr<<endl;
     
}