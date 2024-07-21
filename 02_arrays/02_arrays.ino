void setup() {
  Serial.begin(9600); // запустити сіріал для виводу значень

  int array_of_ints[5] = {1, 2, 3, 4, 5};  // створення масиву цілих чисел

  // виведення значень масиву
  Serial.println(array_of_ints[0]);
  Serial.println(array_of_ints[1]);
  Serial.println(array_of_ints[2]);
  Serial.println(array_of_ints[3]);
  Serial.println(array_of_ints[4]);

  array_of_ints[3] = 10; // присвоєння значення 10 до 4го елементу масиву

  // виведення значень масиву
  Serial.println("");
  Serial.println(array_of_ints[0]);
  Serial.println(array_of_ints[1]);
  Serial.println(array_of_ints[2]);
  Serial.println(array_of_ints[3]);
  Serial.println(array_of_ints[4]);


}

void loop() {
  

}
