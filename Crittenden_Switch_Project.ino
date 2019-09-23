//LEDS
const int bluePin = 13;
const int whitePin = 9;
const int redPin = 8;

//Buttons
const int on1Button= 11;
const int off1Button = 10;
const int on2Button = 7;
const int off2Button = 6;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(bluePin, OUTPUT);
  pinMode(on1Button, INPUT_PULLUP);
  pinMode(off1Button, INPUT_PULLUP);
  pinMode(on2Button, INPUT_PULLUP);
  pinMode(off2Button, INPUT_PULLUP);
  
  Serial.begin (9600);
}

// the loop function runs over and over again forever
void loop() {
// wait for a second
 if (digitalRead(on1Button) == LOW)
  {
    digitalWrite(bluePin, HIGH);
  }
 if (digitalRead(off1Button) == LOW)
  {
    digitalWrite(bluePin, LOW);
  }
   if (digitalRead(on2Button) == LOW)
  {
    digitalWrite(whitePin, HIGH);
  }
 if (digitalRead(off2Button) == LOW)
  {
    digitalWrite(whitePin, LOW);
  }
   if (digitalRead(on2Button) == HIGH)
  {
    digitalWrite(redPin, LOW);
  }
 if (digitalRead(off2Button) == LOW)
  {
    digitalWrite(redPin,HIGH);
  }
}
