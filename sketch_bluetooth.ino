int m1=A0;//Motor DC terhubung pada kaki A0 Arduino
int h=255;//5 Volt
int l=0;//0 Volt
String motion;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(m1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Silahkan ketik 'p' untuk memutar, 's' untuk berhenti");
  while(Serial.available()==0) {}

  motion=Serial.readString();
  if(motion=="p") {
    analogWrite(m1,l);
  }
  if(motion=="s") {
    analogWrite(m1,h);
  }
}
