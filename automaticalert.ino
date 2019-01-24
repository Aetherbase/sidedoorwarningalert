const int trigPin = 3;
const int echoPin = 2;
long dist_thresh = 30;

int i = 0;

long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
Serial.begin(9600);
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);


duration = pulseIn(echoPin, HIGH);

//distance= duration/58.8;


//Serial.print("Distance: ");
//Serial.print(int(distance));
//Serial.println("cm");

distance = 49;
if(distance < 50 && i == 0){
  Serial.println("U");
  i = i+1;
  }
 else if(distance> 50){
  i = 0;
  }

}
