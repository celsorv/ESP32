
int LED_INTERNO = 2;

void setup () { 
  pinMode (LED_INTERNO, OUTPUT); 
} 

void loop () { 
  
  for (int i = 0; i < 2; i++) {
    digitalWrite (LED_INTERNO, HIGH); 
    delay(100); 
    digitalWrite (LED_INTERNO, LOW);
    delay(100);
  }
  
  delay(900);
  
}
