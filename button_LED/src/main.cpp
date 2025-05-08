#include <Arduino.h>

int buttonPin = 22;  // 버튼 연결 핀

#define LED 2

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT);     // 버튼 입력
  pinMode(LED, OUTPUT);     // LED 출력
}

void loop() {
  int buttonState = digitalRead(buttonPin);  // 버튼 상태 읽기

  if (buttonState == HIGH) {
    digitalWrite(LED, HIGH);  // 버튼 누르면 LED 켜기
  } else {
    digitalWrite(LED, LOW);   // 버튼 안 누르면 LED 끄기
  }
}
