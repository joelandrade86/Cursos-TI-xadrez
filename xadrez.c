#include <stdio.h>

int main(){

        int i = 0;


    // Função para simular o movimento da Torre

    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita -->\n");
    }

        // Função para simular o movimento do Bispo

        printf("\nMovimento do Bispo:\n");
    
    while (i < 2) {
       printf("Cima ^ , Direita -->\n");
        i++;
    }


        // Função para simular o movimento da Rainha

     printf("\nMovimento da Rainha:\n");
      do {
       
        printf("<-- esquerda\n");
        i++;
    } while (i < 8);


    return 0;
}