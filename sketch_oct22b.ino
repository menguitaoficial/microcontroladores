const byte led = 10;

void setup(){
  pinMode (led, OUTPUT);
  
}

void loop(){
  digitalWrite(led, HIGH);
  delay (100);
  digitalWrite(led, LOW);
  delay(100);
}