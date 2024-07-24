
// функція, яка виводить текст
void print_hello() {
  Serial.println("Hello!");
  Serial.println("Arduino!");
  Serial.println("Hello!");
}

// фунція, яка додає два цілих числа
int add_two_numbers(int num_1, int num_2) {
  int sum_of_two_numbers = num_1 + num_2; // додавання аргументів, переданих в функцію

  return sum_of_two_numbers; // повернення результату
}

// функція, яка додає всі значення в масиві чисел
float sum_elements_of_array(float numbers[], int size_of_numbers) {
  float result = 0; // змінна, яка буде мати результат
  
  // цикл, який проходиться по масиву і додає значення
  for (int i = 0; i < size_of_numbers; i++) {
    result += numbers[i];
  }

  return result; // повернення результату
}


void setup() {
  Serial.begin(9600);
  
  // виклик функції print_hello тричі
  print_hello();
  print_hello();
  print_hello();
  Serial.println("");

  // виклик функції add_two_numbers і присвоєння результату змінній sum_nums
  int sum_nums = add_two_numbers(1, 12);

  Serial.print("Сума двох чисел: ");
  Serial.println(sum_nums);

  // створення масиву чисел з рухомою крапкою
  float numbers_to_sum[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

  // виведення результату функції без присвоєння його іншій змінній
  Serial.print("Сума значень у масиві: ");
  Serial.println(sum_elements_of_array(numbers_to_sum, 10));
}

void loop() {
  

}
