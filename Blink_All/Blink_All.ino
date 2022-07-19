
void setup() {
  for (int i = 2; i < 14; i++){
    pinMode(i, OUTPUT);
  }
}


void loop() {
  for (int i = 2; i < 14; i++){
     digitalWrite(i, HIGH);
  }
    
  delayMicroseconds(500);
  
  for (int i = 2; i < 14; i++){
     digitalWrite(i, LOW);
  }   
  delayMicroseconds(500);                       
}
