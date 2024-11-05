int rojo = 2, verde = 3, azul = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rojo, 255);
  digitalWrite(verde, 0);
  digitalWrite(azul, 0);
  delay(2000);

  /*digitalWrite(rojo, 0);
  digitalWrite(azul, 111);
  digitalWrite(verde, 0);
  delay(2000);

  digitalWrite(rojo, 0);
  digitalWrite(azul, 0);
  digitalWrite(verde, 220);
  delay(2000);*/
}
