// Automated Door System

int sensorPin = 7;   // PIR / IR Sensor OUT pin
int ledPin = 13;     // LED pin (Door indicator)

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Automated Door System Started");
}

void loop() {
  int motion = digitalRead(sensorPin);

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);      // Door Open
    Serial.println("Door Open");
  } else {
    digitalWrite(ledPin, LOW);       // Door Close
    Serial.println("Door Close");
  }

  delay(500);
}
