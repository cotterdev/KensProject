int ledPins[] = {2,3,4,5,6,7};  //pin number leds are attached to
int ledCount = 6;
int sensorReading[5];
int sensorReadingAvg;
const int analogPin = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("Starting Test...");
  
  for(int thisLed = 0; thisLed < ledCount; thisLed++){
    pinMode(ledPins[thisLed], OUTPUT);
  }
}//End Setup


void loop() {
  
  //delay(50);
  //int sensorReading2 = analogRead(analogPin);
  //Get average sensor reading
  sensorReadingAvg = 0;
  for(int i = 0; i < 5; i++){
    //Read Pot
    sensorReading[i] = analogRead(analogPin);
    sensorReadingAvg = sensorReadingAvg + sensorReading[i];
    delay(5);  
  }
  //Average pot reading
  sensorReadingAvg = sensorReadingAvg / 5;
  
  //Map result 0-7 (7 is never used but when the reading is 1023 we have 7)
  int ledLevel = map(sensorReadingAvg, 0, 1023, 0, (ledCount+1)); 
  Serial.print("sensorRedingAvg: ");
  Serial.println(sensorReadingAvg);
  Serial.print("ledLevel: ");
  Serial.println(ledLevel);

  //loop over led array
  for(int thisLed = 0; thisLed < 6; thisLed++){
    if(thisLed < ledLevel){
      digitalWrite(ledPins[thisLed], HIGH);
    }else{
      digitalWrite(ledPins[thisLed], LOW);
    } 
  }//End for
}//End loop
