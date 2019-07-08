#include<iostream>
#include<locale.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
    int Nota[10], Matricula[10], Opcao, i ;
    char Nome[10], N;
    /* Opção de Cadastro de aluno ou Sair do programa */ 
    setlocale(LC_ALL, "pt-br");
    cout<<"Digite 1 para Cadastro de alunos ou digite 2 para sair do programa\n";
    cin>>Opcao;
    switch (Opcao)
    {
        case 1:

        break;
        case 2:
            system("CLS");
            cout<<"\nOpção sair confirmada\n";
        break;
        default:
            system("CLS");
            cout<<"\nOpção inexistente!\n";
    }
    system("PAUSE");
    return 0;
}