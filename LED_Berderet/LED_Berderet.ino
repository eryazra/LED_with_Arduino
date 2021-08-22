const int pinLED1=8;
const int pinLED2=9;
const int pinLED3=10;
const int pinLED4=11;

void setup() {
  // put your setup code here, to run once:
//pin LED sebagai output
pinMode(pinLED1,OUTPUT);
pinMode(pinLED2,OUTPUT);
pinMode(pinLED3,OUTPUT);
pinMode(pinLED4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//perulangan sebanyak 5 kali
//dari i=0 hingga i=4 atau (i<5)
for(int i=0;i<5;i++){
  if(i==1){
    //jika i=1, hidupkan LED 1, led yang lain mati
    digitalWrite(pinLED1,HIGH);
    digitalWrite(pinLED2,LOW);
    digitalWrite(pinLED3,LOW);
    digitalWrite(pinLED4,LOW);
  }else if(i==2){
    //jika i bernilai 2, LED 1 dan 2 hidup, 3 dan 4 mati
    digitalWrite(pinLED1,HIGH);
    digitalWrite(pinLED2,HIGH);
    digitalWrite(pinLED3,LOW);
    digitalWrite(pinLED4,LOW);
  }else if(i==3){
    //jika i bernilai 3, LED 1,2 dan 3 hidup, 4 mati
    digitalWrite(pinLED1,HIGH);
    digitalWrite(pinLED2,HIGH);
    digitalWrite(pinLED3,HIGH);
    digitalWrite(pinLED4,LOW);
  }else if(i==4){
    //jika i bernilai 4 maka semua lampu akan hidup
    digitalWrite(pinLED1,HIGH);
    digitalWrite(pinLED2,HIGH);
    digitalWrite(pinLED3,HIGH);
    digitalWrite(pinLED4,HIGH);
  }else{
    //jika tidak,matikan semua LED
    digitalWrite(pinLED1,LOW);
    digitalWrite(pinLED2,LOW);
    digitalWrite(pinLED3,LOW);
    digitalWrite(pinLED4,LOW);
  }
  //delay selama 5 detik
  delay(1000);
}
}
