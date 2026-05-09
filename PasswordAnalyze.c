#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO_MAX 100

int main() {
    char senha [TAMANHO_MAX];

    printf("Digite a senha: ");
    fgets(senha, TAMANHO_MAX, stdin);
    senha[strcspn(senha, "\n")] = '\0';

    int tem_maiuscula = 0;
    int tem_minuscula = 0;
    int tem_numero = 0;
    int tem_especial = 0;
    int comprimento = strlen(senha);

    for (int i = 0; i < comprimento; i++) {
        if (isupper(senha[i])) tem_maiuscula = 1;
        if (islower(senha[i])) tem_minuscula = 1;
        if (isdigit(senha[i])) tem_numero = 1;
        if (ispunct(senha[i])) tem_especial = 1;
    }

    printf("Senha Recebida: %s\n", senha);

    return 0;

}