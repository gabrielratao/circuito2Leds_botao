#include <Arduino.h>
int botao = 7;
int led_1 = 12;
int led_2 = 11;
bool estadoLed_1 = 0;
bool estadoLed_2 = 0;
int cnt = 0;

void setup() {
  pinMode(botao, INPUT_PULLUP); // botao como entrada
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
}

void loop() {
  if(digitalRead(botao) == LOW) // se o botao for pressionado
  {
    cnt += 1;
    
  
    if(cnt % 2 == 0){
      estadoLed_2 = !estadoLed_2;
      digitalWrite(led_2, estadoLed_2);
      digitalWrite(led_1, LOW);
      estadoLed_2 = !estadoLed_2;
    }

    else{
      estadoLed_1 = !estadoLed_1; // troca o estado do led1
      digitalWrite(led_1, estadoLed_1);
      digitalWrite(led_2, LOW);
      estadoLed_1 = !estadoLed_1;
    }
  while(digitalRead(botao)==LOW);
  delay(100);
    
    }
  
}