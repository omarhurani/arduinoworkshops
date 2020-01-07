void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print(map(analogRead(A0), 0, 1023, 0, 100));
  delay(10);
}
