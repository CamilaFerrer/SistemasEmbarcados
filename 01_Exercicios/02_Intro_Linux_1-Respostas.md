### 1. Por que o Linux recebeu esse nome?
Por ser derivado de um sistema operacional Unix e ser uma homenagem ao seu criador, Linus Torvalds.

### 2. O que são daemons?
Um daemon é um programa de computador que executa como um processo em plano de fundo, em vez de estar sob o controle direto de um usuário interativo em sistemas multitarefas.

### 3. O que é o shell?
É uma interface de usuário para acessar os serviços de um sistema operacional.

### 4. Por que é importante evitar executar o terminal como super-usuário?
Porque ele possui permissões acima de um usuário comum, o que pode ocasionar em uma exclusão ou alteração indevida de algum arquivo importante ao sistema.

### 5. Qual botão do teclado completa o que o usuário escreve no terminal, de acordo com o contexto?
O botão ```Tab```

### 6. Quais botões do teclado apresentam instruções escritas anteriormente?
O botão ```Up```

### 7. Apresente os respectivos comandos no terminal para:
  (a) Obter mais informações sobre um comando: ```man nome_comando``` ou ```help nome_comando```
  
  (b) Apresentar uma lista com os arquivos dentro de uma pasta: ```ls```
  
  (c) Apresentar o caminho completo da pasta: ```pwd```
  
  (d) Trocar de pasta: ```cd nome_pasta``` para entrar na pasta ou ```cd ..``` para voltar a pasta anterior
  
  (e) Criar uma pasta: ```mkdir nome_pasta```
  
  (f) Apagar arquivos definitivamente: ```rm nome_arquivo```
  
  (g) Apagar pastas definitivamente: ```rm -rf nome_pasta```
  
  (h) Copiar arquivos: ```cp arquivo_origem arquivo_destino```
  
  (i) Copiar pastas: ```cp -r pasta_origem pasta_destino```
  
  (j) Mover arquivos: ```mv nome_arquivo pasta_destino/nome_arquivo```
  
  (k) Mover pastas: ```mv pasta_origem pasta_destino```
  
  (l) Renomear pastas: ```mv nome_antigo nome_novo```
  
  (m) Apresentar o conteúdo de um arquivo: ```cat nome_arquivo```
  
  (n) Apresentar o tipo de um arquivo: ```file nome_arquivo```
  
  (o) Limpar a tela do terminal: ```clear```
  
  (p) Encontrar ocorrências de palavras-chave em um arquivo-texto: ```grep -c "palavra" nome_arquivo ``` (Apresenta numero de ocorrencias da palavra) e ```grep -n "palavra" nome_arquivo ``` (Apresenta em qual linha a palavra apareceu)
  
  (q) Ordenar informações em um arquivo-texto: ```sort opção arquivo```
  
  (r) Substituir ocorrências de palavras-chave em um arquivo-texto: ```sed 's/palavra_antiga/palavra_nova/g' arquivo```
        
  (s) Conferir se dois arquivos são iguais: ```diff nome_arquivo_1 nome_outro_arquivo_2```
        
  (t) Escrever algo na tela: ```echo palavra```
