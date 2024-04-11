// ============================================================
// ===          Monitor de Luminosidade com Arduino         ===
// ============================================================

// Este código implementa um sistema de monitoramento de luminosidade utilizando um Arduino e um sensor LDR (Light Dependent Resistor).
// O sistema aciona LEDs e um buzzer para indicar diferentes estados de luminosidade detectados pelo sensor.

// Definição dos pinos utilizados
const int ldrPin = A0;         // Pino analógico conectado ao LDR
const int ledVerdePin = 8;     // Pino digital para o LED verde
const int ledAmareloPin = 7;   // Pino digital para o LED amarelo
const int ledVermelhoPin = 4;  // Pino digital para o LED vermelho
const int buzzerPin = 13;      // Pino digital para o buzzer

// Variável para armazenar o valor lido pelo sensor LDR
int valorLDR;

// Define os limiares para os estados de luminosidade
const int limiarAlerta = 650;  // Limiar para o estado de alerta
const int limiarBaixo = 500;    // Limiar para o estado de luminosidade baixa

// Variáveis para armazenar o estado atual da luminosidade e se o sistema está em estado de alerta
int luminosidade;
bool emAlerta = false;

// Função de inicialização do Arduino
void setup() {
  // Configura os pinos como entrada ou saída
  pinMode(ledVerdePin, OUTPUT);
  pinMode(ledAmareloPin, OUTPUT);
  pinMode(ledVermelhoPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

// Função de repetição do Arduino
void loop() {
  // Lê a luminosidade do sensor LDR
  luminosidade = analogRead(ldrPin);

  // Verifica o estado atual da luminosidade
  if (luminosidade < limiarBaixo) {
    // Luminosidade abaixo do limite
    digitalWrite(ledVerdePin, HIGH);   // LED verde indicando OK
    digitalWrite(ledAmareloPin, LOW);
    digitalWrite(ledVermelhoPin, LOW);
    emAlerta = false;  // Reset do estado de alerta
    noTone(buzzerPin); // Desliga o buzzer
  } 
  else if (luminosidade < limiarAlerta) {
    // Luminosidade entre o limite baixo e o limite de alerta
    digitalWrite(ledVerdePin, LOW);
    digitalWrite(ledAmareloPin, HIGH);  // LED amarelo indicando alerta
    digitalWrite(ledVermelhoPin, LOW);
    emAlerta = true;
    tone(buzzerPin, 1000, 500);  // Ativa o buzzer com frequência de 1000Hz por 500ms
    delay(1000); // Aguarda 1 segundo antes de prosseguir
  } 
  else {
    // Luminosidade acima do limite de alerta
    digitalWrite(ledVerdePin, LOW);
    digitalWrite(ledAmareloPin, LOW);
    digitalWrite(ledVermelhoPin, HIGH);  // LED vermelho indicando alerta
    tone(buzzerPin, 2000, 1000);  // Ativa o buzzer com frequência de 2000Hz por 1000ms
    emAlerta = true;  // Atualiza o estado de alerta 
  }
}
