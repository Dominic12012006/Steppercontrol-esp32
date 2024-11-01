int step=26;
int dirn=32;
int val;
void steprotate(int step){
  digitalWrite(step,LOW);
  delay(100);
  digitalWrite(step,HIGH);
  delay(100);
}
void run(int val,int dirn, int step){
  if(val=='w'){
    digitalWrite(dirn,HIGH);
  }
  if(val=='s'){
    digitalWrite(dirn,LOW);
  }
  steprotate(step);
}
void setup() {
  Serial.begin(115200);
  pinMode(26,OUTPUT);
  pinMode(32,OUTPUT);
}

void loop() {
  if(Serial.available()){
    val=Serial.read();
  }  
  run(val,dirn,step);
}
