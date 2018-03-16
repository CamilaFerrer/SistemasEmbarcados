# 3. Apresente os comportamentos do código anterior nos seguintes casos:

## (a) Se o usuário insere mais de um nome.
```bash
$ ./ola_usuario_1
$ Digite o seu nome: Eu Mesmo
```
* Apenas o primeiro nome é salvo e impresso

## (b) Se o usuário insere mais de um nome entre aspas duplas. Por exemplo:
```bash
$ ./ola_usuario_1
$ Digite o seu nome: "Eu Mesmo"
```
* Apenas o primeiro nome e a primeira aspa são salvos e impressos

## (c) Se é usado um pipe. Por exemplo:
```bash
$ echo Eu | ./ola_usuario_1
```
* O nome é salvo pelo echo e ao rodar o programa, é utilizado

## (d) Se é usado um pipe com mais de um nome. Por exemplo:
```bash
$ echo Eu Mesmo | ./ola_usuario_1
```
* O primeiro nome é salvo pelo echo e ao rodar o programa, só ele é utilizado

## (e) Se é usado um pipe com mais de um nome entre aspas duplas. Por exemplo:
```bash
$ echo "Eu Mesmo" | ./ola_usuario_1
```
* O primeiro nome com a primeira aspa é salvo pelo echo e ao rodar o programa, só eles são utilizados

## (f) Se é usado o redirecionamento de arquivo. Por exemplo:
```bash
$ echo Ola mundo cruel! > ola.txt
$ ./ola_usuario_1 < ola.txt
```
* Apenas o primeiro nome do arquivo é utilizado ao rodar o programa
