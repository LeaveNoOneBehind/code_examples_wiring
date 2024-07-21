void setup() {
  Serial.begin(9600);

  float array_of_floats[4];

  for (int i = 0; i < 4; i++) {
    array_of_floats[i] = 0.0;
  }

  for (int i = 0; i < 4; i++) {
    Serial.println(array_of_floats[i]);
  }

  Serial.println("");

  ////////////////////////////////////////////////

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      Serial.print("i = ");
      Serial.print(i);
      Serial.print(" j = ");
      Serial.print(j);
      Serial.println();
    }
  }

}

void loop() {

}
