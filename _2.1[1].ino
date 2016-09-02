void setup() {
  // put your setup code here, to run once:
pinMode (8, OUTPUT);
pinMode (9, OUTPUT);
pinMode (10, OUTPUT);
pinMode (11, OUTPUT);
pinMode (12, OUTPUT);
pinMode (13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (8,HIGH);
digitalWrite (9,HIGH);
digitalWrite (10,HIGH);
digitalWrite (11,LOW);
digitalWrite (12,LOW);
digitalWrite (13,LOW);
}
