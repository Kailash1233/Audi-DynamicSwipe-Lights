int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
int LED7 = 8;
int LED8 = 9;
int LED9 = 10;
int LED10 = 11;
int LED11 = 12;
int LED12 = 13;
int LED13 = A0;
int LED14 = A1;
int LED15 = A2;
int LED16 = A3;
int t=20;



void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
   pinMode(LED6, OUTPUT);
   pinMode(LED7, OUTPUT);
   pinMode(LED8, OUTPUT);
   pinMode(LED9, OUTPUT);
   pinMode(LED10, OUTPUT);
   pinMode(LED11, OUTPUT);
   pinMode(LED12, OUTPUT);
   pinMode(LED13, OUTPUT);
   pinMode(LED14, OUTPUT);
   pinMode(LED15, OUTPUT);
   pinMode(LED16, OUTPUT);
}


void loop() {
  digitalWrite(LED16, HIGH);     
  delay(t);                  
  digitalWrite(LED15, HIGH);    
  delay(t);                    
  digitalWrite(LED14, HIGH);    
  delay(t);                  
  digitalWrite(LED13, HIGH);    
  delay(t);                  
  digitalWrite(LED12, HIGH);    
  delay(t);                 
  digitalWrite(LED11, HIGH);    
  delay(t);                  
  digitalWrite(LED10, HIGH); 
  delay(t);                 
  digitalWrite(LED9, HIGH);  
  delay(t);                  
  digitalWrite(LED8, HIGH);    
  delay(t);                 
  digitalWrite(LED7, HIGH);    
  delay(t);                 
  digitalWrite(LED6, HIGH);  
  delay(t);               
  digitalWrite(LED5, HIGH); 
  delay(t);  
  digitalWrite(LED4, HIGH);    
  delay(t);
  digitalWrite(LED3, HIGH);    
  delay(t);
  digitalWrite(LED2, HIGH);    
  delay(t);
  digitalWrite(LED1, HIGH);    
 delay(t);
  digitalWrite(LED16, LOW);   
  delay(t);                 
  digitalWrite(LED15, LOW);    
  delay(t);               
  digitalWrite(LED14, LOW);   
 delay(t);                 
  digitalWrite(LED13, LOW);  
  delay(t);                  
  digitalWrite(LED12, LOW);    
  delay(t);                
  digitalWrite(LED11, LOW);    
  delay(t);                  
  digitalWrite(LED10, LOW);   
  delay(t);               
  digitalWrite(LED9, LOW);     
  delay(t);               
  digitalWrite(LED8, LOW);  
 delay(t);                 
  digitalWrite(LED7, LOW);  
  delay(t);                  
  digitalWrite(LED6, LOW);     
  delay(t);                  
  digitalWrite(LED5, LOW);   
  delay(t); 
  digitalWrite(LED4, LOW);    
  delay(t);
  digitalWrite(LED3, LOW);    
  delay(t);
  digitalWrite(LED2, LOW);    
  delay(t);
  digitalWrite(LED1, LOW);    
  delay(t);
}
