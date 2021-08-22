//pin 8 untuk LED
const int pinLED=8;

void setup() {
  // put your setup code here, to run once:
pinMode(pinLED,OUTPUT);
}
//awal time delay 1000| 1 detik
int timeDelay=1000;

void loop() {
//setiap looping nilai timeDelay di kurang 100
timeDelay=timeDelay-100;

// jika bernilai 0/negatif maka akan direset ke awal(1000)
if(timeDelay<=0){
  timeDelay=1000;
}
digitalWrite(pinLED, HIGH);
delay(timeDelay);
digitalWrite(pinLED, LOW);
delay(timeDelay);
}
