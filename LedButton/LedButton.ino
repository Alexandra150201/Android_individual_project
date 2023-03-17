int BEC = 13; //pin led
int BUTTON = 4; //pin button
int buttonRead = 0;
int dt = 100; //delay time

void setup() {

  Serial.begin(9600);
  pinMode(BEC, OUTPUT);
  
  pinMode(BUTTON, INPUT);
}

void loop() {

  buttonRead = digitalRead(BUTTON);
  Serial.println(buttonRead);
  delay(dt);
  if(buttonRead == 1) {
    digitalWrite(BEC, HIGH);
  }
  else {
    digitalWrite(BEC, LOW);
  }
}