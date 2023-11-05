#include <stdio.h>

int main() 
{
    char operacao;
    double n1, n2, resultado;
    
    //Operação
    printf("Bem vindo(a) a calculadora\n");
    printf("Digite a operação que deseja fazer (+, -, *, /): \n");
    
    //Escolher a operação
    scanf("%c", &operacao);
    
    //Número 1
    printf("Digite o primeiro número:");
    scanf("%lf", &n1);
    
    //Número2
    printf("Digite o primeiro número:");
    scanf("%lf", &n2);
    
    switch(operacao){
        
        case '+':
            resultado = n1 + n2;
            break;
            
        case '-':
            resultado = n1 - n2;
            break;
            
        case '*':
            resultado = n1 * n2;
            break;
            
        case '/':
            if(n2 == 0){
                printf("Divisão por 0 não é permitida");
                return 1;
            }
            else{
                resultado = n1 / n2;
                break;   
            }
            default:
                printf("ERROR: Escolha uma das opções");
                return 1;
    }
    
    printf("O resultado da operação: %.2lf %c %.2lf = %.2lf", n1, operacao, n2, resultado);
    
    return 0;
}
