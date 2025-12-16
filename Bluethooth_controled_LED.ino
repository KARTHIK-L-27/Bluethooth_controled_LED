#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3); // RX, TX
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  BT.begin(9600);
}

void loop() {
  if (BT.available()) {
    char data = BT.read();

    if (data == '1') {
      digitalWrite(led, HIGH);
    }
    if (data == '0') {
      digitalWrite(led, LOW);
    }
  }
}

