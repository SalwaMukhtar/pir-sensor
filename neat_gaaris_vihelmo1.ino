int led = 2;
int pir = 3;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
  Serial.begin(9600);
}

void loop()
{
  float value = digitalRead(pir);
  Serial.println(value);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2,HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
if (value == 1)
 {digitalWrite(led,HIGH);   
}

else
 {
  digitalWrite(led,LOW);
}
}
 