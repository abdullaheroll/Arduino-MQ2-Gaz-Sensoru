
#include <LiquidCrystal_I2C.h>
#define duduk 8
int sayac=0;
float SensorGaz;
//Crear el objeto lcd  dirección  0x3F y 16 columnas x 2 filas
LiquidCrystal_I2C lcd(0x27,16,2);  //

void setup() {
pinMode(duduk,OUTPUT);
  playWelcomeTone();
  lcd.init();
  

  lcd.backlight();
  
  while(sayac<3){
     lcd.print("22720700059");
   lcd.setCursor(0,1);
 lcd.print("Abdullah EROL");
 delay(1000);
    lcd.clear();
    tone(duduk,330);
    delay(500);
    noTone(duduk);
    sayac++;
  }
  
  while(sayac>=3 && sayac<6){
       lcd.print("22720700052");
   lcd.setCursor(0,1);
 lcd.print("Abdurahman Iskanoglu");
 delay(1000);
    lcd.clear();
   tone(duduk,330);
    delay(500);
    noTone(duduk);
    sayac++;
  }
  
  while(sayac>=6 && sayac<9){
           lcd.print("22720700050");
   lcd.setCursor(0,1);
 lcd.print("Cagla Yilmaz");
 delay(1000);
    lcd.clear();
   tone(duduk,330);
    delay(500);
    noTone(duduk);
    sayac++;
  }

 
}

void loop() {
 SensorGaz=analogRead(A0);
  if(SensorGaz>540){
    lcd.clear();
  lcd.print("Dikkat");
    lcd.setCursor(0,1);
    lcd.print("Deger: ");
    lcd.print(SensorGaz);
    tone(duduk, 1000, 200);
  }
  else{
    lcd.clear();
    lcd.print("Guvenli");
    lcd.setCursor(0,1);
    lcd.print("Deger: ");
    lcd.print(SensorGaz);
    noTone(duduk);
  }
  delay(500);
}


void playWelcomeTone() {
  // Hoş geldiniz notası için frekanslar ve süreler
  int notes[] = {262, 294, 330, 349, 392, 440, 494, 523};
  int durations[] = {200, 200, 200, 200, 200, 200, 200, 200};

  for (int i = 0; i < 8; i++) {
    tone(duduk, notes[i], durations[i]);
    delay(durations[i] + 20); // 20 ms bekleme süresi
  }

  noTone(duduk); // Buzzerı kapat
}