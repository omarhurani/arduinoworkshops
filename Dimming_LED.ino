void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  for(int i = 0; i < 256; i++){
    analogWrite(9, i);
    delay(10);
  }
  for(int i = 0; i < 256; i++){
    analogWrite(9, 255-i);
    delay(10);
  }
}
