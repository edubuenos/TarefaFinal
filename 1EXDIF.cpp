#include <iostream>
using namespace std;
float soma(float num1, float num2){
 return num1 + num2;
}
float sub(float num1, float num2){
 return num1 - num2;
}
float mult(float num1, float num2){
 return num1 * num2;
}
float div(float num1, float num2){
 return num1 / num2;
}
int main(){
    float num1;
    float num2;

    cout<<"Digite um numero: \n";
    cin>> num1;
    cout<<"Digite outro numero: \n";
    cin>> num2;

    cout<<"A soma: "<< soma(num1, num2)  << "\n";
    cout<<"A subtracao: "<< sub(num1, num2) << "\n";
    cout<<"A multiplicacao: "<< mult(num1, num2) << "\n";
    cout<<"A divisao: "<< div(num1, num2) << "\n";
}
