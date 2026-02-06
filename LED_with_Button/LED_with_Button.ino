// code for turning on or off a led with button
#define button 7
#define LED 12
void setup() {
  pinMode(button, INPUT);  // button as input
  pinMode(LED, OUTPUT);    // LED as output
}

void loop() {
  if (digitalRead(button) == HIGH){ //when button is pressed
    digitalWrite(LED, HIGH);
  }
  else 
    digitalWrite(LED, LOW); //when button is released
}
