#include <LiquidCrystal.h>
#define rs 12
#define e 11
#define d4 5
#define d5 4
#define d6 3
#define d7 2



LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

bool hello = false;

void setup(){
  lcd.begin(16, 2);
  lcd.print("Hello World");
}

void loop(){
  delay(2000);

  lcd.clear();

  if (hello){
    lcd.print("Hello World");
  } else {
    lcd.print("Bom dia");
  }

  hello = !hello;
}