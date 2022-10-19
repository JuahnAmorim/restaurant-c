#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int op, existe;

void menuPrincipal();

int main(){
	
	menuPrincipal();
}

void menuPrincipal(){
	
	printf(" ===============================================\n");
	printf("|           ESCOLHA A OPCAO DESEJADA           |\n");
	printf("|----------------------------------------------|\n");
	printf("|  1- Realizar pedido   |  2- Alterar pedido   |\n");
	printf("|----------------------------------------------|\n");
	printf("|  3- Consultar pedido  |  4- Imprimir pedido  |\n");
	printf("|----------------------------------------------|\n");
	printf("|  5- Sair              |                      |\n");
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
}