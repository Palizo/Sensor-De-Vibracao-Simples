int led_alarme = 3;
int sensor = A0;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led_alarme, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(sensor);
  Serial.print("Valor lido: ");
  Serial.println(valor);
  delay(400);

  if(valor > 100) {
  digitalWrite(led_alarme, HIGH);
  }
  if(valor < 101) {
  digitalWrite(led_alarme, LOW);
}

}
