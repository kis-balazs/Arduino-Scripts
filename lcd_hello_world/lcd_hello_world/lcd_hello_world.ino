  #include <LiquidCrystal.h>

LiquidCrystal lcd(0, 1, 8, 9, 10, 11); 
void setup()
{
lcd.begin(16, 2);
}

void loop()
{

char a[] = "hello world";
for(int i = 0; i < 11; i++)
{
  //lcd.setCursor(1, 1);
  //lcd.write("hello world");
  lcd.setCursor(0, 2);  
  lcd.write(a[i]);
  delay(750);
  lcd.clear();
}
}
