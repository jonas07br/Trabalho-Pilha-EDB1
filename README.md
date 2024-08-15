# Verificação de Parênteses Balanceados

## Descrição do Problema

Este projeto tem como objetivo desenvolver um programa em C++ que verifica se uma expressão contém parênteses, colchetes e chaves balanceados. Parênteses balanceados significam que cada parêntese de abertura tem um correspondente parêntese de fechamento, e que os pares de delimitadores estão corretamente aninhados.

### Exemplos de Expressões:

- **Balanceada:** `(a+b)`
- **Não Balanceada:** `((a+b)` (parêntese de abertura extra)
- **Balanceada:** `(a+b)*(c-d)`
- **Não Balanceada:** `(a+b)*(c-d))` (parêntese de fechamento extra)

Além dos parênteses `()`, o programa também verifica colchetes `[]` e chaves `{}`. A verificação deve garantir que todos os delimitadores estejam balanceados e corretamente aninhados.

## Especificação

O programa deve:

1. **Entrada:** Receber uma expressão que pode conter qualquer combinação de parênteses, colchetes e chaves, além de outros caracteres como letras, números e operadores.
2. **Verificação:** Utilizar uma estrutura de dados **Pilha** para realizar a verificação do balanceamento dos delimitadores.
3. **Saída:** Retornar uma mensagem indicando se a expressão está balanceada ou não balanceada.

## Como Executar

1. Compile o programa utilizando um compilador C++.
2. Execute o programa e insira a expressão desejada para verificação.
3. O programa irá retornar se a expressão está balanceada ou não.

## Exemplo de Uso

```bash
$ ./verificador
Digite a expressão: (a+b)*(c-d)
Resultado: Expressão balanceada

$ ./verificador
Digite a expressão: (a+b)*(c-d))
Resultado: Expressão não balanceada
