/*Este programa imprime un árbol de navidad*/

#include <stdio.h>

int main() {
    int altura, espacios, asteriscos;
    
    printf("Introduce la altura del árbol: ");
    scanf("%d", &altura);
    
    espacios = altura - 1;
    asteriscos = 1;
    
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < espacios; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < asteriscos; j++) {
            printf("*");
        }
        
        printf("\n");
        
        espacios--;
        asteriscos += 2;
    }
    
    // Tronco del árbol
    for (int i = 0; i < altura - 1; i++) {
        printf(" ");
    }
    printf("|\n");
    for (int i = 0; i < altura - 2; i++) {
        printf(" ");
    }
    printf("|||\n");
    
    return 0;
}
