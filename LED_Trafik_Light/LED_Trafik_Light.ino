int UM=2;//utara merah
int UK=3;//kuning
int UH=4;//hijau
int TM=5;//timur merah
int TK=6;//timur kuning
int TH=7;// hijau
int SM=8;//selatan merah
int SK=9;//kuning
int SH=10;//hijau

void setup() {
  // put your setup code here, to run once:
pinMode(UM,OUTPUT);
pinMode(UK,OUTPUT);
pinMode(UH,OUTPUT);
pinMode(TM,OUTPUT);
pinMode(TK,OUTPUT);
pinMode(TH,OUTPUT);
pinMode(SM,OUTPUT);
pinMode(SK,OUTPUT);
pinMode(SH,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//arah dari utara jalan
digitalWrite(UM,LOW);
digitalWrite(UK,LOW);
digitalWrite(UH,HIGH);
digitalWrite(TM,HIGH);
digitalWrite(TK,LOW);
digitalWrite(TH,LOW);
digitalWrite(SM,HIGH);
digitalWrite(SK,LOW);
digitalWrite(SH,LOW);
delay(5000);
//utara lampu kuning
digitalWrite(UM,LOW);
digitalWrite(UK,HIGH);
digitalWrite(UH,LOW);
digitalWrite(TM,LOW);
digitalWrite(TK,HIGH);
digitalWrite(TH,LOW);
digitalWrite(SM,HIGH);
digitalWrite(SK,LOW);
digitalWrite(SH,LOW);
delay(2000);

//arah dari timur jalan
digitalWrite(UM,HIGH);
digitalWrite(UK,LOW);
digitalWrite(UH,LOW);
digitalWrite(TM,LOW);
digitalWrite(TK,LOW);
digitalWrite(TH,HIGH);
digitalWrite(SM,HIGH);
digitalWrite(SK,LOW);
digitalWrite(SH,LOW);
delay(5000);
//timur lampu kuning
digitalWrite(UM,HIGH);
digitalWrite(UK,LOW);
digitalWrite(UH,LOW);
digitalWrite(TM,LOW);
digitalWrite(TK,HIGH);
digitalWrite(TH,LOW);
digitalWrite(SM,LOW);
digitalWrite(SK,HIGH);
digitalWrite(SH,LOW);
delay(2000);

//arah dari selatan jalan
digitalWrite(UM,HIGH);
digitalWrite(UK,LOW);
digitalWrite(UH,LOW);
digitalWrite(TM,HIGH);
digitalWrite(TK,LOW);
digitalWrite(TH,LOW);
digitalWrite(SM,LOW);
digitalWrite(SK,LOW);
digitalWrite(SH,HIGH);
delay(5000);
//selatan lampu kuning
digitalWrite(UM,LOW);
digitalWrite(UK,HIGH);
digitalWrite(UH,LOW);
digitalWrite(TM,HIGH);
digitalWrite(TK,LOW);
digitalWrite(TH,LOW);
digitalWrite(SM,LOW);
digitalWrite(SK,HIGH);
digitalWrite(SH,LOW);
delay(2000);

}
