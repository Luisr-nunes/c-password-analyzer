# Analisador de Força de Senhas

[Read in English](README.en.md)

Programa de linha de comando em C que avalia a força de uma senha, atribui uma pontuação e sugere o que melhorar.

## Sobre

O programa lê uma senha, verifica comprimento e diversidade de caracteres, soma pontos por critério atendido, classifica a senha em quatro níveis e lista sugestões para os critérios que faltaram.

## Funcionalidades

- Leitura com `fgets` e limite de buffer, removendo a quebra de linha com `strcspn`.
- Detecção de maiúsculas, minúsculas, números e caracteres especiais com `<ctype.h>`.
- Pontuação por comprimento e diversidade, com peso dobrado para caracteres especiais.
- Classificação em Fraca, Média, Forte ou Muito Forte.
- Sugestões específicas para cada critério não atendido.

## Critérios de pontuação

| Critério | Pontos |
| --- | --- |
| Comprimento ≥ 8 | +1 |
| Comprimento ≥ 12 | +1 |
| Comprimento ≥ 16 | +1 |
| Letra maiúscula | +1 |
| Letra minúscula | +1 |
| Número | +1 |
| Caractere especial | +2 |

| Pontuação | Classificação |
| --- | --- |
| 0 a 2 | Fraca |
| 3 a 4 | Média |
| 5 a 6 | Forte |
| 7 ou mais | Muito Forte |

A soma máxima dos critérios é 9, embora a saída do programa exiba a pontuação sobre 7 (por exemplo, `8 / 7`). A classificação não é afetada.

## Como executar

Pré-requisito: GCC ou outro compilador C11.

```bash
git clone https://github.com/Luisr-nunes/c-password-analyzer.git
cd c-password-analyzer
gcc -Wall -o analisador analisador.c
./analisador
```

Exemplo de saída:

```
Digite uma senha: Senha@2024!

--- Análise da senha ---
Comprimento: 11 caracteres
Tem maiúsculas : Sim
Tem minúsculas : Sim
Tem números    : Sim
Tem especiais  : Sim
Pontuação total: 6 / 7

Força: * FORTE *

--- Sugestões ---
- Aumente para pelo menos 12 caracteres.
```

## Estrutura

```
c-password-analyzer/
├── analisador.c     # código-fonte
└── analisador.exe   # binário compilado para Windows
```

## Autor

Luís Nunes — [GitHub](https://github.com/Luisr-nunes) · [LinkedIn](https://www.linkedin.com/in/luis-nunes-dev/)
