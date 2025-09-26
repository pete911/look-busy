int rndX;
int rndY;
int rndDelaySec;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
    Mouse.begin();
}

void loop() {
  blink(3);
  rndX = random(500, 1000);
  rndY = random(500, 1000);
  rndDelaySec = random(5, 15);
  moveAndReturn(rndX, rndY);
  blink(rndDelaySec);
  delay(rndDelaySec * 1000);
}

void moveAndReturn(int x, int y) {
  Mouse.move(x, y, 0);
  delay(1000);
  Mouse.move(-1 * x, -1 * y, 0);
}

void blink(int times) {
  for (int i = 0; i <= times; i++) {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(50);
        digitalWrite(LED_BUILTIN, LOW);
        delay(50);
  }
}

