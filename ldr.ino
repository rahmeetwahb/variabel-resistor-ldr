const int ldr = A0;
const int led = 4;
int value;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  value = analogRead(ldr);
  Serial.print("LDR value: ");
  Serial.println(value);

  if(value < 500){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }

}
