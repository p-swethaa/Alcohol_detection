void setup() {
  pinMode(13, OUTPUT);
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A5);
  Serial.println(value);
  if (value > 85) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}