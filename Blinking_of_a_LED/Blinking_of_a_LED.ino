// Code for blinking a LED
#define LED 12
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);  //Wait for 1000 millisecond which is 1 second.

  digitalWrite(LED, LOW);
  delay(1000);
  //TO increase the blinking rate decrease the delay time and vice versa.
}
