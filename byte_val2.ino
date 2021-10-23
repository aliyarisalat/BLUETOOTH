
byte val;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:

  int a=0;
  if(Serial.available()>a)
    {
      val=Serial.read();
      Serial.println(val);
      if(val==49)
        digitalWrite(2,HIGH);

      else if(val==50)
        digitalWrite(2,LOW);
    }
  }
