#include<Arduino>

int ldrPin = A0;
int buttonPin = 2;
int ledPin  = 8;

int threshold = 900;

void setup(){
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  
}

void loop(){
  int lightLevel = analogRead(ldrPin);
  bool buttonState = digitalRead(buttonPin);
  
  Serial.print("Light Level: ");
  Serial.print(lightLevel);
  Serial.print("| Button: ");
  Serial.print(buttonState);
  
  if(lightLevel < threshold && buttonState == LOW){
    digitalWrite(ledPin, HIGH);
  }
  else if(lightLevel < threshold && buttonState == HIGH){
   digitalWrite(ledPin, LOW); 
  }
  else{
   digitalWrite(ledPin, LOW); 
  }
  
  delay(500);
  
  
}
