# include <stdio.h>
# include <math.h>
# include <locale.h>

# include "funcoes.h"


int main() {
	setlocale(LC_ALL, "Portuguese");
	int seguir = true;
	do {
		printf("\nCALCULADORA DE POLIN�MIOS\n\n");
		printf("=-=-=-=-=-=-=-=-= MENU =-=-=-=-=-=-=-=-=\n");
		printf("\n[1] Valor de um  Polin�mio\n");
		printf("[2] Soma de dois Polin�mios\n");
		printf("[3] Multiplica��o de Polin�mios\n");
		printf("[4] Encerrar programa\n");
		
	
		int opc;
    
	  	printf("\nSelecione uma op��o: ");
		scanf("%d", &opc);

    	// Cria dois polin�mios, que ser�o utilizados em todos os casos
    
    	int tam1, tam2; 
    	int polinomio1[TAM_MAX], polinomio2[TAM_MAX];
    	
    	printf("Digite o n�mero de coeficientes do polin�mio 1: "); // L� o polin�mio 1, que em qualquer caso ser� utilizado.
      	scanf("%d", &tam1);
      	
      	while(tam1 < TAM_MIN) {
      		
      	 printf("ERRO. Digite o n�mero de coeficientes do polin�mio 1: "); 
      	 scanf("%d", &tam1);
      	 
		  }
      	
    	lePolinomio(polinomio1, tam1);
    	printf("\n");
		imprimePolinomio(polinomio1, tam1);
		printf("\n\n");
		
	    int x, resultadoSoma[TAM_MAX], resultadoMult[TAM_MAX];

	    switch(opc)
	      
	    {
	      
	      case 1:
			{
			
          
	        printf("\nQual o valor de x?: ");
	        scanf("%d", &x);
	
	        int resultado; 
	        
	        resultado = calculaPolinomio(polinomio1, tam1, x);
	
	        printf("O valor do polin�mio com x = %d � %d\n", x, resultado);
	        break;
	        
			}
	      case 2: 
	        {
	        
	          printf("Digite o n�mero de coeficientes do polin�mio 2: ");
	          scanf("%d", &tam2);
	          while(tam2 < TAM_MIN) {
	      	  printf("ERRO. Digite o n�mero de coeficientes do polin�mio 2: "); 
	      	  scanf("%d", &tam2);
			  }
              printf("\n");
              
              lePolinomio(polinomio2, tam2);
              
			  imprimePolinomio(polinomio2, tam2);
			  printf("\n\n");
	      
	          if (tam1 > tam2) {
	            
	            somaPolinomios(polinomio1, tam1, polinomio2, tam2, resultadoSoma);
	            printf("\nResultado: \n");
	            imprimePolinomio(resultadoSoma, tam1);
	            printf("\n");
	            
	          } else {
	            
	            somaPolinomios(polinomio2, tam2, polinomio1, tam1, resultadoSoma);
	            printf("\nResultado: \n");
	            imprimePolinomio(resultadoSoma, tam2);
	          }
	          break;
	        }
	      case 3:
	        {
	          printf("Digite o n�mero de coeficientes do polin�mio 2: ");
	          scanf("%d", &tam2);
	          while(tam2 < TAM_MIN) {
	      	  printf("ERRO. Digite o n�mero de coeficientes do polin�mio 2: "); // L� o polin�mio 2, que em qualquer caso ser� utilizado.
	      	  scanf("%d", &tam2);
			  }
              
			  printf("\n");
              
              lePolinomio(polinomio2, tam2);
              
			  imprimePolinomio(polinomio2, tam2);
			  
			  printf("\n\n");
	        
	          int tamResultado;
	        
	          tamResultado = (tam1 + tam2) - 1;
	
	          multiplicaPolinomios(polinomio1, tam1, polinomio2, tam2, resultadoMult, tamResultado);
	          printf("\nResultado: ");
	          imprimePolinomio(resultadoMult, tamResultado);
	          printf("\n");
	          break;

	        }
	  
	      case 4:
	        {
	        seguir = false;
	        break;
	        }
	      
	      default:
	        {
			break;
			}
	    }	
	    
		} while (seguir == true);
	
	return 0;
}
