void setup() {
  pinMode(7,OUTPUT);
}

void loop() {
  digitalWrite(7,0);
  delay(1000);
  digitalWrite(7,1);
  int cnt = 5;
  while(cnt--){
     delay(100);
     digitalWrite(7,0);
     delay(100);
     digitalWrite(7,1);
  }
  while(1){}
}
