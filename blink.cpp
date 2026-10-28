

// the setup function runs once when you press reset or power the board
int const LED_1 = 2;
int const LED_2 = 4;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
}

void loop() {
  digitalWrite(LED_1, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(1000);                      // wait for a second
  digitalWrite(LED_1, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(1000);                      // wait for a second

  digitalWrite(LED_2, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(2000);                      // wait for a second
  digitalWrite(LED_2, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(2000);                      // wait for a second
}
