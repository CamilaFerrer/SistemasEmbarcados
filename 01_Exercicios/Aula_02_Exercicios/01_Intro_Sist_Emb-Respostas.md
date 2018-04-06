## 1. O que são sistemas embarcados?
Sistemas embarcados são sistemas computacionais completos e independentes, mais simples que um computador de propósito geral, encarregados de executar apenas uma função determinada, na qual executam geralmente repetidas vezes. Esses dispositivos são compostos fundamentalmente pelos mesmos componentes de um computador pessoal, só que com tamanho e capacidade limitadas para o fim se destina. 

## 2. O que são sistemas microprocessados?
Sistemas microprocessados são computadores  que  se  caracterizam  por apresentar  blocos  lógicos  de  CPU,  memória  e  E/S  bem  definidos  e  onde  todas  as  funções  de processamento da unidade central são desempenhadas por um processador.

## 3. Apresente aplicações de sistemas embarcados:
* **Para a indústria automotiva:** Sensores de velocidade e aceleração, controle de injeção, freios, direção e embreagem

* **Para eletrodomésticos:** No micro-ondas: funções predefinidas pelo seu usuário, maquina de lavar: contrele de lavagem por celular, ar condicionado: controle de temperatura.

* **Para automação industrial:** Controlador Single Loop/Mult Loop, Controlador Lógico Programável (CLP/PLC), Controlador Programável de Automação (PAC), Instrumentos Inteligentes, Computador de Vazão.

## 4. Cite arquiteturas possíveis e as diferenças entre elas.
* **ASICs (Application-specific integrated circuit):** são normalmente projetados e usados para um sistema específico. Eles são muito caros, demandam muito tempo de desenvolvimento e muitos recursos. Em contra partida oferecerem um altíssimo desempenho aliado a um baixo consumo de energia.

* **ASSPs (Application-specific standard parts):** são projetados e implementados exatamente da mesma forma que ASICs, porém um ASSP é um dispositivo de propósito mais geral e é usado por diferentes sistemas em diferentes projetos. Por exemplo, um chip de interface USB pode ser classificado como um ASSP.

* **SoC (System-on-Chip):** é um chip de silício que contém um ou mais núcleos de processadores bem como memória, aceleradores de funções por hardware, funções de periféricos e potencialmente todos os tipos de "coisas". O SoC possui tudo em um ASIC além de um ou mais núcleos de processamento.

* **FPGAs (Field Programmable Gate Array):** O grande diferencial de um FPGA é a capacidade de configurar seu hardware para desempenhar qualquer combinação de funções digitais desejadas. Também pode-se implementar algoritmos de forma paralela, o que significa que se pode processar uma enorme quantidade de dados de forma rápida e eficiente. ASICs, ASSPs e SoCs oferecem alto desempenho e baixo consumo de energia, porém qualquer algoritmos que eles contenham (exceto os que estão sendo executados por software) estão "congelados no silício" ao contrário das FPGAs.

## 5. Por que usamos o Raspberry Pi na disciplina, ao invés de outro system-on-chip?
O Raspberry Pi é um mini-microcomputador que possui baixo custo e tamanho reduzido, abriga processador, processador gráfico, slot para cartões de memória, interface USB, HDMI e seus respectivos controladores. Além disso, ele também apresenta memória RAM, entrada de energia e barramentos de expansão. Ainda que minúsculo, o Raspberry é um computador completo.
