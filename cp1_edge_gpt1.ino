const int ldrPin = A0;   // Pino analógico conectado ao LDR
const int ledVerdePin = 8;  // Pino digital para o LED verde
const int ledAmareloPin = 7;  // Pino digital para o LED amarelo
const int ledVermelhoPin = 4; // Pino digital para o LED vermelho
const int buzzerPin = 13;  // Pino digital para o buzzer

// Define os limiares para os estados de luminosidade
const int limiarAlerta = 650;  // Limiar para o estado de alerta
const int limiarBaixo = 500;   // Limiar para o estado de luminosidade baixa

// Variáveis para armazenar o estado atual da luminosidade
int luminosidade;
bool emAlerta = false;

void setup() {
  // Inicializa os pinos como entrada ou saída
  pinMode(ledVerdePin, OUTPUT);
  pinMode(ledAmareloPin, OUTPUT);
  pinMode(ledVermelhoPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ldrPin, INPUT);

  // Inicializa a comunicação serial para debug (opcional)
  Serial.begin(9600);
}

void loop() {
  // Lê a luminosidade do sensor LDR
  luminosidade = analogRead(ldrPin);
  
  // Debug: imprime a luminosidade no monitor serial
  Serial.print("Luminosidade: ");
  Serial.println(luminosidade);
  
  // Verifica se a luminosidade está dentro dos limites
  if (luminosidade < limiarBaixo) {
    // Luminosidade abaixo do limite
    digitalWrite(ledVerdePin, HIGH);  // LED verde indicando OK
    digitalWrite(ledAmareloPin, LOW);
    digitalWrite(ledVermelhoPin, LOW);
    emAlerta = false;  // Reset do estado de alerta
    noTone(buzzerPin); // Desliga o buzzer
  } 
  else if (luminosidade < limiarAlerta) {
    // Luminosidade entre o limite baixo e o limite de alerta
    digitalWrite(ledVerdePin, LOW);  // Desliga o LED verde
    digitalWrite(ledAmareloPin, HIGH);  // LED amarelo indicando alerta
    digitalWrite(ledVermelhoPin, LOW);
    emAlerta = true;
    tone(buzzerPin, 1000, 500);  
    delay(1000);
      
  } 
  else {
    // Luminosidade acima do limite de alerta
    digitalWrite(ledVerdePin, LOW);
    digitalWrite(ledAmareloPin, LOW);  
    digitalWrite(ledVermelhoPin, HIGH); // LED vermelho indicando alerta
    tone(buzzerPin, 2000, 1000);  // Ativa o buzzer com frequência de 1000Hz por 3000ms
    emAlerta = true;  // Atualiza o estado de alert 
  }
}