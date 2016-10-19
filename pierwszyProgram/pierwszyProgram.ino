bool asd = true;
void setup() {
  // put your setup code here, to run once:
    pinMode(8, OUTPUT);//green
    pinMode(9, OUTPUT);//yellow
    pinMode(10, OUTPUT);//red
    pinMode(7,INPUT_PULLUP);

 

}

void loop() {
  // put your main code here, to run repeatedly:
   if(digitalRead(7) == HIGH){asd== true;}
   while(asd==false) 
   { 
   digitalWrite(8,HIGH);
   delay(1500);
   digitalWrite(8,LOW);
   digitalWrite(9,HIGH);
   delay(500);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
   delay(1000);
   digitalWrite(9,HIGH);
   delay(700);
   digitalWrite(10,LOW);
   digitalWrite(9,LOW);
   if(digitalRead(7) == LOW){asd==false;}
   }
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(8,LOW);
   
   
   
}
