int y = 9;
int s = 10;
int k = 11;
void setup() {
  pinMode(y , OUTPUT);
  pinMode(s , OUTPUT);
  pinMode(k , OUTPUT);
}

void loop() {
  digitalWrite(k , HIGH);
  delay(10000);
  digitalWrite(s , HIGH);
  delay(10000);
  digitalWrite(k , LOW);
  digitalWrite(s , LOW);
  delay(2000);
  digitalWrite(y , HIGH);
  delay(5000);
  digitalWrite(y , LOW);
}
