int RELAY_PIN = 10;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  digitalWrite(RELAY_PIN, LOW);
  delay(1200000);
  digitalWrite(RELAY_PIN, HIGH);
  delay(2400000);
}