# FGParking

O projeto consiste em validar a entrada do veículo por reconhecimento de imagem da placa: ao entrar no estacionamento um sensor de movimento aciona uma câmera que captura a imagem da placa do veículo e, após processado os dados da placa, o usuário tem acesso à quantidade de vagas no estacionamento por um aplicativo/site. Além de recebe uma notificação pelo aplicativo, assim que entra informando o horário de entrada do veículo e, assim que sai, informando o horário de saída do estacionamento.

## Equipe

| Matrícula | Nome | E-mail | GitHub | Papel |
| --- | --- | --- | --- | --- |
| 14/0080619 | Camila Carneiro Ferrer Santos | camila.c.ferrer@gmail.com | [CamilaFerrer](https://github.com/CamilaFerrer) | Desenvolvedora |
| 14/0042784 | Jéssica de Souza Alves |  |  | Desenvolvedora |


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
