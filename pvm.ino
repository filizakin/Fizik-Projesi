/*pvm ölçer bu kod
 * fizik projesidir
 * filiz akın
 * 11/C 9998
 */

const int led1 = 13;
const int led2 = 4;
const int led3 = 6;
const int led4 = 8;
const int led5 = 10;
const int led6 = 12;
const int led7 = 14;
const int led8 = 16;

unsigned long eski = 0;
int sure = 1000;
int ledstat = HIGH;

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
 
}

