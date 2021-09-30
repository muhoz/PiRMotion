//declartion of variables  
int pirPin = 6;              // define the pin where the pir is connected to
int state = LOW;             // state of the PIR motion sensor
                             // LOW : A motion has been detected
                             // HIGH : There is no motion detected

void setup() {
  pinMode(sensor, INPUT);    // initialize the PIR as an input
  Serial.begin(9600);        // open the Serial port(communication between Arduino and the USB port of the computer)
}

void loop(){
  val = digitalRead(sensor);   // read sensor value
    if (state == LOW) {
      Serial.println("A motion detected!"); 
      //Do whatever you want
    }   
    else if (state == HIGH){
      Serial.println("No motion!");
      //Do whatever you want 
    }
}
