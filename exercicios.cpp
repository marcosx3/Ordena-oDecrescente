#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<locale.h>
const int TAM = 3;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	//struct para criacao dos funcionarios
	struct funcionarios
	{
		char nome[30];
		float salario;
	};
struct funcionarios func[TAM];
// onde deve ser feito o cadastro dos funcionarios
for(int i=0;i<TAM;i++){
	printf("Digite o %d funcionario: ",i+1);
	fgets(func[i].nome,30,stdin);
	printf("Informe o salario desse funcionario: ");
	scanf("%f%*c", &func[i].salario);
	
}
// imprimindo os funcionarios cadastrados
for(int j=0;j<TAM;j++){
	printf("The name is: %s ",func[j].nome);
	printf("The salary is: %.2f \n", func[j].salario);
}
// organizando  de forma decrescente 
int troca[TAM];
for (int i = 0; i <= TAM; i++)
 {
 	for(int j=0;j <= TAM ;j++){

 		if(func[j].salario < func[j + 1].salario){
 			troca[j] = func[j].salario;						
 			func[j].salario = func[j+1].salario;
 			func[j + 1].salario = troca[j];
 		}
 	}
 } 
 printf("\n ==================DECREASING ================================\n");
 //imprimindo  com base no valor do salario
 for(int k=0;k<TAM;k++){
 	printf("%s", func[k].nome);
 	printf("The New Order is: %.2f \n",func[k].salario);
 }
	return 0;
}