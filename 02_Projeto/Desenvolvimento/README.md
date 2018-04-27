# FGParking

O projeto consiste em validar a entrada do veículo por reconhecimento de imagem da placa: ao entrar no estacionamento um sensor de movimento aciona uma câmera que captura a imagem da placa do veículo e, após processado os dados da placa, o usuário tem acesso à quantidade de vagas no estacionamento por um aplicativo/site. Além de recebe uma notificação pelo aplicativo, assim que entra informando o horário de entrada do veículo e, assim que sai, informando o horário de saída do estacionamento.

## Equipe

| Matrícula | Nome | GitHub | Papel |
| --- | --- | --- | --- |
| 14/0080619 | Camila Carneiro Ferrer Santos | [CamilaFerrer](https://github.com/CamilaFerrer) | Desenvolvedora |
| 14/0042784 | Jéssica de Souza Alves | [JessicaSouz](https://github.com/JessicaSouz) | Desenvolvedora |

## Execução

### Download

Instale o programa OpenALPR:

```bash
sudo apt-get update && sudo apt-get install -y openalpr openalpr-daemon openalpr-utils libopenalpr-dev
```

Para testar o andamento do programa, baixe a pasta **Desenvolvimento** no seu computador e salve-a dentro da pasta **Downloads**.

### Sem acesso a internet
Caso não tenha acesso a internet, utilize o arquivo .txt disponível na pasta **Arquivos_Teste**. Ele é o arquivo com os dados que o OpenAPLR disponibiliza após reconhecimento da placa. Entre na pasta **Desenvolvimento** e execute os seguintes comandos:

```bash
$ cp Arquivos_Teste/2018-04-20-0001.* /home/<nome_usuário>/Downloads/Desenvolvimento
$ make
$ ./recon_placa 2018-04-20-0001.jpg
```

### Com acesso a internet
Caso tenha acesso a internet, abra o arquivo **recon_placa.c** e descomente a linha 23 (delete os caracteres _/*_ e _*/_). Entre na pasta **Desenvolvimento** e execute os seguintes comandos:

```bash
$ cp Arquivos_Teste/2018-04-20-0001.jpg /home/<nome_usuário>/Downloads/Desenvolvimento
$ make
$ ./recon_placa 2018-04-20-0001.jpg
```

### Resultados
Na pasta **Banco_de_Dados** terá um arquivo .txt que armazena os horários de acesso ao estacionamento do veículo de acordo com o horários que o programa foi rodado. Na pasta **Imagens** terá o arquivo .jpg da imagem do acesso do veículo ao estacionamento.

## Objetivos

O projeto destina-se a implementar um sistema de apoio computadorizado para controle de entrada e saída de veículos do estacionamento da Universidade de Brasília Campus Gama.


## Requisitos
Para elaborar as funcionalidades do sistema, foram elencados os seguintes requisitos:

### Controle de Entradas
* **REQ01:** A câmera do sistema deve permanecer em Standby até ser acionada por movimento de veículo na entrada do estacionamento.

* **REQ02:** O sistema deve informar ao usuário cadastrado quando seu carro entra no estacionamento.

* **REQ03:** O sistema deve decrementar em uma unidade a quantidade de vagas disponíveis.


### Controle de Saídas

* **REQ04:** A câmera do sistema deve permanecer em Standby até ser acionada por movimento de veículo na saída do estacionamento.

* **REQ05:** O sistema deve informar ao usuário cadastrado quando seu carro saí do estacionamento.

* **REQ06:** O sistema deve incrementar em uma unidade a quantidade de vagas disponíveis.


### Controle de Lotação
* **REQ07:** O sistema deve especificar a lotação do estacionamento no aplicativo para ilustrar a ocupação do estacionamento.


### Cadastro de Usuários
* **REQ08:** O sistema deve requerer as seguintes informações na hora do cadastro: placa, modelo, ano de fabricação e cor do veículo, nome completo, RG e CPF do usuário responsável.

* **REQ09:** O sistema permite a inserção, remoção e alteração de usuários 
