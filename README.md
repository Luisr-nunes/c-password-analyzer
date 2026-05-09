<div align="center">

# 🔐 Analisador de Força de Senhas

### Verificador de segurança de senhas em C

<br>

![C](https://img.shields.io/badge/C-C11-A8B9CC?style=flat-square&logo=c&logoColor=white)

<br>

![Tipo](https://img.shields.io/badge/Tipo-Projeto_Prático-4A4A4A?style=flat-square)
![Instituição](https://img.shields.io/badge/Instituição-CESAR_School-6A0DAD?style=flat-square)
![Status](https://img.shields.io/badge/Status-Concluído-2E8B57?style=flat-square)

<br>

> *Programa em C que analisa a força de uma senha com base em critérios de segurança,*
> *atribui uma pontuação e fornece sugestões práticas de melhoria.*

</div>

---

## Sobre o Projeto

O **Analisador de Força de Senhas** é um programa de linha de comando escrito em C11 que avalia a segurança de uma senha em tempo real. A análise verifica comprimento, presença de letras maiúsculas e minúsculas, números e caracteres especiais — calculando uma pontuação de 0 a 7 e classificando a senha em quatro níveis: **Fraca**, **Média**, **Forte** ou **Muito Forte**.

Ao final, o programa exibe sugestões específicas para os critérios que ainda não foram atendidos.

---

## Funcionalidades

- **Leitura segura** — usa `fgets` com limite de buffer, sem risco de overflow
- **Análise de critérios** — verifica maiúsculas, minúsculas, números e especiais via `<ctype.h>`
- **Sistema de pontuação** — score de 0 a 7 com peso extra para caracteres especiais
- **Classificação em 4 níveis** — Fraca / Média / Forte / Muito Forte
- **Sugestões personalizadas** — indica exatamente o que está faltando na senha

---

## Como Funciona

```
1. LEITURA     → fgets captura a senha e remove o '\n' com strcspn
2. ANÁLISE     → loop percorre cada char com funções de <ctype.h>
3. PONTUAÇÃO   → score acumula pontos por comprimento e diversidade
4. RESULTADO   → classificação por intervalo de score (0–2 / 3–4 / 5–6 / 7)
5. SUGESTÕES   → critérios não atendidos geram dicas específicas
```

---

## Critérios de Pontuação

| Critério | Pontos |
|---|---|
| Comprimento ≥ 8 caracteres | +1 |
| Comprimento ≥ 12 caracteres | +1 |
| Comprimento ≥ 16 caracteres | +1 |
| Letra maiúscula (A–Z) | +1 |
| Letra minúscula (a–z) | +1 |
| Número (0–9) | +1 |
| Caractere especial (!@#$%…) | +2 |
| **Total máximo** | **7** |

---

## Estrutura

```
c-password-analyzer/
└── analisador.c      # Código-fonte principal
```

---

## Como Usar

### Pré-requisitos

- GCC ou qualquer compilador C11 compatível

### Compilar e executar

```bash
gcc -o analisador analisador.c
./analisador
```

### Exemplo de saída

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

---

## Autor

<div align="center">

**Luis Felipe Farias Nunes**
Estudante de ADS — CESAR School

[![GitHub](https://img.shields.io/badge/GitHub-Luisr--nunes-181717?style=flat-square&logo=github)](https://github.com/Luisr-nunes)

</div>

---

<div align="center">

*🔒 Segurança começa com uma boa senha — e uma boa senha começa aqui.*

</div>
