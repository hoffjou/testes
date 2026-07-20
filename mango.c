#include <stdio.h>
#include <string.h>

typedef struct pessoa{
    char nome[50];
    float altura;
    int idade;

} pessoa;

int main(){
    int n;
    
    scanf("%d", &n);
    fflush(stdin);

    pessoa lista[n];
    for(int i = 0; i < n; i++){
        printf("digite:");
        fgets(lista[i].nome, 50, stdin);
        fflush(stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';

        printf("informe");
        scanf(" %f", &lista[i].altura);
        fflush(stdin);
        printf("informe");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

       
    }

    for(int i = 0; i < n; i++){
        printf("usuario %d\n", i + 1);
        puts(lista[i].nome);
        printf("%.2f\n",lista[i].altura);
        printf("%d\n", lista[i].idade);
    }


    return 0;
}