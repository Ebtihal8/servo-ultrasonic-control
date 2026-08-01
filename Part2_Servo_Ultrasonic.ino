#include <Servo.h>

// -------------------- Motor A --------------------
int ENA = 9;
int IN1 = 8;
int IN2 = 7;

// -------------------- Motor B --------------------
int ENB = 3;
int IN3 = 5;
int IN4 = 4;

// -------------------- Servo --------------------
Servo myServo;

// -------------------- Ultrasonic --------------------
const int trigPin = 11;
const int echoPin = 12;

long duration;
int distance;

void setup() {

  // Motor Pins
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);

  // Servo
  myServo.attach(10);
  myServo.write(0);

  // Ultrasonic
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop() {

  // Check before starting
  if (checkObstacle()) return;

  // Forward 30 sec
  forward();
  delay(30000);

  if (checkObstacle()) return;

  // Backward 60 sec
  backward();
  delay(60000);

  if (checkObstacle()) return;

  // Right & Left for 60 sec
  for (int i = 0; i < 6; i++) {

    right();
    delay(5000);

    if (checkObstacle()) return;

    left();
    delay(5000);

    if (checkObstacle()) return;
  }

  stopMotors();

  while (true);
}

// ===================================================
// Read Distance
// ===================================================
int getDistance() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.println(distance);

  return distance;
}

// ===================================================
// Check Obstacle
// ===================================================
bool checkObstacle() {

  if (getDistance() <= 10) {

    stopMotors();

    myServo.write(90);

    while (true);

    return true;
  }

  return false;
}

// ===================================================
// Motor Functions
// ===================================================
void forward() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void backward() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void right() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void left() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void stopMotors() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
