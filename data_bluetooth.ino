
int data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    data=Serial.read();
    Serial.print(data);
    Serial.print("\n");

    if(data==1){
      digitalWrite(8,HIGH);
      
    }
    else if(data==0){
      digitalWrite(8,LOW);
    }

  }
    
  }
  
  
