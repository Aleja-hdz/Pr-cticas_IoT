int ledRed1 = 8;
int ledYellow1 = 12;
int ledGreen = 13;
int ledBlue = 7;
int ledRed2 = 4;
int ledYellow2 = 2;
int delay1 = 80;
int delay1_1 = 500;
int delay2 = 200;
int delay2_2 = 450;

void setup() {
  pinMode(ledRed1, OUTPUT);
  pinMode(ledYellow1, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledRed2, OUTPUT);
  pinMode(ledYellow2, OUTPUT);
}

void loop() {
  for(int i = 0; i < 2; i ++){
  digitalWrite(ledRed1, HIGH);
  delay(delay1);
  digitalWrite(ledRed1, LOW);

  digitalWrite(ledYellow1, HIGH);
  delay(delay1);
  digitalWrite(ledYellow1, LOW);

  digitalWrite(ledGreen, HIGH);
  delay(delay1);
  digitalWrite(ledGreen, LOW);

  digitalWrite(ledBlue, HIGH);
  delay(delay1);
  digitalWrite(ledBlue, LOW);

  digitalWrite(ledRed2, HIGH);
  delay(delay1);
  digitalWrite(ledRed2, LOW);

  digitalWrite(ledYellow2, HIGH);
  delay(delay1_1);
  digitalWrite(ledYellow2, LOW);

  digitalWrite(ledRed2, HIGH);
  delay(delay1);
  digitalWrite(ledRed2, LOW);

  digitalWrite(ledBlue, HIGH);
  delay(delay1);
  digitalWrite(ledBlue, LOW);

  digitalWrite(ledGreen, HIGH);
  delay(delay1);
  digitalWrite(ledGreen, LOW);

  digitalWrite(ledYellow1, HIGH);
  delay(delay1);
  digitalWrite(ledYellow1, LOW);

  digitalWrite(ledRed1, HIGH);
  delay(delay1_1);
  digitalWrite(ledRed1, LOW);
  }


  digitalWrite(ledRed1, HIGH);
  delay(delay2);
  digitalWrite(ledRed1, LOW);

  digitalWrite(ledYellow1, HIGH);
  delay(delay2);
  digitalWrite(ledYellow1, LOW);

  digitalWrite(ledGreen, HIGH);
  delay(delay2);
  digitalWrite(ledGreen, LOW);

  digitalWrite(ledBlue, HIGH);
  delay(delay2);
  digitalWrite(ledBlue, LOW);

  digitalWrite(ledRed2, HIGH);
  delay(delay2);
  digitalWrite(ledRed2, LOW);

  digitalWrite(ledYellow2, HIGH);
  delay(delay2);
  digitalWrite(ledYellow2, LOW);

  digitalWrite(ledRed2, HIGH);
  delay(delay2_2);
  digitalWrite(ledRed2, LOW);

  digitalWrite(ledBlue, HIGH);
  delay(delay2);
  digitalWrite(ledBlue, LOW);

  digitalWrite(ledGreen, HIGH);
  delay(500);
  digitalWrite(ledGreen, LOW);

  delay(500);
}
