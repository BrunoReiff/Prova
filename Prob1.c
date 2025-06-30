int ledPin = 9;
int potPin = A0;
int buttonPin = 2;
int potValue, delayTime;
bool ligado;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    ligado = !ligado;
    delay(300); 
  }

  if (ligado) {
    potValue = analogRead(potPin);
    delayTime = map(potValue, 0, 1023, 100, 2000);

    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(delayTime);

    Serial.print("Pot: ");
    Serial.print(potValue);
    Serial.print(" | Interval: ");
    Serial.println(delayTime);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(50);
}
