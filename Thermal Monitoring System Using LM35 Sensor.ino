#define LM35 A0
#define RED 7
#define GREEN 6

float lm_value;
float tempc;

void setup() {
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  lm_value = analogRead(LM35);
  tempc = (lm_value * 500) / 1023;
  Serial.println(tempc); // Temperature in Celsius

  // Condition
  if (tempc > 50) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
  } else {
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
  }

  delay(1000);
}
