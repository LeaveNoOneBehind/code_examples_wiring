void setup() {
  Serial.begin(9600); // запустити сіріл, для виводу даних

  int integer_number = 12; // створення цілого числа
  float float_number = 34.1; // створення числа з рухомою крапкою
  char symbol = 'r'; // створення символу

  String hello_text = "Hello!"; // створення стрічки за допомогою String

  Serial.println(integer_number);
  Serial.println(float_number);
  Serial.println(symbol);
  
  Serial.println(hello_text);

}

void loop() {

}
