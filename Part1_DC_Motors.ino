// Motor A
int ENA = 9;
int IN1 = 8;
int IN2 = 7;

// Motor B
int ENB = 3;
int IN3 = 5;
int IN4 = 4;

void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
}

void loop() {

  // Forward لمدة 30 ثانية
  forward();
  delay(30000);

  // Backward لمدة 60 ثانية
  backward();
  delay(60000);

  // Right & Left لمدة 60 ثانية
  for(int i = 0; i < 6; i++){

    right();
    delay(5000);

    left();
    delay(5000);

  }

  stopMotors();

  while(true);
}

void forward(){

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);

}

void backward(){

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);

}

void right(){

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);

}

void left(){

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);

  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);

}

void stopMotors(){

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);

  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);

}
