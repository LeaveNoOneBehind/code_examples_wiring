void setup() {
  Serial.begin(9600);

  /////////////  математичні оператори //////////////////////////////

  int number_1 = 12;  // створення змінної 
  int number_2 = 32;  // створення змінної 

  // додавання двох змінних і присвоєння результату іншій змінній
  int sum_of_numbers = number_1 + number_2;
  Serial.print("Сума:"); 
  Serial.println(sum_of_numbers);  // виведення результату

  // віднімання двох змінних і присвоєння результату іншій змінній
  int differencce_of_numbers = number_1 - number_2;
  Serial.print("Різниця:"); 
  Serial.println(differencce_of_numbers);  // виведення результату

  // віднімання двох змінних без присвоєння результату іншій змінній
  // результат зразу передається методу println
  Serial.print("Добуток:"); 
  Serial.println(number_1 * number_2);  // виведення результату

  // ділення двох змінних без присвоєння результату іншій змінній
  // результат зразу передається методу println
  Serial.print("Ділення цілочисельних змінних:"); 
  Serial.println(number_1 / number_2);  // виведення результату

  float real_num_1 = 12.0;
  float real_num_2 = 32.0;
  Serial.print("Ділення чисел з рухомою крапкою:"); 
  Serial.println(real_num_1 / real_num_2);  // виведення результату

  // остача від ділення двох змінних без присвоєння результату іншій змінній
  // результат зразу передається методу println
  Serial.print("Остача від ділення:"); 
  Serial.println(number_1 % number_2);  // виведення результату

  Serial.println("");

  /////// складені оператори //////////////////////////////

  int variable = 0;
  variable += 5;

  Serial.print("Додавання 5 до змінної:"); 
  Serial.println(variable);  // виведення результату

  variable -= 50;

  Serial.print("Віднімання 58 від змінної:"); 
  Serial.println(variable);  // виведення результату

  variable++;
  Serial.print("Додавання 1 до змінної:"); 
  Serial.println(variable);  // виведення результату

  ++variable;
  Serial.print("Додавання 1 до змінної:"); 
  Serial.println(variable);  // виведення результату

  variable--;
  Serial.print("Віднімання 1 від змінної:"); 
  Serial.println(variable);  // виведення результату

  Serial.println("");

  /////// оператори порівняння //////////////////////////////

  bool logic_value = true;
  Serial.println(logic_value);
  
  logic_value = false;
  Serial.println(logic_value);

  int value_to_compare_1 = 1;
  int value_to_compare_2 = 1;

  Serial.print("Оператор дорівнює:");
  Serial.println(value_to_compare_1 == value_to_compare_2);

  Serial.print("Оператор недорівнює:");
  Serial.println(value_to_compare_1 != value_to_compare_2);

  Serial.print("Оператор менше:");
  Serial.println(value_to_compare_1 < value_to_compare_2);

  Serial.print("Оператор більше:");
  Serial.println(value_to_compare_1 > value_to_compare_2);

  Serial.print("Оператор менше рівне:");
  Serial.println(value_to_compare_1 <= value_to_compare_2);

  Serial.print("Оператор більше рівне:");
  Serial.println(value_to_compare_1 >= value_to_compare_2);

  Serial.println("");

  /////// логічні оператори //////////////////////////////

  int another_value_1 = 5;
  int another_value_2 = 10;

  Serial.println("Логічне і:");
  Serial.println((value_to_compare_1 == value_to_compare_2) && (another_value_1 != another_value_2));
  Serial.println((value_to_compare_1 != value_to_compare_2) && (another_value_1 != another_value_2));
  Serial.println((value_to_compare_1 == value_to_compare_2) && (another_value_1 == another_value_2));
  Serial.println((value_to_compare_1 != value_to_compare_2) && (another_value_1 == another_value_2));

  Serial.println("Логічне або:");
  Serial.println((value_to_compare_1 == value_to_compare_2) || (another_value_1 != another_value_2));
  Serial.println((value_to_compare_1 != value_to_compare_2) || (another_value_1 != another_value_2));
  Serial.println((value_to_compare_1 == value_to_compare_2) || (another_value_1 == another_value_2));
  Serial.println((value_to_compare_1 != value_to_compare_2) || (another_value_1 == another_value_2));

  Serial.println("Заперечення:");
  Serial.println(!(another_value_1 < another_value_2));
  Serial.println(!(another_value_1 > another_value_2));

}

void loop() {
  

}
