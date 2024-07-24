int ledPin = 13;  // світлодіод підключений до піна 13
int inPin = 7;    // кнопка підключена до піна 7
int val = 0;      // зміна, для запису вичитаного знаення

void setup() {
  pinMode(ledPin, OUTPUT);  // виставлення режиму піна 13 як вихід
  pinMode(inPin, INPUT);    // виставлення режиму піна 7 як вхід
}

void loop() {
  val = digitalRead(inPin);   // читання значення піна 7
  digitalWrite(ledPin, val);  // виставлення прочитаного значення на пін 13
}