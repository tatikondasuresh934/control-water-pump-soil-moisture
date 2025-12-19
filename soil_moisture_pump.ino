int sensor=A1;
int led=3;
int reading=0;
void setup(){
  pinMode(led,HIGH);
}
void loop(){
  reading=analogRead(sensor);
  if(reading<500){
    digitalWrite(led,HIGH);
    delay(1000);
  }
  else{
    
    digitalWrite(led,LOW);
    delay(1000);
  }
}
