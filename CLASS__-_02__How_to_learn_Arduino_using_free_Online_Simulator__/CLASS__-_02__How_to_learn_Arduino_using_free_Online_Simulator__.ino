int led1 = 7;

void setup(){
  pinMode(7, OUTPUT);
}

void loop(){
  digitalWrite(led1, HIGH);
      delay(200);
  digitalWrite(led1, LOW);
      delay(200);
}
