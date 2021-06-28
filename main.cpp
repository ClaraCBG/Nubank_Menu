#include <iostream> 

#include <clocale> 

using namespace std; 

 int saldoFinal=0;

/* 

  mostraMenu() 

  Retorna a opção lida pelo usuário a partir da opções 

*/ 

int mostraMenu() { 

  int opcao; 
 

  cout << "MENU" << endl; 

  cout << "1 - Mostrar saldo atual" << endl; 

  cout << "2 - Fazer um depósito" << endl; 

  cout << "3 - Fazer um saque" << endl; 

  cout << "9 - Terminar" << endl; 

  cout << "Opcao? "; cin >> opcao; 
 

  return opcao; 

} 

 

/* 

  mostraSaldo (saldo) 

  Mostra ao usuário o saldo atual da conta 

*/ 

int mostraSaldo (float saldo) { 
  saldo=0;
  saldo=saldoFinal;
  // mostra o valor do saldo disponível 
return saldo;
} 

 

/* 

  deposite (valor, saldo) 

  Acrescenta o valor de depósito em dinheiro ao saldo da conta 

*/ 

int deposite (float valor, float saldo) { 
  valor=0;
  cin >> valor;
  //função que não permitirá depósito de número negativo

  if(valor>0){
    saldoFinal= valor + saldo;
    return saldoFinal;
  // acrescente ao saldo o valor a ser depositado 
  }else
    saldoFinal=saldo;
    return saldoFinal;
  // o valor a ser depositado deve ser maior que zero 
 
} 

 

/* 

  efetueSaque (valor, saldo) 

  Realiza a retirada de dinheiro do saldo da conta, caso o saldo seja igual ou superior ao valor a ser retirado 

*/ 

bool validaSaque (float valor, float saldo) { 
  //Realizará o saque somente se o valor do saldo for maior que o valor a ser sacado.
  if (saldo>=valor)
    return true;

    else
    return false;}
  // efetue saque caso o saldo seja maior 

  // se o saldo estiver zerado não deve ser permitido um saque 

   int efetuaSaque (float valor, float &saldoFinal) {
     bool saqueAutorizado;
      cin >> valor;

     saldoFinal = saldoFinal-valor;
    return saldoFinal;}
   

 
 

int main() 

{ 

  int opcao, mostra; 

  bool saqueAutorizado; 

  float saldo, valor; 

  setlocale(LC_ALL, ""); 

 

  do { 

    opcao = mostraMenu (); 

    switch(opcao) { 

    case 1:  

      mostraSaldo (saldo); 
      cout << "seu saldo é de :"<<saldoFinal<<endl;
      break; 

    case 2:  

      deposite (valor, saldo); 

      //o progrma vai receber o valor do deposito e mostrar a mensagem de validação, assim como o saldo atual.
      if(valor>0){
        cout << "seu deposito de " "foi efetuado com sucesso" <<endl << "seu saldo atual é de:"<<saldoFinal<<endl;
      }else
        cout <<"depósito inválido, favor tentar novamente"<<endl;
      break; 

    case 3:  

      saqueAutorizado = validaSaque (valor, saldo);

      efetuaSaque(valor, saldo);

      cout << "saque autorizado"<<endl<<"seu saldo atual é de :"<<saldoFinal<<endl;
      break; 

    case 9:  

      cout << "\nTerminando o sistema…\nObrigado e volte sempre." << endl; 

      break; 

    default: 

      cout << "Opcao inválida!!" << endl; 

    } 

  } while (opcao != 9); 
 

  return 0; 

} 

 