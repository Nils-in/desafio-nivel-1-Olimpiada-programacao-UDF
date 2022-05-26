#include <stdio.h>   //importando bibliotecas para entrada e saída de dados
#include <conio.h>   
// queria que tivesse como fazer o desafio em python.
// :)
// Gabriel Procópio de Souza Justino e Nilson Antônio de Souza Neto



int main() {                 // declarando a função principal
	float deposito, saque;  // declarando as variáveis que recebem números inteiros como valores (depósito e saque)
	float saldo = 87213.39;  // saldo fictício, pois o exercício não especifica um valor ou forma de receber um valor
	int operacao;            // variável para saber qual será a operação a ser realizada pelo switch case
	char conta[20];          /* apenas uma variavel para guardar a conta, com toda a certeza não é a melhor maneira de fazer isso, até porque não
	                           possui uso algum no código alem de "deixar o usuário digitar"
							*/
		printf("Qual operacao voce deseja realizar?\n[1]Visualizar o saldo\n[2]Realizar um deposito\n[3]Realizar um saque\n"); // imprime na tela e pede o comando
		scanf("%i", &operacao);  // recebe o comando do usuário
		switch (operacao){   // switch usando o numero inserido anteriormente para determinar o que vai imprimir
			case 1:;  // caso o input tenha sido 1, ou seja "visualizar o saldo"
				printf("Informe o numero da conta (sem o digito): ");  // pede o número da conta (sem o digito)
				scanf("%f", &conta);                                     // recebe o número da conta (sem o digito)
				printf("Informe o digito da conta: ");                 // pede o dígito da conta
				scanf("%f", &conta);                                  // recebe o dígito da conta, mas armazena no lugar da conta original. Como citado anteriormente, essa conta não é usada para nada no código
				printf("O saldo da conta no momento: R$ 87213,39"); // imprime o saldo fictício da conta
				break; // fecha o switch.
			case 2:;
				printf("Informe o numero da conta (sem o digito): "); // novamente pede o número da conta
				scanf("%f", &conta);                                 // armazena
				printf("Informe o digito da conta: ");               // novamente pede o dígito da conta
				scanf("%f", &conta);                                 // armazena no lugar do número....
				printf("Informe o valor que deseja depositar na conta (em R$): ");  // Pede a entrada do valor que será depositado pelo usuário
				scanf("%f", &deposito);                                              // armazena o valor digitado
				printf("Foram depositados: R$%0.2f na conta.", deposito);           // imprime a confirmação de que o valor foi depositado
				break; // fecha o switch.
			case 3:;
				printf("Informe o numero da conta (sem o digito): "); // Pede o número da conta.
				scanf("%f", &conta); // armazena
				printf("Informe o digito da conta: "); // Pede o dígito da conta.
				scanf("%f", &conta); // armazena no lugar do número...
				printf("Informe o valor que deseja sacar da conta: "); // Pede a entrada do valor que será sacado da conta
				scanf("%f", &saque);                                  // armazena 
				if (saque <= saldo) {  // Aqui, há uma verificação para saber se a conta realmente possui o saldo para realizar o saque
					printf("Foram sacados: R$%0.2f da conta.", saque); // caso possua, ele confirma o saque
					break; // fecha o switch.
				}
				else { // caso não possua, uma mensagem dizendo que não há saldo suficiente é imprimida
					printf("Voce nao possui saldo suficiente para realizar este saque"); // mensagem de ausência de saldo.
					break; // fecha o switch.
		}	
	}
}
