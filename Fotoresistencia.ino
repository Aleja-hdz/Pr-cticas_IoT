int idr = A5;
int valor;
int led = 10;

void setup() {
  Serial.begin(9600);
  pinMode(idr, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int valor = analogRead(idr);
  Serial.println(valor);
  delay(100);

  if(valor < 250){
    digitalWrite(led, LOW);
  }
  else{
    digitalWrite(led, HIGH);
    delay(1000);
  }
}