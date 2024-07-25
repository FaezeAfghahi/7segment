const int LED2=2 ;//A
const int LED3=3;//B
const int LED4=4;//C
const int LED5=5;//D
const int LED6=6;//E
const int LED7=7;//F
const int LED8=8;//G

void setup() {
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
  
  // put your setup code here, to run once:

}
void loop() {
  
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
delay(500);//

digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
delay(1000);

digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED7,HIGH);
delay(500);//0

digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(1000);

digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(500);//1

digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED5,LOW);
delay(1000);
  
digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED5,HIGH);
delay(500);//2

digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
delay(1000);

digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
delay(500);//3

digitalWrite(LED7,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED4,LOW);
delay(1000);

digitalWrite(LED7,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED4,HIGH);
delay(500);//4

digitalWrite(LED2,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
delay(1000);

digitalWrite(LED2,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
delay(500);//5

digitalWrite(LED2,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
delay(1000);

digitalWrite(LED2,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
delay(500);//6

digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(1000);

digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(500);//7

digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED6,LOW);
digitalWrite(LED4,LOW);
digitalWrite(LED5,LOW);
delay(1000);

digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED6,HIGH);
digitalWrite(LED4,HIGH);
digitalWrite(LED5,HIGH);
delay(500);//8

digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED5,LOW);
digitalWrite(LED4,LOW);
delay(1000);

digitalWrite(LED2,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED5,HIGH);
digitalWrite(LED4,HIGH);
delay(500);//9

digitalWrite(LED6,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED5,LOW);
digitalWrite(LED2,LOW);
delay(1000);//e


digitalWrite(LED6,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED5,HIGH);
digitalWrite(LED2,HIGH);
delay(500);//e

digitalWrite(LED6,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED2,LOW);
delay(1000);//F


digitalWrite(LED6,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED2,HIGH);
delay(500);//F


digitalWrite(LED6,LOW);
digitalWrite(LED7,LOW);
digitalWrite(LED8,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
delay(1000);//H


digitalWrite(LED6,HIGH);
digitalWrite(LED7,HIGH);
digitalWrite(LED8,HIGH);
digitalWrite(LED3,HIGH);
digitalWrite(LED4,HIGH);
delay(500);//H

}

