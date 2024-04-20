#define analogPin A0
float analogValue;


void setup() {
Serial.begin(9600);
pinMode(analogPin, INPUT);
delay(1000);
}

void loop() {
analogValue = analogRead(analogPin)
Serial.println(analogValue);
delay(100);
}
