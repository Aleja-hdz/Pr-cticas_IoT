#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
int LDR = A5;
int valor;
int LED = 13;
int trig = 10;
int ecko = 9;
int duration;
int distance;

void setup() {
lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(ecko, INPUT);

}

void loop() {
  /*
lcd.setCursor(3,0);
  int valor = analogRead(LDR);
  Serial.println(valor);
  delay(1000);
  if(valor <= 400){
    digitalWrite(LED, LOW);
    lcd.print("Apagado");
  }else{
    digitalWrite(LED, HIGH);
    lcd.print("Encendido");
    //lcd.scrollDisplayLeft();
  }
*/

  digitalWrite(trig, HIGH);
  delay(100);
  digitalWrite(trig, LOW);

  duration = pulseIn (ecko, HIGH);
  distance = duration / 58.2;

  lcd.setCursor(0,0);
  lcd.print("El obj esta a:");
  lcd.print(distance);

  Serial.print(distance);
  Serial.print("\nCentímetros: ");
  delay(2000);

  if(distance <= 10){
    digitalWrite(LED, HIGH);
    delay(100);
  }else{
    digitalWrite(LED, LOW);
    delay(100);
  }
}
