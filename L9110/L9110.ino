//Define pins for motor output
int INA = 9;
int INB = 10;
 
void setup()
{
pinMode(INA,OUTPUT);
pinMode(INB,OUTPUT);
}
 
void loop()
{
//Control motor with max speed, one side of motor has to be HIGH, other LOW
digitalWrite(INA,LOW);
digitalWrite(INB,HIGH);
delay(3000);
digitalWrite(INA,HIGH);
digitalWrite(INB,LOW);
delay(3000);

//PWM modulation, control motor speed in range 0 to 255
analogWrite(INA, 0);
analogWrite(INB, 100);
delay(1000);
analogWrite(INA, 0);
analogWrite(INB, 200);
delay(1000);
analogWrite(INA, 0);
analogWrite(INB, 255);
delay(1000);
analogWrite(INA, 100);
analogWrite(INB, 0);
delay(1000);
analogWrite(INA, 200);
analogWrite(INB, 0);
delay(1000);
analogWrite(INA, 255);
analogWrite(INB, 0);
delay(1000);

}
