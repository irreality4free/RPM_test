int current = millis();
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int current = millis();
}

void loop() {
  // put your main code here, to run repeatedly:
  long current = millis();
  long count = 0;
  int last = 0;
  int d  = 0;
  for (long i = 0; i < 1000000; i++){
    d = digitalRead(A1);
    if (d != last )
      count += 1;
    last = d;  
  }
  Serial.println(count);
  Serial.println(float(count) * 1000 / (millis() - current));
  Serial.println(millis() - current);
  Serial.println();
  
}
