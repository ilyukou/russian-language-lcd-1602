#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

byte i2[8] = { // Й
  B01110,
  B00000,
  B10011,
  B10011,
  B10101,
  B10101,
  B11001,
  B00000
};

byte g[8] = { // Г
  B11111,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B00000    
};

byte l[8] = { // Л
  B00100,
    B00100,
    B01010,
    B01010,
    B10001,
    B10001,
    B10001,
    B00000    
};
byte i[8] = { // И
  B10001,
    B10011,
    B10011,
    B10101,
    B10101,
    B11001,
    B10001,
    B00000
};

byte zh[8] ={ // Ж
    B10101,
    B10101,
    B01110,
    B00100,
    B00100,
    B01110,
    B10101,
    B00000
};

byte ya[8] = { // Я
  B01111,
  B10001,
  B10001,
  B01111,
  B00101,
  B01001,
  B10001,
  B00000
};

byte d[8] = { // Д
  B00011,
  B00101,
  B01001,
  B01001,
  B01001,
  B11111,
  B10001,
  B00000
};


void setup() {
    Wire.begin();
    lcd.begin();                     
    lcd.backlight();// Включаем подсветку дисплея
    lcd.setCursor(8, 1);
    Serial.begin(9600);
  
    lcd.createChar (0, i2);
    lcd.createChar (1, g);
    lcd.createChar (2, l);
    lcd.createChar (3, d);
    lcd.createChar (4, i);
    lcd.createChar (5, ya);
    lcd.createChar (6, zh);
}

void loop() {
   lcd.setCursor(0,0);
   
   lcd.print("HACTPO");
   lcd.print(char(0)); 
   lcd.print("KA");
   delay(1000);
   lcd.clear();  
   
   lcd.print("Y");
   lcd.print(char(1)); 
   lcd.print("O");
   lcd.print(char(2)); 
   delay(1000);
   lcd.clear();
   
   lcd.print(char(3));
   lcd.print(char(2));
   lcd.print(char(4));
   lcd.print("HA");
   delay(1000);
   lcd.clear();

   lcd.print("BPEM");
   lcd.print(char(5));
   delay(1000);
   lcd.clear();
   
   lcd.print("PE");
   lcd.print(char(6));
   lcd.print(char(4));  
   lcd.print("M");
   delay(1000);
   lcd.clear();
}
