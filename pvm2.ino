/*pvm ölçer bu kod
 * fizik projesidir
 * filiz akın
 * 11/C 9998
 */

const int led1 = 4;
const int led2 = 5;
const int led3 = 6;
const int led4 = 7;
const int led5 = 8;
const int led6 = 9;
const int led7 = 10;
const int led8 = 11;
const int pot = A0;

unsigned long eski = 0;
int sure = 1000;
int ledstat = HIGH;

unsigned long eski1 = 0;
int sure1 = 500;
int ledstat1 = HIGH;

unsigned long eski2 = 0;
int sure2 = 250;
int ledstat2 = HIGH;

unsigned long eski3 = 0;
int sure3 = 100;
int ledstat3 = HIGH;

unsigned long eski4 = 0;
int sure4 = 50;
int ledstat4 = HIGH;

unsigned long eski5 = 0;
int sure5 = 25;
int ledstat5 = HIGH;

unsigned long eski6 = 0;
int sure6 = 0.00001;
int ledstat6 = HIGH;


void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned long suan = millis();
if(suan-eski >= sure) {
  if(ledstat== LOW) {
    digitalWrite(led1, HIGH);
    ledstat = HIGH;
  }    else {
    digitalWrite(led1, LOW);
    ledstat = LOW;
    }
    eski=suan;
  }
 
if(suan-eski1 >= sure1) {
  if(ledstat1==LOW) {
    digitalWrite(led2, HIGH);
    ledstat1 = HIGH;
    }
    else {
      digitalWrite(led2, LOW);
      ledstat1 = LOW;
    }
    eski1=suan;
}
if(suan-eski2 >= sure2) {
  if(ledstat2== LOW) {
    digitalWrite(led3,HIGH);
    ledstat2= HIGH;
  }
  else {
    digitalWrite(led3, LOW);
    ledstat2= LOW;
  }
  eski2=suan;
  }
  
if(suan-eski3 >= sure3) {
  if(ledstat3== LOW) {
    digitalWrite(led4, HIGH);
    ledstat3= HIGH;
  }
  else {
    digitalWrite(led4,LOW);
    ledstat3 = LOW;
  }
  eski3=suan;
}
 
if(suan-eski4 >= sure4) {
  if(ledstat4== LOW) {
    digitalWrite(led5, HIGH);
    ledstat4= HIGH;
  }
  else {
    digitalWrite(led5,LOW);
    ledstat4 = LOW;
  }
  eski4=suan;
}   
if(suan-eski5 >= sure5) {
  if(ledstat5== LOW) {
    digitalWrite(led6, HIGH);
    ledstat5= HIGH;
  }
  else {
    digitalWrite(led6,LOW);
    ledstat5 = LOW;
  }
  eski5=suan;
}
 
unsigned long simdi = micros();
if(suan-eski6 >= sure6) {
  if(ledstat6== LOW) {
    digitalWrite(led7, HIGH);
    ledstat6= HIGH;
  }
  else {
    digitalWrite(led7,LOW);
    ledstat6 = LOW;
  }
  eski6=simdi;
}
 
int pot= analogRead(pot);
pot=map(pot,0,1023,0,255);
analogWrite(led8 , pot);
}

