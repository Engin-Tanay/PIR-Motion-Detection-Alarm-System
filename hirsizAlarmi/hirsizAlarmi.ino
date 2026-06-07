int pirsensor = 7;
int buzzer = 6;
int led = 5;
int deger = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(pirsensor,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
deger = digitalRead(pirsensor);
if (deger==HIGH)
{
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(500);
}
else
{
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(500);
}
}
