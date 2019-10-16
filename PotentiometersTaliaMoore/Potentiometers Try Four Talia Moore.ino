#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);
 int ledPin=9;
int potPin=A0;
int brightness;
int display;
int potValue;


void setup()
{
	pinMode(ledPin, OUTPUT);
	pinMode (potPin, INPUT);
	lcd.init();
	lcd.backlight();
    lcd.begin(16, 2);
	lcd.print ("Brightness");
	}

void loop()
{
	
	lcd.setCursor(0,1);
	potValue=analogRead(potPin);
	brightness=map(potValue, 0, 1024, 0, 255);
	analogWrite(ledPin, brightness);

	display=map(brightness, 0, 255, 0, 10);
	lcd.print(display); 
	
	
}

