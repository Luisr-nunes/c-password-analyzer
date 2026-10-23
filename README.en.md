# Password Strength Analyzer

[Ler em Português](README.md)

A C command-line program that rates the strength of a password, assigns a score and suggests improvements.

## About

The program reads a password, checks its length and character variety, adds points for each criterion met, classifies the password into four levels and lists suggestions for the criteria it missed.

## Features

- Input read with `fgets` and a bounded buffer, stripping the newline with `strcspn`.
- Detection of uppercase, lowercase, digits and special characters with `<ctype.h>`.
- Scoring by length and variety, with double weight for special characters.
- Classification as Weak, Medium, Strong or Very Strong.
- Specific suggestions for each unmet criterion.

## Scoring criteria

| Criterion | Points |
| --- | --- |
| Length ≥ 8 | +1 |
| Length ≥ 12 | +1 |
| Length ≥ 16 | +1 |
| Uppercase letter | +1 |
| Lowercase letter | +1 |
| Digit | +1 |
| Special character | +2 |

| Score | Rating |
| --- | --- |
| 0 to 2 | Weak |
| 3 to 4 | Medium |
| 5 to 6 | Strong |
| 7 or more | Very Strong |

The criteria add up to a maximum of 9, although the program prints the score out of 7 (for example, `8 / 7`). The rating is not affected.

## Running

Requirement: GCC or another C11 compiler.

```bash
git clone https://github.com/Luisr-nunes/c-password-analyzer.git
cd c-password-analyzer
gcc -Wall -o analisador analisador.c
./analisador
```

Sample output (the program prints in Portuguese):

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

## Structure

```
c-password-analyzer/
├── analisador.c     # source code
└── analisador.exe   # Windows binary
```

## Author

Luís Nunes — [GitHub](https://github.com/Luisr-nunes) · [LinkedIn](https://www.linkedin.com/in/luis-nunes-dev/)
