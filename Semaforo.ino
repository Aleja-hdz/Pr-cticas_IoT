int ledBlue = 7;
int ledRed = 8;
int ledYellow = 12;
int ledGreen = 13;
int stop1 = 6000;
int stop2 = 2000;
int stop3 = 4000;
int stop4 = 800;

void setup() {
  // put your setup code here, to run once:
pinMode(ledBlue,OUTPUT);
pinMode(ledRed,OUTPUT);
pinMode(ledYellow,OUTPUT);
pinMode(ledGreen,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledGreen, HIGH);
delay(stop3);
digitalWrite(ledGreen, LOW);

digitalWrite(ledYellow, HIGH);
delay(stop2);
digitalWrite(ledYellow, LOW);
delay(stop4);
digitalWrite(ledYellow, HIGH);
delay(stop4);
digitalWrite(ledYellow, LOW);
delay(stop4);
digitalWrite(ledYellow, HIGH);
delay(stop4);
digitalWrite(ledYellow, LOW);
delay(stop4);
digitalWrite(ledYellow, HIGH);
delay(stop4);
digitalWrite(ledYellow, LOW);

digitalWrite(ledRed, HIGH);
delay(stop1);
digitalWrite(ledRed, LOW);

/*delay(stop);

digitalWrite(ledBlue,HIGH);
delay(stop);
digitalWrite(ledBlue,LOW);

digitalWrite(ledRed,HIGH);
delay(stop);
digitalWrite(ledRed,LOW);

digitalWrite(ledRed,HIGH);
digitalWrite(ledBlue,HIGH);
delay(stop);
digitalWrite(ledRed,LOW);
digitalWrite(ledBlue,LOW);

digitalWrite(ledYellow,HIGH);
delay(stop);
digitalWrite(ledYellow,LOW);

digitalWrite(ledYellow,HIGH);
digitalWrite(ledBlue,HIGH);
delay(stop);
digitalWrite(ledYellow,LOW);
digitalWrite(ledBlue,LOW);

digitalWrite(ledYellow,HIGH);
digitalWrite(ledRed,HIGH);
delay(stop);
digitalWrite(ledYellow,LOW);
digitalWrite(ledRed,LOW);

digitalWrite(ledYellow,HIGH);
digitalWrite(ledRed,HIGH);
digitalWrite(ledBlue,HIGH);
delay(stop);
digitalWrite(ledYellow,LOW);
digitalWrite(ledRed,LOW);
digitalWrite(ledBlue,LOW);

digitalWrite(ledGreen,HIGH);
delay(stop);
digitalWrite(ledGreen,LOW);

digitalWrite(ledGreen,HIGH);
digitalWrite(ledBlue,HIGH);
delay(stop);
digitalWrite(ledGreen,LOW);
digitalWrite(ledBlue,LOW);

digitalWrite(ledGreen,HIGH);
digitalWrite(ledRed,HIGH);
delay(stop);
digitalWrite(ledGreen,LOW);
digitalWrite(ledRed,LOW);

digitalWrite(ledGreen,HIGH);
digitalWrite(ledRed,HIGH);
digitalWrite(ledBlue,HIGH);
delay(stop);
digitalWrite(ledGreen,LOW);
digitalWrite(ledRed,LOW);
digitalWrite(ledBlue,LOW);

digitalWrite(ledGreen,HIGH);
digitalWrite(ledYellow,HIGH);
delay(stop);
digitalWrite(ledGreen,LOW);
digitalWrite(ledYellow,LOW);

digitalWrite(ledGreen,HIGH);
digitalWrite(ledYellow,HIGH);
digitalWrite(ledBlue,HIGH);
delay(stop);
digitalWrite(ledGreen,LOW);
digitalWrite(ledYellow,LOW);
digitalWrite(ledBlue,LOW);

digitalWrite(ledGreen,HIGH);
digitalWrite(ledYellow,HIGH);
digitalWrite(ledRed,HIGH);
delay(stop);
digitalWrite(ledGreen,LOW);
digitalWrite(ledYellow,LOW);
digitalWrite(ledRed,LOW);

digitalWrite(ledGreen,HIGH);
digitalWrite(ledYellow,HIGH);
digitalWrite(ledRed,HIGH);
digitalWrite(ledBlue,HIGH);
delay(stop);
digitalWrite(ledGreen,LOW);
digitalWrite(ledYellow,LOW);
digitalWrite(ledRed,LOW);
digitalWrite(ledBlue,LOW);*/
}