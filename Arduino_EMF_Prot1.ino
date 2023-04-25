//Layfield, Aidan
//Project "Ghost Detector" (EMF Detector in Arduino)
//4/23/2023

int analogPin = 5;   // A5 
int val = 0;          
int led = 11;        // LED connected to Digital pin D11

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin); // reads in the values from analog 5 and
  if(val >= 1){
    val = constrain(val, 1, 100);                                     
    val = map(val, 1, 100, 1, 255);
    analogWrite(led, val);
   }
   else
   {
    analogWrite(led, 0); // to turn off the light if there is no EMF detected
  }
  Serial.println(val);
}
