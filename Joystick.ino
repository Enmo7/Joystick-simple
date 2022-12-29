int xPin = A0; // define the Pin input in joystic on the arduino and give it analog pin for x direction.
int yPin = A1; // define the Pin input in joystic on the arduino and give it analog pin for y direction.

int xValue; // define variable to save the value of xPin in her.
int yValue; // define variable to save the value of yPin in her.


void setup() {
  // put your setup code here, to run once:
  pinMode(xPin, INPUT); // define the pin as an input pin.
  pinMode(yPin, INPUT); // define the pin as an input pin.
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  xValue = analogRead(xPin); // define it as a variable whose input has an analog value.
  yValue = analogRead(yPin); // define it as a variable whose input has an analog value.
  Serial.print("xValue : ");
  Serial.print(xValue);
  Serial.print("yValue : ");
  Serial.println(yValue);
}
