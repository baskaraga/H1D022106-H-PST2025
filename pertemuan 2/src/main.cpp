#include <Arduino.h>

int echoPin = D0;
int trigPin = D1;
int ledPin = D4;


long duration;
int distance;

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration*0.034/2;
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance <=10){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
