#include <LiquidCrystal_I2C.h>

#include <LiquidCrystal.h>
int f=0;

 LiquidCrystal_I2C lcd(39, 16, 2);

void setup()
{
 lcd.init();
lcd.backlight();
  
   lcd.print("loding force...");
  delay(500);
  pinMode(A0,INPUT);
}

void loop()
{

  f=analogRead(A0);
  
  lcd.print(" force=" );
  
lcd.print(f);
 lcd.print("       ");  
  lcd.home();
  
}