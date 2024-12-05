//YouTube|Tech at Home

int a=8;
int b=9;

void setup() 
{
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop()
{
  //Forward
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
delay(1000);

//Backward
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
delay(1000);
}
