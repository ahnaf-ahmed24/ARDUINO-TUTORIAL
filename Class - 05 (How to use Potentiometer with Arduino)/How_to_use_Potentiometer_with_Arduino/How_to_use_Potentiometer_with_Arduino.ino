int pot = A0;
int x;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);

}

void loop() {
  x = analogRead(A0);
  Serial.println(x);
  delay(300);
}
