#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Declaração das variáveis globais
int op, op2, op3, existe;

//Declaração das funções
void menuPrincipal();


int main(){
	
	menuPrincipal();
}

void menuPrincipal(){
	
	do{

	printf(" ===============================================\n");
	printf("|           ESCOLHA A OPCAO DESEJADA           |\n");
	printf("|----------------------------------------------|\n");
	printf("|  1- Realizar pedido   |  2- Alterar pedido   |\n");
	printf("|----------------------------------------------|\n");
	printf("|  3- Consultar pedido  |  4- Imprimir pedido  |\n");
	printf("|----------------------------------------------|\n");
	printf("|  5- Ver cardapio      |  6- Sair             |\n");
	printf("|==============================================|\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:{
			if(existe!=1)
			//cardapio();
			existe = 1;
			
			else
			printf("Pedido ja iniciado!");
			break;
		}
		case 2:{
			if(existe==1)
			printf("");//edita pedido;
			
			else
			printf("Pedido ainda nao realizado!");
			break;
		}
		case 3:{
			if(existe==1)
			printf("");//consulta pedido;
			
			else
			printf("Pedido ainda nao realizado!");
			break;
		}
		case 4:{
			if(existe==1)
			printf("");//imprime pedido;
			
			else
			printf("Pedido ainda nao realizado!");
			break;
		}
		case 5:{
			printf("Saindo");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			break;
		}
		default:{
			printf("Opcao invalida!");
		}
	
	}
	printf("\nDeseja fazer outra operacao?\nDigite 1- SIM ou 2- NAO.\n");
	scanf("%d", &op2);

	}while(op2==1);
	printf("\nFinalizando servico");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
}

void cardapio(){
	
	printf(" ==================================\n");
	printf("|  ESCOLHA O LANCHE DESEJADO       |\n");
	printf("|----------------------------------|\n");
	printf("|  Codigo   | Descricao   | Valor  |\n");
	printf("|----------------------------------|\n");
	printf("|    1      | Hamburguer  |  5.50  |\n");
	printf("|----------------------------------|\n");
	printf("|    2      | Mini-pizza  |  4.50  |\n");
	printf("|----------------------------------|\n");
	printf("|    3      | Hot-dog     |  6.50  |\n");
	printf("|----------------------------------|\n");
	printf("|    4      | Coca lata   |  5.00  |\n");
	printf("|----------------------------------|\n");
	printf("|    5      | Fanta lata  |  5.00  |\n");
	printf("|==================================|\n");
	
	printf("\nInforme o codigo do produto: \n");
	scanf("%d", op3);

}