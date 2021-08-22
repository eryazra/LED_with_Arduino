//inisialisasi jumlah LED
const int numLED=4;
//LED 1,2,3,4 jadi 1 variabel
//dengan alamat index 0,1,2,3
const int pinLED[numLED]={8,9,10,11};

void setup() {
  // put your setup code here, to run once:
//inisialisasi semua pin LED sebagai OUTPUT
for(int i=0; i<4; i++){
  pinMode(pinLED[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
//hidupkan LED indeks 0 hingga 2 satu-persatu
for(int i=0; i<3; i++){
digitalWrite(pinLED[i],HIGH);
delay(200);
digitalWrite(pinLED[i],LOW);
}
//hidupkan LED indeks 3 hingga 1 satu-persatu
for (int i=3; i>0; i--){
digitalWrite(pinLED[i],HIGH);
delay(200);
digitalWrite(pinLED[i],LOW);
}
}
