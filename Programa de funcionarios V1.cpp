// Esse programa foi feito para registra quantos funcionarios tem em cada setor de trabalho é calculcar o pagamneto de cada um deles.

#include<stdio.h>  // Biblioteca - entrada e saída de dados.
#include<string.h> // Biblioteca de caracteres.
#include<locale.h> // locale para acresentar acento nos textos.

struct lista //lista de dados 
{
	int OperadoCaixa;      
	int balconista;
	int vendedor;
	int encarregador_estoque;
	int empacotador;
	int auxiliar_limpeza;
	int ajudar_geral;
	
}lista;

int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	struct lista setor;
	
	setor.OperadoCaixa; //variaveis contador
	setor.balconista;
	setor.vendedor;
	setor.encarregador_estoque;
	setor.empacotador;
	setor.auxiliar_limpeza;
	setor.ajudar_geral;
	
	
	printf("\nQUANTOS FUNCIONARIOS TEM NA ARÉA DE OPERADOR DE CAIXA :");
	scanf("%i",&setor.OperadoCaixa);
	
	printf("\nQUANTOS FUNCIONARIOS TEM NA ARÉA DE BALCONISTA :");
	scanf("%i",&setor.balconista);
	
	printf("\nQUANTOS FUNCIONARIOS TEM NA ARÉA DE VENDEDOR :");
	scanf("%i",&setor.vendedor);
	
	printf("\nQUANTOS FUNCIONARIOS TEM NA ARÉA DE ENCARREGADOR DE ESTOQUE :");
	scanf("%i",&setor.encarregador_estoque);
	
	printf("\nQUANTOS FUNCIONARIOS TEM NA ARÉA DE EMPACOTADOR :");
	scanf("%i",&setor.empacotador);
	
	printf("\nQUANTOS FUNCIONARIOS TEM NA ARÉA DE AUXILIAR DE LIMPEZA :");
	scanf("%i",&setor.auxiliar_limpeza);
	
	printf("\nQUANTOS FUNCIONARIOS TEM NA ARÉA DE AJUDANTE GERAL :");
	scanf("%i",&setor.ajudar_geral);
	
	

}
