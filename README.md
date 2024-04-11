Arthur Galvão Alves rm554462 |
Maria Alice Freitas Araújo rm557516 |
Felipe Braunstein e Silva rm554483 |
Thiago de Barros Oliveira rm555485 

Este projeto consiste em um sistema de monitoramento de luminosidade utilizando um microcontrolador Arduino em conjunto com um sensor LDR (Light Dependent Resistor), LEDs e um buzzer. O objetivo é detectar os níveis de luminosidade no ambiente e fornecer feedback visual e sonoro correspondente.

O sensor LDR é responsável por medir a intensidade da luz ambiente e enviar esse valor ao Arduino. Com base nessa leitura, o Arduino determina se a luminosidade está abaixo de um limite aceitável, entre um limite aceitável e um limite de alerta, ou acima do limite de alerta.

O sistema utiliza três LEDs (verde, amarelo e vermelho) e um buzzer para fornecer feedback ao usuário sobre o estado da luminosidade. O LED verde indica uma luminosidade adequada, o LED amarelo indica um estado de alerta e o LED vermelho indica uma luminosidade excessiva. Além disso, o buzzer emite sons correspondentes a cada estado, fornecendo uma indicação sonora adicional.

Dependências
Este projeto requer as seguintes dependências:

Arduino IDE: Ambiente de desenvolvimento integrado para programação de placas Arduino.
Arduino board: Uma placa Arduino compatível, como Arduino Uno, Nano, etc.
Sensor LDR (Light Dependent Resistor): Um sensor que varia sua resistência com a quantidade de luz incidente.
LEDs (verde, amarelo e vermelho): Para indicar os diferentes estados de luminosidade.
Buzzer: Para fornecer feedback sonoro ao usuário.
Resistores: Para limitar a corrente nos LEDs e no buzzer, de acordo com suas especificações.
Como Reproduzir
Para reproduzir este projeto, siga as etapas abaixo:

Conecte o sensor LDR ao pino analógico A0 do Arduino.
Conecte os LEDs verde, amarelo e vermelho aos pinos digitais 8, 7 e 4, respectivamente.
Conecte o buzzer ao pino digital 13 do Arduino.
Carregue o código fornecido neste repositório na Arduino IDE.
Verifique e compile o código para garantir que não haja erros.
Faça o upload do código para o Arduino.
Monitore a luminosidade ambiente observando os LEDs e ouvindo o buzzer.
Funcionamento
O código funciona da seguinte maneira:

Inicializa os pinos como entrada ou saída.
Lê a luminosidade do sensor LDR.
Compara a luminosidade com os limiares definidos para determinar o estado de luminosidade.
Aciona os LEDs e o buzzer de acordo com o estado de luminosidade detectado.
Certifique-se de ajustar os limiares de acordo com as condições de luminosidade do ambiente onde o sistema será instalado para obter resultados precisos.
