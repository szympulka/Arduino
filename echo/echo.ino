#define trigPin 12
#define echoPin 11
#define G1LED 3
#define G2LED 2
#define Y1LED 4
#define Y2LED 5
#define R1LED 6
#define R2LED 7
#define BLED 8

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT); //Pin, do którego podłączymy trig jako wyjście
  pinMode(echoPin, INPUT); //a echo, jako wejście
  pinMode(G1LED , OUTPUT);
  pinMode(G2LED , OUTPUT);
  pinMode(Y1LED, OUTPUT);
  pinMode(Y2LED , OUTPUT);
  pinMode(R1LED , OUTPUT);
  pinMode(R2LED , OUTPUT);
  pinMode(BLED , OUTPUT);
}
 
void loop() {  
  int jakDaleko = zmierzOdleglosc();
  if(jakDaleko <= 3)
  {
    digitalWrite(G1LED,HIGH);
    digitalWrite(G2LED,HIGH);
    digitalWrite(Y1LED,HIGH);
    digitalWrite(Y2LED,HIGH);
    digitalWrite(R1LED,HIGH);
    digitalWrite(R2LED,HIGH);
    digitalWrite(BLED,HIGH);
  }
    else if(jakDaleko <6)
  {
    digitalWrite(G1LED,HIGH);
    digitalWrite(G2LED,HIGH);
    digitalWrite(Y1LED,HIGH);
    digitalWrite(Y2LED,HIGH);
    digitalWrite(R1LED,HIGH);
    digitalWrite(R2LED,HIGH);
    digitalWrite(BLED,LOW);
  }
   else if(jakDaleko <8)
  {
    digitalWrite(G1LED,HIGH);
    digitalWrite(G2LED,HIGH);
    digitalWrite(Y1LED,HIGH);
    digitalWrite(Y2LED,HIGH);
    digitalWrite(R1LED,HIGH);
    digitalWrite(R2LED,LOW);
    digitalWrite(BLED,LOW);
  }
    else if(jakDaleko <10)
  {
    digitalWrite(G1LED,HIGH);
    digitalWrite(G2LED,HIGH);
    digitalWrite(Y1LED,HIGH);
    digitalWrite(Y2LED,HIGH);
    digitalWrite(R1LED,LOW);
    digitalWrite(R2LED,LOW);
    digitalWrite(BLED,LOW);
  } 
  else if(jakDaleko <14)
  {
    digitalWrite(G1LED,HIGH);
    digitalWrite(G2LED,HIGH);
    digitalWrite(Y1LED,HIGH);
    digitalWrite(Y2LED,LOW);
    digitalWrite(R1LED,LOW);
    digitalWrite(R2LED,LOW);
    digitalWrite(BLED,LOW);
  } else if(jakDaleko <17)
  {
    digitalWrite(G1LED,HIGH);
    digitalWrite(G2LED,HIGH);
    digitalWrite(Y1LED,LOW);
    digitalWrite(Y2LED,LOW);
    digitalWrite(R1LED,LOW);
    digitalWrite(R2LED,LOW);
    digitalWrite(BLED,LOW);
  }
      else if (jakDaleko < 20)
  {
    digitalWrite(G1LED,HIGH);
    digitalWrite(G2LED,LOW);
    digitalWrite(Y1LED,LOW);
    digitalWrite(Y2LED,LOW);
    digitalWrite(R1LED,LOW);
    digitalWrite(R2LED,LOW);
    digitalWrite(BLED,LOW);
  }
    else
  {
    digitalWrite(G1LED,LOW);
    digitalWrite(G2LED,LOW);
    digitalWrite(Y1LED,LOW);
    digitalWrite(Y2LED,LOW);
    digitalWrite(R1LED,LOW);
    digitalWrite(R2LED,LOW);
    digitalWrite(BLED,LOW);
  }
  
  
} 
 
int zmierzOdleglosc() {
  long czas, dystans;
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  czas = pulseIn(echoPin, HIGH);
  dystans = czas / 58;
 
  return dystans;
}

