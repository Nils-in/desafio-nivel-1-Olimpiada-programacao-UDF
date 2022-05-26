#include <stdio.h>   //importando bibliotecas para entrada e sa�da de dados
#include <conio.h>   
// queria que tivesse como fazer o desafio em python.
// :)
// Gabriel Proc�pio de Souza Justino e Nilson Ant�nio de Souza Neto



int main() {                 // declarando a fun��o principal
	float deposito, saque;  // declarando as vari�veis que recebem n�meros inteiros como valores (dep�sito e saque)
	float saldo = 87213.39;  // saldo fict�cio, pois o exerc�cio n�o especifica um valor ou forma de receber um valor
	int operacao;            // vari�vel para saber qual ser� a opera��o a ser realizada pelo switch case
	char conta[20];          /* apenas uma variavel para guardar a conta, com toda a certeza n�o � a melhor maneira de fazer isso, at� porque n�o
	                           possui uso algum no c�digo alem de "deixar o usu�rio digitar"
							*/
		printf("Qual operacao voce deseja realizar?\n[1]Visualizar o saldo\n[2]Realizar um deposito\n[3]Realizar um saque\n"); // imprime na tela e pede o comando
		scanf("%i", &operacao);  // recebe o comando do usu�rio
		switch (operacao){   // switch usando o numero inserido anteriormente para determinar o que vai imprimir
			case 1:;  // caso o input tenha sido 1, ou seja "visualizar o saldo"
				printf("Informe o numero da conta (sem o digito): ");  // pede o n�mero da conta (sem o digito)
				scanf("%f", &conta);                                     // recebe o n�mero da conta (sem o digito)
				printf("Informe o digito da conta: ");                 // pede o d�gito da conta
				scanf("%f", &conta);                                  // recebe o d�gito da conta, mas armazena no lugar da conta original. Como citado anteriormente, essa conta n�o � usada para nada no c�digo
				printf("O saldo da conta no momento: R$ 87213,39"); // imprime o saldo fict�cio da conta
				break; // fecha o switch.
			case 2:;
				printf("Informe o numero da conta (sem o digito): "); // novamente pede o n�mero da conta
				scanf("%f", &conta);                                 // armazena
				printf("Informe o digito da conta: ");               // novamente pede o d�gito da conta
				scanf("%f", &conta);                                 // armazena no lugar do n�mero....
				printf("Informe o valor que deseja depositar na conta (em R$): ");  // Pede a entrada do valor que ser� depositado pelo usu�rio
				scanf("%f", &deposito);                                              // armazena o valor digitado
				printf("Foram depositados: R$%0.2f na conta.", deposito);           // imprime a confirma��o de que o valor foi depositado
				break; // fecha o switch.
			case 3:;
				printf("Informe o numero da conta (sem o digito): "); // Pede o n�mero da conta.
				scanf("%f", &conta); // armazena
				printf("Informe o digito da conta: "); // Pede o d�gito da conta.
				scanf("%f", &conta); // armazena no lugar do n�mero...
				printf("Informe o valor que deseja sacar da conta: "); // Pede a entrada do valor que ser� sacado da conta
				scanf("%f", &saque);                                  // armazena 
				if (saque <= saldo) {  // Aqui, h� uma verifica��o para saber se a conta realmente possui o saldo para realizar o saque
					printf("Foram sacados: R$%0.2f da conta.", saque); // caso possua, ele confirma o saque
					break; // fecha o switch.
				}
				else { // caso n�o possua, uma mensagem dizendo que n�o h� saldo suficiente � imprimida
					printf("Voce nao possui saldo suficiente para realizar este saque"); // mensagem de aus�ncia de saldo.
					break; // fecha o switch.
		}	
	}
}
