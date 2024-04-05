Arthur Galvão Alves rm554462 |
Maria Alice Freitas Araújo rm557516 |
Felipe Braunstein e Silva rm554483 |
Thiago de Barros Oliveira rm555485 

Este projeto consiste em um sistema de monitoramento de luminosidade utilizando um sensor de luz (LDR) e LEDs indicadores. O sistema possui três estados de luminosidade:

Luminosidade baixa: Indicada pelo LED verde aceso.
Luminosidade moderada: Indicada pelo LED amarelo aceso.
Luminosidade alta: Indicada pelo LED vermelho aceso e acompanhada de um sinal sonoro emitido pelo buzzer.
Dependências do Projeto
Este projeto é desenvolvido em C++ para Arduino. Não há dependências externas além das bibliotecas padrão do Arduino.

Reproduzindo o Projeto
Para reproduzir este projeto, siga as etapas abaixo:

Materiais necessários:
Placa Arduino (compatível com o código)
Sensor de luz (LDR)
LEDs nas cores verde, amarelo e vermelho
Buzzer
Resistores adequados para os LEDs e o LDR

Montagem do circuito:
Conecte o pino analógico do sensor de luz (LDR) ao pino A0 da placa Arduino.
Conecte os LEDs verde, amarelo e vermelho aos pinos digitais 8, 7 e 4, respectivamente.
Conecte o buzzer ao pino digital 13.
Certifique-se de usar resistores adequados para limitar a corrente dos LEDs e proteger os componentes.

Executando o projeto:
Após carregar o código na placa Arduino e montar o circuito conforme descrito acima, o sistema de monitoramento de luminosidade estará operacional. Os LEDs indicarão o estado atual da luminosidade de acordo com os limiares definidos no código. O monitor serial pode ser utilizado para visualizar a leitura da luminosidade em tempo real.
