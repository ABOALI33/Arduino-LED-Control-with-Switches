int led1=11;
int led2=10;
int led3=5;
int led4=6;
int button1=3;
int button2=9;
int x=0;
int read1;
int read2;
void setup() {
 pinMode(led1,OUTPUT); 
 pinMode(led2,OUTPUT); 
 pinMode(led3,OUTPUT); 
 pinMode(led4,OUTPUT); 
 pinMode(button1,INPUT); 
 pinMode(button2,INPUT); 

}

void loop(){
 read1=digitalRead(button1);
  read2=digitalRead(button2);
  if(read1==HIGH)
  {
    digitalWrite(led2,HIGH);
    analogWrite(led1,127);
  }
  else
  {
    digitalWrite(led1,LOW);
    analogWrite(led2,LOW);
  }
  if(read2==HIGH)
  {
    digitalWrite(led3,HIGH);
    analogWrite(led4,128);
  }
  else
  {
    digitalWrite(led3,LOW);
    analogWrite(led4,LOW);
  }
} 