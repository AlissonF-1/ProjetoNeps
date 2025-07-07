#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int menu(){
	char op;
	
	printf("\nSelecione uma operacao:\n 1. Adicao\n 2. Subtracao\n 3. Multiplicacao\n 4. Divisao\n 5. Sair\nOpcao: ");
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
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	printf("Resultado: %.2f + %.2f = %.2f\n",n1,n2,n1+n2);
}

void subtracao(){
	float n1,n2;
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	printf("Resultado: %.2f - %.2f = %.2f\n",n1,n2,n1-n2);
}

void multiplicacao(){
	float n1,n2;
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	printf("Resultado: %.2f x %.2f = %.2f\n",n1,n2,n1*n2);
}

void divisao(){
	float n1,n2;
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	if(n2==0){
		printf("Erro: Divisao por zero nao e permitida.\n");
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
			printf("ERRO! Insira uma opcao valida.\n");
            char buffer;
            while ((buffer = getchar()) != '\n' && buffer != EOF);
			continue;
		}
		
		char c = 0;
		while(c!='n' && c!='N' && c!='s' && c!='S' ){
			printf("\nDeseja realizar outra operacao? (s/n): ");
			scanf(" %c",&c);
			if(c=='n' || c=='N'){
				break;
			}else if(c=='s' || c=='S'){
				system("cls || clear");
				break;
			}
			printf("Resposta invalida. Por favor, digite 's' para sim ou 'n' para nao.\n");
		}
		if(c=='n' || c=='N'){
			break;
		}
		
	}
	printf("\nObrigado por usar a calculadora! Ate a proxima.\n");
	return 0;
}
