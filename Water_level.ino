void setup() {
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  Serial.println(value);
  value = map(value, 0, 625, 0, 5);
  digitalWrite(3, value > 0);
  digitalWrite(4, value > 1);
  digitalWrite(5, value > 2);
  digitalWrite(6, value > 3);
  digitalWrite(7, value > 4);
}
