//基礎プログラミングII 第3回　SchooMyプロジェクト
#include <SchooMyUtilities.h>
SchooMyUtilities scmUtils = SchooMyUtilities();

float num = 0;
void setup() {
  Serial.begin(9600);
  pinMode(19, INPUT);
  pinMode(19, OUTPUT);
  digitalWrite(19, HIGH);
}

void loop() {
  num = 30;
  while ((num >= 0)) {
    unsigned long _wt_start = millis();
    while (millis() - _wt_start < (digitalRead(19)) * 1000UL) {
      delay(1 * 1000);
      num -= 1;
    }
  }
  digitalWrite(19, LOW);
}
