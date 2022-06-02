#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  char array[] = {"Hello"};
  int size = sizeof array / sizeof array[0];
  int speed = 500;
  for (int i = 0; i < size; i++) {
    delay(speed);
    lcd.print( array[i]);
  }
}
