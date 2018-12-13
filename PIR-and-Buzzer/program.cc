const int pirPin = 5; //the pin connected to the PIR sensor's output
const int buzzerPin = 6; //the pin connected to the buzz sensor

void setup() {
  Serial.begin(9600);
  setupPIRSensor();
  setupBuzzerAndLed();
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {
    Serial.println("motion detected");
    beepAndBlink();
  }
}

void setupPIRSensor() {
  pinMode(pirPin, INPUT);
  digitalWrite(pirPin, LOW);
  Serial.println("Calibrating the PIR sensor...");
  delay(5000);
  Serial.println("Calibrated the PIR sensor.");
}

void setupBuzzerAndLed() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(buzzerPin, HIGH);
}

void beepAndBlink() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(buzzerPin, LOW);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(buzzerPin, HIGH);
}