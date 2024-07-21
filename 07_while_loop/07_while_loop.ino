void setup() {
  Serial.begin(9600);

  float number = 1.2;

  while (number < 100.0) {
    number *= 2.0;

    Serial.println(number);
  }
}

void loop() {

}
