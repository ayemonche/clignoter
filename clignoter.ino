int ledb=2;
int ledv=3;
int ledj=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledb,OUTPUT);
  pinMode(ledv,OUTPUT);
  pinMode(ledj,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledb,HIGH);
  digitalWrite(ledj,LOW);
  delay(1500);
  digitalWrite(ledb,LOW);
  digitalWrite(ledv,HIGH);
  delay(1500);
  digitalWrite(ledb,LOW);
  digitalWrite(ledv,LOW);
  digitalWrite(ledj,HIGH);
  delay(1500);
  
  
}
