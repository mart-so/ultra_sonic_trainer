#include <Arduino.h>

const int pin = 9; // El pin al que está conectado el transductor
const int buttonPin = 2; // Pin conectado al botón de encendido/apagado
const int potentiometerPin = A0; // Pin conectado al potenciómetro
const int micPin = A1; // Pin conectado al micrófono
bool isOn = false; // Estado del dispositivo

unsigned int frequency; // Frecuencia actual
unsigned int durationOn = 1000; // Duración del tono (en milisegundos)
unsigned int durationOff = 1000; // Duración de la pausa (en milisegundos)

void setup() {
  pinMode(pin, OUTPUT); // Configura el pin como salida
  pinMode(buttonPin, INPUT_PULLUP); // Configura el pin del botón como entrada con resistencia interna
  pinMode(potentiometerPin, INPUT); // Configura el pin del potenciómetro como entrada
  pinMode(micPin, INPUT); // Configura el pin del micrófono como entrada
  Serial.begin(9600); // Inicia la comunicación serial
}

void loop() {
  int micValue = analogRead(micPin); // Lee el valor del micrófono
  Serial.println(micValue); // Imprime el valor del micrófono en el monitor serial

  if (micValue > threshold) { // Si el valor del micrófono supera un umbral específico
    isOn = true; // Activa el sistema
    delay(200); // Debounce delay
  } else {
    isOn = false; // Desactiva el sistema
  }

  if (isOn) {
    frequency = map(analogRead(potentiometerPin), 0, 1023, 20000, 40000); // Lee el valor del potenciómetro y mapea a la frecuencia
    tone(pin, frequency); // Genera el tono ultrasónico
    delay(durationOn); // Espera mientras el tono está encendido
    noTone(pin); // Detiene el tono
    delay(durationOff); // Espera mientras el tono está apagado
    Serial.println(frequency); // Imprime la frecuencia actual en el monitor serial
  } else {
    noTone(pin); // Asegúrate de que el tono esté apagado cuando el dispositivo está desactivado
  }
}
