//Variables
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
 
  //digitalWrite(led1, LOW);  
  //delay(500);
  //digitalWrite(led1, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  digitalWrite(led5, LOW); 
  digitalWrite(led6, LOW); 
  delay(500);
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led4, HIGH);
  delay(500);
  digitalWrite(led5, HIGH);
  delay(500);
  digitalWrite(led6, HIGH);
  delay(500);
}
