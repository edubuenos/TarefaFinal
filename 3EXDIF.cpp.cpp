#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int quant = 0;
int num = 0;
string nome[50];
string sobrenome [50];
int nt1[50];
int nt2[50];
int med[50];
cout << "escreva quantos alunos" <<  "\n";
cin >> quant;
 for (num=1; num<=quant; num++){
cout << "escreva o nome de cada aluno" <<  "\n";
cin >> nome[num] >> sobrenome[num];
}
for (num=1; num<=quant; num++){
cout << "escreva a nota 1 do " << nome[num] << " " << sobrenome[num] <<  "\n";
cin >> nt1[num];

cout << "escreva a nota 2 do " << nome[num] << " " << sobrenome[num] <<  "\n";
cin >> nt2[num];
}
 for (num=1; num<=quant; num++){
   med[num] = nt1[num] + nt2[num] / 2;
  if (med[num] > 6){
  cout << nome[num] << " " << sobrenome[num] << " aprovado" << "\n";
  }
else {
  cout << nome[num] << " " << sobrenome[num] << " reprovado" << "\n";
}

}
}
