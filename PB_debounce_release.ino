int pressed;
int button;
int led;
void setup() {
  pinMode(8, INPUT_PULLUP);
  pinMode(9, OUTPUT);
  pressed = 0;
  led = LOW;
}

void loop() {

  if(pressed == 0){ // is released, waiting to be pressed
    button = digitalRead(8);
    delay(5);
    if(button == LOW){ // pressed, toggle LED and switch to pressed state
      led = !led;
      digitalWrite(9, led);
      pressed = 1;
    }
  } else { // pressed, waiting to be released
    button = digitalRead(8); // released, switch to released state
    delay(5);
    if(button == HIGH)
      pressed = 0;
  }

}
