#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int menu(){
	char op;
	
	printf("Selecione uma operação:\n 1. Adição\n 2. Subtração\n 3. Multiplicação\n 4. Divisão\n 5. Sair\n Opção:\n");
	scanf(" %c",&op);
	
	switch (op) {
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        default: 
            return -1;
	}
}

void soma(){
	float n1,n2;
	printf("Digite o primeiro número: \n");
	scanf("%f",&n1);
	printf("Digite o segundo número: \n");
	scanf("%f",&n2);
	printf("Resultado: %.2f + %.2f = %.2f\n",n1,n2,n1+n2);
}

void subtracao(){
	float n1,n2;
	printf("Digite o primeiro número: \n");
	scanf("%f",&n1);
	printf("Digite o segundo número: \n");
	scanf("%f",&n2);
	printf("Resultado: %.2f - %.2f = %.2f\n",n1,n2,n2-n1);
}

void multiplicacao(){
	float n1,n2;
	printf("Digite o primeiro número: \n");
	scanf("%f",&n1);
	printf("Digite o segundo número: \n");
	scanf("%f",&n2);
	printf("Resultado: %.2f x %.2f = %.2f\n",n1,n2,n1*n2);
}

void divisao(){
	float n1,n2;
	printf("Digite o primeiro número: \n");
	scanf("%f",&n1);
	printf("Digite o segundo número: \n");
	scanf("%f",&n2);
	if(n2==0){
		printf("Erro: Divisão por zero não é permitida.\n");
	}else{
		printf("Resultado: %.2f / %.2f = %.2f\n",n1,n2,n1/n2);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	printf("-------------------------\n  Calculadora simples  \n-------------------------\n");
	

	
	while(1){
		int resul=menu();
		if(resul==1){
			soma();
		}else if(resul==2){
			subtracao();
		}else if(resul==3){
			multiplicacao();
		}else if(resul==4){
			divisao();
		}else if(resul==5){
			break;
		}else if(resul==-1){
			printf("ERRO!Insira uma opção válida.\n");
		}
		char c;
		while(c!='n' && c!='N' && c!='s' && c!='S' ){
			printf("Deseja realizar outra operação? (s/n): \n");
			scanf(" %c",&c);
			if(c=='n' || c=='N'){
				break;
			}else if(c=='s' || c=='S'){
				system("cls");
				break;
			}
			printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
		}
		if(c=='n' || c=='N'){
			break;
		}
		
	}
	printf("Obrigado por usar a calculadora! Até a próxima.\n");
	return 0;
}
