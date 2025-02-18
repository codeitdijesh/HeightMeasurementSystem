
double  samaya ;
int distance;
int Trig=8;
int Echo=9;
double inch;
double height;
int feet;
double rem;





void setup() {
  // put your setup code here, to run once:
pinMode(Trig,OUTPUT);
pinMode(Echo,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Trig,LOW);
delayMicroseconds(10);
digitalWrite(Trig,HIGH);
delayMicroseconds(10);

samaya=pulseIn(Echo,HIGH);



distance=samaya*0.0334/2; // taking out distance by the formula velocity into time taken


inch= distance/2.54;  // converting cm into inch

height= 73-inch ;//subtracting the height of distance betwwen sensor and head of person from the total height

feet = height/12; // taking out feet

rem = height%12; // remaining numbers after calculating feet
  

Serial.print(feet);
Serial.print(".");
Serial.println(rem);






}
