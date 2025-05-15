#include <Arduino.h>

int echoPin = D0;
int trigPin = D1;
int redPin = D4;
int greenPin = D5;


long duration;
int distance;

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

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
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }else{
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
  delay(1000); 
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
