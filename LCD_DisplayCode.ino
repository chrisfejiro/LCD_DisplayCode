#include <LiquidCrystal.h>//declaring the lcd Library
LiquidCrystal lcd (12,11,10,9,8,7); //declaring the pin numbers of arduino pins corresponding with led pin which follow the order of(reg,enable,d1,d2,d3,d4).we are using it in 4 bit mode
//in terms of pin (RS,E,D4,D5,D6,D7)
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);//set up LCD's number of columns and rows
lcd.clear();  //clears the screen
}


void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("hello precious");//print the hello,world statement on lcd
  delay(1000); //wait for a second 
  lcd.clear();//clear the screen
  delay(500);//wait for a second

}
