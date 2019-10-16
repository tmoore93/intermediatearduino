int motorPin=9;
int potPin=A0;
int potValue;
int motorValue;
void setup()
{
Serial.begin(9600);
pinMode(potPin, INPUT);
pinMode(motorPin, OUTPUT);
}

void loop()
{
potValue=analogRead(potPin);
motorValue=map(potValue, 0, 1023, 0, 255);
analogWrite(motorPin, motorValue);
Serial.println(potValue);
}

