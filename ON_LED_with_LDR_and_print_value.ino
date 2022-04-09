#define LDR A0// connect an LDR to A0 pin of Arduino
#define LED 8 // connect an LED to pin # 8 of Arduino
float x;
void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() 
{
  x=analogRead(A0);
  x= x/10;
  Serial.print("Value");
  Serial.println(x);
  if (x<60)
  {digitalWrite(LED,HIGH);}
  else
  {digitalWrite(LED,LOW);}
  delay(1000);
}
