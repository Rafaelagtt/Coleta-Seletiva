# Coleta-Seletiva

## Descrição

Este projeto foi desenvolvido em linguagem C com o objetivo de auxiliar na separação correta de resíduos recicláveis.

O programa recebe o nome de um produto digitado pelo usuário e informa em qual lixeira ele deve ser descartado, seguindo as cores padrão da coleta seletiva.

Além disso, o sistema também identifica materiais não recicláveis, resíduos eletrônicos, hospitalares e químicos, indicando a forma correta de descarte.

---

## Funcionalidades

- Identificação de materiais recicláveis
- Separação por categoria:
  - Plástico
  - Papel
  - Vidro
  - Metal
- Identificação de resíduos:
  - Orgânicos
  - Eletrônicos
  - Hospitalares
  - Químicos
  - Não recicláveis
- Exibição da cor correta da lixeira
- Orientação para descarte especial

---

## Tecnologias utilizadas

- Linguagem C
- Biblioteca `stdio.h`
- Biblioteca `string.h`

---

## Como executar

### Compilar o programa

```bash
gcc main.c -o reciclavel
```

### Executar

```bash
./reciclavel
```

No Windows:

```bash
reciclavel.exe
```

---

## Exemplo de uso

```txt
Digite o produto: garrafa

Jogue na lixeira VERMELHA
```

Outro exemplo:

```txt
Digite o produto: pilhas

Material NAO RECICLAVEL
Descarte em um ponto de coleta especifico da sua cidade, como ecopontos ou farmacias
```

---

## Estrutura do projeto

```txt
reciclavel/
│
├── main.c
└── README.md
```

---

## Objetivo do projeto

O projeto foi criado com finalidade educacional, visando incentivar a conscientização ambiental e facilitar o descarte correto de resíduos.
