void setup() 
{
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  pinMode(4,INPUT);
  pinMode(2,OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
   if(digitalRead(0)==LOW)
  {
    digitalWrite(2,HIGH);
  }
   if(digitalRead(4)==HIGH)
  {
    digitalWrite(2,HIGH);
  }

}
