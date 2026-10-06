/* Arduino LED Blinking - QA Project */
const int LED_PIN = 13;
const unsigned long BLINK_DELAY_MS = 1000;

void setup() {
  // Configure LED pin as output.
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // LED ON for approximately 1 second.
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_DELAY_MS);

  // LED OFF for approximately 1 second.
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_DELAY_MS);
}
