void setup() {
  Serial.begin(9600);
  int command = 6;
  
  if (command == 0) {
    Serial.println("Значення дорівнює нулю!");
  } else if (command > 0 && command < 5) {
    Serial.println("Значення знаходиться в межах від 0 до 5!");
  } else if (command < 0) {
    Serial.println("Значення є від'ємним");
  } else {
    Serial.println("Значення більше чотирьох!");
  }

}

void loop() {

}
