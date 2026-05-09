#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAX 100

int main() {
    char senha [TAMANHO_MAX];

    printf("Digite a senha: ");
    fgets(senha, TAMANHO_MAX, stdin);

    senha[strcspn(senha, "\n")] = '\0';

    printf("Senha Recebida: %s\n", senha);

    return 0;

}