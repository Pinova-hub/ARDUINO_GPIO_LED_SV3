#define ZAMAN 10

int Led [10] = {22,23,24,25,26,27,28,29,30,31};

void setup() {

    for(int i=0; i<10; i++) 
    {
      pinMode(Led [i], OUTPUT);
    }

}

void loop(){
  
 int Sayici = 0; 
                                    
    while (Sayici < 9 ) 
    
    {
      digitalWrite(Led [Sayici], HIGH);             
      delay(ZAMAN);
      digitalWrite(Led [Sayici], LOW);
      delay (ZAMAN);
      Sayici++;                                               
    }
    
    while (Sayici>= 1)
    
    {
      digitalWrite(Led[Sayici], HIGH);
      delay(ZAMAN);
      digitalWrite(Led[Sayici], LOW);
      delay (ZAMAN);
      Sayici--;                                                             
    }

}
