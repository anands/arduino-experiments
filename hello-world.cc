// Hello world program to blink the inbuilt LED
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Let it light
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait to change the state
}