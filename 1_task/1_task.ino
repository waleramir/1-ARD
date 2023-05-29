int Pin = 9;
int V = 250;
int Vincreament = 10;

void setup() {
  pinMode(Pin, OUTPUT);
}

void loop() {
  Potentiometer();
  delay(50);
  analogWrite(Pin, V);
}

void Potentiometer() {
  if (V == 250 || V == 0) {
    Vincreament = -Vincreament;
  }
  V += Vincreament;
}
