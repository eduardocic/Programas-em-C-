#include <iostream>

//==================================================
// Eduardo H. Santos
// 24/08/2018
// 
// Este programa fará a apresentação do uso de 
// variáveis estáticas dentro de uma classe em C++.
// No caso, será implementado um contador de obje-
// tos da classe. Ou seja, irei verificar quantos
// objetos ao todo foram criados.
//==================================================

//==================================================
// Para simplificação de processos e utilização
// das funções do C++, i.e: 'cout', 'cin' etc.
//==================================================
using namespace std;

//==================================================
//
// Classe 
//
// (*) Perceba que a variável do tipo 'static int'
//     encontra-se fora de definição 'public' ou 
//     outra do tipo.
// (*) Além disso é importante que você, ao estan-
//     ciar a classe que você inicialize a(s) variá-
//     vel do tipo 'static'.
//==================================================
class Eduardo{
    static int contador;
    public:
        Eduardo();
        void printa();       
};
int Eduardo::contador = 0;

// Construtor da classe 'Eduardo'
Eduardo::Eduardo(){
    this->contador++;
    cout << "CONSTRUTOR" << endl;
    cout << "----------\n" << endl;
    cout << "Objeto criado" << endl;
    cout << "Total: " << this->contador << "\n" <<endl;
}

// Método da classe 'Eduardo'.
void Eduardo::printa(){
    cout << "Total de obj. é: " << this->contador << endl;
}

int main(void){
    // Crio dois objetos.
    Eduardo a, b;

    // Verifico, por qualquer um dos dois objetos,
    // quantos objetos foram criados.
    cout << "Por 'a'... ";
    a.printa();
    cout << "Por 'b'... ";
    b.printa();

    return 0;
}