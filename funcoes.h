# ifndef _funcoes

# define _funcoes

# define true 1
# define false 0

# define TAM_MAX 100
# define TAM_MIN 1


void imprimePolinomio(int polinomio[], int tam);

void lePolinomio(int valores[], int tam);

int calculaPolinomio(int polinomio[], int tam, int x);

void somaPolinomios(int polMaior[], int tamMaior, int polmenor[], int tammenor, int res[]);

void multiplicaPolinomios(int p1[], int tam1, int p2[],int tam2, int res[], int tamR);

# endif
