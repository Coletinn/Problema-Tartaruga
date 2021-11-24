# Problema Tartaruga
Esse é o projeto final da disciplina de Computação Paralela que consiste em construir um programa em paralelo para encontrar o maior valor para a série ln(t).

Mais detalhes nesse [link](https://pt.wikipedia.org/wiki/S%C3%A9rie_harm%C3%B3nica_(matem%C3%A1tica)).

## Participantes do grupo

- Lucas Guerrero Morlino

- Murilo Magalhaes

## Ambiente de Execução
- Ubuntu 20.04 LTS

## Compilação e Execução

<ol>
  
### - Compilação
> gcc -g -Wall -fopenmp-o  {NomeDoArquivo} {NomeDoExecutavel}

```
gcc -g -Wall -fopenmp-o  tartaruga.c tartaruga
```

### - Execução
> ./{NomeDoArquivo} {QuantidadeDeThreads}

```
./tartaruga 30000
```
</ol>

## Valores alcançados

O valor **S** final calculado e o tempo **T** que conseguimos atingir.

![Turtle Result](https://imgur.com/NasHW3X.jpg)
