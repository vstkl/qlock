#include "QLock"

QLock watchy;

void setup(){
  Serial.begin(9600);
  watchy.init();
}

void loop(){}
