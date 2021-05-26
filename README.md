# SO-05-open-dup2

Objetivos:
* Abrir arquivos com `open` e descritores de arquivo
* Redirecionamentos, e `dup2`

# Atividade 01 - Arquivos

## Passo 1.1 - `open`

`man 2 open` , `man 2 close` 

O que olhar?
* Permissões
* As flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
* As demais flags (`O_APPEND`, `O_TRUNC`, `O_CREAT`)
* Descritores de arquivo

## Passo 1.2 - Exercício

Fazer o programa `p1_2.c`, que:
* cria o arquivo `vazio.txt` (mesmo que já exista o arquivo, ele é esvaziado), com permissões de leitura e escrita amplas
* fecha o arquivo
* abre o mesmo arquivo para leitura

## Passo 1.3 - `write`

`man 2 write`

O que olhar?
* buffer e quantidade de dados escritos

## Passo 1.4 - Exercício

Fazer o programa `p1_4.c`, que:
* cria o arquivo `blah.txt` com permissões de leitura e escrita amplas
* Escreve o verso "No meio do caminho tinha uma pedra"
* fecha o arquivo

# Atividade 02 - Redirecionamentos

## Passo 2.1 - `bash`

`man bash`

O que olhar?
* Redirecionamentos (`>`, `>>`, `2>`, `<`, `<<`, *heredocs*)

## Passo 2.2 - `dup2`

`man 2 dup2`

O que olhar?
* Diferenças entre `dup2` e `dup`

## Passo 2.3 - `ls -l / > log.txt`

Faça o programa `p2_3.txt` que executa `ls -l / > log.txt`

## Passo 2.4 - Atualização de `mynohup.c`

Modifique o programa `mynohup.c` para que a saída do programa seja registrada num arquivo

# Atividade 03 - Continuação do programa `myshell.c`

Explore a pasta `labs`

