// Automatic street light

int Relay1 = 8;
int Relay2 = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
pinMode(Relay1, OUTPUT);
pinMode(Relay2, OUTPUT);

digitalWrite(Relay1, HIGH);
digitalWrite(Relay2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(A0);
if(x<=512)
{
  digitalWrite(Relay1, LOW); // lights turned on
  digitalWrite(Relay2, LOW); // lights turned on
  delay(2000);
  
}
else
{
  digitalWrite(Relay1, HIGH); // lights turned off
  digitalWrite(Relay1, HIGH); // lights turned off
  delay(2000);
}
}
