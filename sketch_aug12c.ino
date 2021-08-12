int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;

int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

int delayVal = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

}

void loop() {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
//
//  // put your main code here, to run repeatedly:
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
  delay(delayVal);
//
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
  delay(delayVal);

  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  delay(delayVal);

  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  delay(delayVal);


  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  delay(delayVal);

  digitalWrite(pinA, LOW);//CENTER TOP
  digitalWrite(pinB, HIGH);//RIGHT TOP
  digitalWrite(pinC, LOW);//RIGHT BOTTOM
  digitalWrite(pinD, LOW);//CENTER BOTTOM
  digitalWrite(pinE, HIGH);// LEFT BOTTOM
  digitalWrite(pinF, LOW);//LEFT TOP
  digitalWrite(pinG, LOW); //CENTER CENTER
  delay(delayVal);
//
  digitalWrite(pinA, LOW);//CENTER TOP
  digitalWrite(pinB, HIGH);//RIGHT TOP
  digitalWrite(pinC, LOW);//RIGHT BOTTOM
  digitalWrite(pinD, LOW);//CENTER BOTTOM
  digitalWrite(pinE, LOW);// LEFT BOTTOM
  digitalWrite(pinF, LOW);//LEFT TOP
  digitalWrite(pinG, LOW); //CENTER CENTER
  delay(delayVal);
//
  digitalWrite(pinA, LOW);//CENTER TOP
  digitalWrite(pinB, LOW);//RIGHT TOP
  digitalWrite(pinC, LOW);//RIGHT BOTTOM
  digitalWrite(pinD, HIGH);//CENTER BOTTOM
  digitalWrite(pinE, HIGH);// LEFT BOTTOM
  digitalWrite(pinF, HIGH);//LEFT TOP
  digitalWrite(pinG, HIGH); //CENTER CENTER
  delay(delayVal);
//
  digitalWrite(pinA, LOW);//CENTER TOP
  digitalWrite(pinB, LOW);//RIGHT TOP
  digitalWrite(pinC, LOW);//RIGHT BOTTOM
  digitalWrite(pinD, LOW);//CENTER BOTTOM
  digitalWrite(pinE, LOW);// LEFT BOTTOM
  digitalWrite(pinF, LOW);//LEFT TOP
  digitalWrite(pinG, LOW); //CENTER CENTER
  delay(delayVal);


  digitalWrite(pinA, LOW);//CENTER TOP
  digitalWrite(pinB, LOW);//RIGHT TOP
  digitalWrite(pinC, LOW);//RIGHT BOTTOM
  digitalWrite(pinD, LOW);//CENTER BOTTOM
  digitalWrite(pinE, HIGH);// LEFT BOTTOM
  digitalWrite(pinF, LOW);//LEFT TOP
  digitalWrite(pinG, LOW); //CENTER CENTER
  delay(delayVal);
}
