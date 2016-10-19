int odczytanaWartosc1 = 0;
int odczytanaWartosc2 = 0;//Zmienna do przechowywania odczytu ADC
int prog = 0; //Próg włączenia światła - ustawiany potencjometrem
 
void setup() {
  pinMode(8, OUTPUT); //Konfiguracja wyjść pod diodę LED
}
 
void loop() {
  odczytanaWartosc1 = analogRead(A5);//Odczytanie wartości z ADC
  odczytanaWartosc2 = analogRead(A3);
  prog = analogRead(A4);//Odczytanie wartości z ADC  
  
  if (odczytanaWartosc1 < prog && odczytanaWartosc2 < prog) { //Czy jest ciemniej od ustawionego progu?
     digitalWrite(8, HIGH);//Włączenie diody    
  } else {
     digitalWrite(8, LOW);//Wyłączenie diody      
  }
  
  delay(50);
}
