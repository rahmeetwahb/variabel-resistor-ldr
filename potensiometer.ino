const int potPin = A0;
const int ledPin = D2;
int sensorValue = 0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  sensorValue = analogRead(potPin);
  Serial.print("Potensio value: ");
  Serial.println(sensorValue);  
  delay(500);

}
