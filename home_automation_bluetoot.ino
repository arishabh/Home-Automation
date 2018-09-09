boolean flag = 0;
int led = 2;
int led1 = 3;
char val = 0;
int led2 = 13;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  Serial.begin(38400);
}

void loop() { 
  if(Serial.available()){
    val = Serial.read();
    Serial.print(val);
  }
  if(val == 'a'){
    flag = !flag;
    Serial.println(flag);
    if (flag == 0){
      digitalWrite(led, LOW);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
    }
    if (flag == 1){
      digitalWrite(led, HIGH);
      digitalWrite(led1, LOW);
    }
    delay(1000);
    val = 0;
  }
}
