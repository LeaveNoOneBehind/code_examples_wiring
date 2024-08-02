- [Вбудовані функції](#вбудовані-функції)
  - [GPIO](#gpio)
    - [Цифрові](#цифрові)
    - [Аналогові](#аналогові)
    - [Інші](#інші)
  - [Випадкові числа](#випадкові-числа)
  - [Час](#час)
  - [Функції мови](#функції-мови)
  - [Serial](#serial)
  - [Servo](#servo)
  - [Stepper](#stepper)
- [Вбудовані функції -- просунуті](#вбудовані-функції----просунуті)
  - [Переривання](#переривання)
  - [EEPROM](#eeprom)
  - [Wire -- I2C](#wire----i2c)
  - [SPI](#spi)
- [Зовнішні бібліотеки](#зовнішні-бібліотеки)
  - [LiquidCrystal](#liquidcrystal)
  - [WS2812](#ws2812)
  - [PCA9685](#pca9685)
  - [BMP180](#bmp180)

<!-- Зміст створюю в VS Code автоматично -- плагіном чи й вбудоване воно -->

<!-- Можливо, варто ще додатково структурувати, пропонуйте. В плані, що Servo наші користувачі частіше будуть використовувати, ніж Wire -->

# Вбудовані функції

Функції, що є частиною Wiring (Arduino Core).

## GPIO

Базове керування пінами -- GPIO, general purpose input-output.

### Цифрові 

```C++
pinMode(pin, mode);
```

Де mode: ``INPUT``, ``OUTPUT``, ``INPUT_PULLUP``, pin -- номер піна, написаний на платі.

```C++
int digitalRead(pin);
digitalWrite(pin, state);
```

де state: ``HIGH``, ``LOW``.

### Аналогові 

```C++
int analogRead(pin);
analogWrite(pin, value); // ШІМ (PWM)
```

де ``value`` -- від 0 (завжди вимкнено) до 255 (завжди ввімкнено). 

<!-- analogReference(source); -- пропускаємо -->

### Інші 

```C++
unsigned long pulseIn(pin, state, timeout);
```

Повертає тривалість імпульсу в мікросекундах, timeout -- таймаут в мікросекундах, після якого, якщо імпульсу не було, повертає нуль.

<!-- Додати:
tone(pin, freq_hz); noTone(pin);
tone(pin, freq_hz, duration_ms);

Чи додавати?:
byte shiftIn(dataPin, clkPin, order);
shiftOut(dataPin, clkPin, order, val);
bitOrder - MSBFIRST, LSBFIRST

 -->

## Випадкові числа

<!-- randomSeed(seed);
long random(max); //min = 0
long random(min, max);
-->


## Час 

<!--
unsigned long millis(); //<50 days
unsigned long micros(); //<70 mins
delay(miliseconds);
delayMicroseconds(useconds);
-->

## Функції мови

 <!-- Назва умовна, але не хотів умнічати 
 Не обов'язково всі -- орієнтуюся на ту шпаргалку

Bits and Bytes
byte lowByte(x); byte highByte(x);
byte bitRead(x, bitnumber);
bitWrite(x, bitnumber, bit);
bitSet(x, bitnumber);
bitClear(x, bitnumber);
bit(bitnumber);

Math
min(x, y); max(x, y);
abs(x); - Absolute value
sin(rad); cos(rad); tan(rad);
sqrt(x); pow(base, exponent);
constrain(x, min, max);
map(val, fromL, fromH, toL, toH);


Type Conversions
char(val); byte(val);
int(val); word(val);
long(val); float(val);

 -->

## Serial 

Serial також називають UART. 

<!-- 
begin(long speed);
end();
int available() //num. of bytes
available
int read(); //-1 if none available
int peek(); //read without removing
flush();
print(data); println(data);
write(byte); write(char* str);
write(byte* data, size);
serialEvent();

Є сенс про SoftSerial говорити?
--> 


## Servo

<!-- https://www.arduino.cc/reference/en/libraries/servo/ -->

## Stepper 

<!-- https://www.arduino.cc/reference/en/libraries/stepper/ -->

# Вбудовані функції -- просунуті

Тут функції для більш професійного використання.

## Переривання 

<!-- 
attachInterrupt(interrupt, ISR, mode);
mode - LOW, CHANGE, RISING, FALLING

detachInterrupt(interrupt);

interrupts();
noInterrupts(); 
-->

## EEPROM 

Вбудована постійна пам'ять, де можна зберігати налаштування вашого приладу.

<!-- 
EEPROM.h - non-volatile memory
byte read(address);
write(address, byte);
put(addr, data); get(addr, data);
EEPROM[index]; //access as array
--> 

## Wire -- I2C 

<!-- https://www.arduino.cc/reference/en/language/functions/communication/wire/ -->

## SPI 

<!-- https://www.arduino.cc/reference/en/language/functions/communication/spi/ -->



# Зовнішні бібліотеки 

## LiquidCrystal

## WS2812 

## PCA9685

## BMP180 

<!-- Додавайте, які ми вже юзаємо! -->
