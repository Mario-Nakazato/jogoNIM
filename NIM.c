#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* if(n == 0){
	x = 1;
	}else{
		x = 11 -x;
	}
	printf("%d", x);
	Sleep(1000); */

int main(int argc, char *argv[]) {
	system("color 1e");
	
	int i, n, j, x, max, op;
	char jogador[32];
	
	do{
		n = 0;
		j = 1;
		x = 0;
		max = 10;
		system("cls");
		printf("\n\n\t$ NIM $ Versao - 1.23 -");
		printf("\n\n\tGanha o jogador que chegar ao numero 100.");
		printf("\n\tDigitar um valor entre 1 e 10 e garantir no final obter o 100.");
		printf("\n\n\t[1]Jogador X Jogador");
		printf("\n\t[2]Computador X Jogador");
		printf("\n\t[3]Jogador X Computador");
		printf("\n\t[4]Computador X Computador");
		printf("\n\t[0]Sair");
		printf("\n\n\t# ");
		scanf("%d", &op);
		if(op < 0 || op > 4){
			printf("\n\tOpcao invalida");
			getch();
		}else if(op == 0){
			printf("\n\tSaindo...");
		}else{
			while(n != 100){
				do{
					if((op == 2 && j == 1) || (op == 3 && j == 2) || (op == 4)){
						strcpy(jogador, "Computador");
					}else{
						strcpy(jogador, "Jogador");
					}
					system("cls");
					printf("\n\n\t$ %d $", n);
					printf("\n\n\tDigite um numero entre 1 a %d", max);
					printf("\n\n\t%s %d # ", jogador, j);
					if(op == 1 || (op == 2 && j == 2) || (op == 3 && j == 1)){
						scanf("%d", &x);
					}else{
						if(n == 0 || n == 1 || n == 12 || n == 23 || n == 34 || n == 45 || n == 56 || n == 67 || n == 78 || n == 89){
							x = (rand() % max) +1;
						}else if(n < 12){
							x = 12 -n;
						}else if(n < 23){
							x = 23 -n;
						}else if(n < 34){
							x = 34 -n;
						}else if(n < 45){
							x = 45 -n;
						}else if(n < 56){
							x = 56 -n;
						}else if(n < 67){
							x = 67 -n;
						}else if(n < 78){
							x = 78 -n;
						}else if(n < 89){
							x = 89 -n;
						}else{
							x = 11 -x;
						}
						printf("%d", x);
						Sleep(1600);
					}
					if(x < 1 || x > max){
						printf("\n\tInvalido, intervalo de 1 a %d", max);
						getch();
					}
				}while(x < 1 || x > max);
				n += x;
				if(max > 100 -n){
					max = 100 -n;
				}
				if(n == 100){
					system("cls");
					printf("\n\n\t$ %d $", n);
					printf("\n\n\t%s %d ganhou!\n", jogador, j);
					getch();
				}
				if(j == 1){
					j = 2;
				}else{
					j = 1;
				}
			}
		}
	}while(op != 0);
	return 0;
}
