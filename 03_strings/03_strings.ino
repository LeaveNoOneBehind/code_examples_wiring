void setup() {
  Serial.begin(9600);  // запуск сіріал для виведення даних

  String text_str = "Hello!";  // створення стрічки

  Serial.println(text_str);    // виведення стрічки

  text_str.toLowerCase();      // перетворення всіх символів стрічки на маленькі
  Serial.println(text_str);    // виведення стрічки

  text_str.toUpperCase();      // перетворення всіх символів стрічки на великі
  Serial.println(text_str);    // виведення стрічки

  text_str.replace('L', 'O');  // заміна всіх символів 'L' в стрічці на символ 'O'
  Serial.println(text_str);    // виведення стрічки

  Serial.println("");          // виведення пустого рядка

  char text_array[] = "Hello!"; // створення стрічки як масиву символів

  Serial.println(text_array);   // виведення стрічки
}

void loop() {

}
