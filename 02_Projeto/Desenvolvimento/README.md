# FGParking

O projeto consiste em validar a entrada do veículo por reconhecimento de imagem da placa: ao entrar no estacionamento um sensor de movimento aciona uma câmera que captura a imagem da placa do veículo e, após processado os dados da placa, o usuário tem acesso à quantidade de vagas no estacionamento por um aplicativo/site. Além de recebe uma notificação pelo aplicativo, assim que entra informando o horário de entrada do veículo e, assim que sai, informando o horário de saída do estacionamento.

## Equipe

| Matrícula | Nome | GitHub | Papel |
| --- | --- | --- | --- |
| 14/0080619 | Camila Carneiro Ferrer Santos | [CamilaFerrer](https://github.com/CamilaFerrer) | Desenvolvedora |
| 14/0042784 | Jéssica de Souza Alves | [JessicaSouz](https://github.com/JessicaSouz) | Desenvolvedora |

## Execução

Para testar o andamento do programa, baixe a pasta **Desenvolvimento** no seu computador e salve-a dentro da pasta **Downloads**.

### Download de Programas

* Instale o programa OpenALPR:
[Compilation instructions (Ubuntu Linux)](https://github.com/openalpr/openalpr/wiki/Compilation-instructions-(Ubuntu-Linux))

* Instale o programa fswebcam:
```bash
sudo apt-get install fswebcam
```

* Entre na pasta **gpio-watch** e execute:
```bash
cd gpio-watch/
make clean
make
sudo make install
```

### Instalação dos Botões (gpio-scripts)
Copie os arquivos da pasta **gpio-scripts** para a pasta **/etc/gpio-scripts**.

```bash
sudo mkdir /etc/gpio-scripts
sudo cp /gpio-scripts/* /etc/gpio-scripts/
```


### Aquisição de Foto (gpio-watch)
Para a implementação desse processo, ao acionar o botão conectado ao pino GPIO 23, o script salva a imagem na pasta **Entrada** e ao acionar o botão conectado ao pino GPIO 24, o script salva a imagem na pasta **Saida**. Para executar o script dos botões, abra dois terminais e em cada um execute:

```bash
gpio-watch -e switch 23
```

```bash
gpio-watch -e switch 24
```


### Registro do Usuário (bot.py)
Para cadastrar o carro no sistema da FGParking, o usuário deve começar uma conversa com o bot do telegram @FGParking com o comando /start. Ao iniciar a conversa, o bot irá perguntar alguns dados do carro para armazenamento e registrar o _CHAT_ID_ do usuário para aquele carro em específico. Por motivos de segurança, não disponibilizamos no Git o _TOKEN_ e o _CHAT_ID_ de teste, por isso é necessário colocar o _TOKEN_ do bot do telegram no arquivo bot.py na linha 81. Também é necessário colocar o _CHAT_ID_ da pessoa que irá receber a notificação no arquivo _Bando_de_Dados/PLACA.txt_. Abra outro termnal e execute:

```bash
python bot.py
```

### Makefile
É responsável por compilar todos os arquivos descritos abaixo e por excluir todos os executáveis dos mesmos.

Para compilar:
```bash
make all
```

Para excluir:
```bash
make clean
```


### Processo Principal (main.c)
Esse é o processo principal da aplicação e executa os demais processos dentro dele. Ele fica em um loop infinito chamando os processos _entrada_ e _saida_. Abra o quarto e ultimo terminal e execute o seguinte comando:

```bash
./main
```


### Verificação de Novas Entradas (entrada.c)
Este processo é responsável por verificar se existem imagens na pasta **Entrada** que ainda não foram processadas. Caso não exista, ele encerra sua execução. Caso exista, ele pega o nome dos arquivos, envia para o processo de reconhecimento e armazena a imagem na pasta **Imagens/Entrada/**. Caso queira rodar apenas esse arquivo para teste, coloque alguma imagem nas pastas **Entrada** e execute o seguinte comando:

```bash
./entrada
```


### Verificação de Novas Saídas (saida.c)
Este processo é responsável por verificar se existem imagens na pasta **Saida** que ainda não foram processadas. Caso não exista, ele encerra sua execução. Caso exista, ele pega o nome dos arquivos, envia para o processo de reconhecimento e armazena a imagem na pasta **Imagens/Saida/**. Caso queira rodar apenas esse arquivo para teste, coloque alguma imagem nas pastas **Saida** e execute o seguinte comando:

```bash
./saida
```


### Reconhecimento da Placa (recon.c)
Esse processo irá pegar o nome das imagens recebidas em sua chamada e utilizar a biblioteca do OpenALPR para extrair a placa do carro da imagem. Após extraída a placa, ele irá salvar no Banco de Dados o acesso do carro ao estacionamento. Caso queira rodar apenas esse arquivo para teste, execute os seguintes comandos:

Entrando no estacionamento:
```bash
./recon Entrada/2018-04-27_16-45-25.png 1
```

Saindo do estacionamento:
```bash
./recon Saida/2018-04-27_16-45-25.png 0
```

### Notificação do Carro (notificacao.c)
Para receber a notificação é necessário colocar o _TOKEN_ do bot do telegram no arquivo bot.py na linha 81. Também é necessário colocar o _CHAT_ID_ da pessoa que irá receber a notificação no arquivo _Bando_de_Dados/PLACA.txt_. Por motivos de segurança, não disponibilizamos no Git o _TOKEN_ e o _CHAT_ID_.


