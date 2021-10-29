void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hello World");
  Serial.print("\n");

  for(int x = 0; x < 64; x++){
    Serial.print(x);
    Serial.print("\t\t");

    Serial.print(x, DEC);
    Serial.print("\t");

    Serial.print(x, HEX);
    Serial.print("\t");

    Serial.print(x, BIN);
    Serial.print("\t");
  }

  delay(5000);

}
