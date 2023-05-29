int button = 5;
int led = 9;
volatile bool Flag = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  attachInterrupt(digitalPinToInterrupt(button), Button, RISING);
}

void loop() {
  Serial.println(Flag);
  digitalWrite(led, Flag);
  delay(50);
}

void Button() {
  Flag = !Flag;
}
