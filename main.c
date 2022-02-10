#include <SPI.h>
#include <DMD2.h>
#include <fonts/SystemFont5x7.h>

SoftDMD dmd(1,1);  // DMD controls the entire display
DMD_TextBox box(dmd, 0,9);
void setup() {
  dmd.setBrightness(255);
  dmd.selectFont(SystemFont5x7);
  dmd.begin();
  pinMode(2,INPUT);
  Serial.begin(9600);
}
char *n = "DENEY";
char *n3[2] = {"ALARM","DERSI"};

char *n1[10] = {"1","2","3","4","5","6","7","8","9","10"};
char *n2[1]  = {"Deney Malzemeleri: Pense, Keski, Kontrol Kalem, Tornavida, Board, Onluk, Temrin Defteri"};
const char *MESSAGE[10] = {" Board Devreleri Kurar ", " Priz Devreleri Kurar "," Zil Tesisati Kurar "
," Uydu Sistemleri Kurar "," Hirsiz Alarm Sistemleri 1 Kurar"," Hirsiz Alarm Sistemleri 2 Kurar"
," Hirsiz Alarm Sistemleri Programi Kurar"," Turnike Sistemi Kurar"," Parmak Okuyucu Sistemi Kurar"," Otomatik Geçiş Sistemi Kurar"};

int sayici = 0;
void loop() {


   while(digitalRead(2) == 1)
   {       
          sayici = sayici + 1;
          if(sayici==11) sayici=0;
          while(digitalRead(2) == 1);
          delay(2000);
   }

Serial.print(sayici);
switch(sayici){
 case 1:   
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[0]));

  const char *next = MESSAGE[0];
  while(*next ) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
  if(digitalRead(2) == 1) break;
    }
}

  break;
  
case 2:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[1]));

  const char *next = MESSAGE[1];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    
    case 3:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[2]));

  const char *next = MESSAGE[2];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    
    case 4:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[3]));

  const char *next = MESSAGE[3];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    
    case 5:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[4]));

  const char *next = MESSAGE[4];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    
    case 6:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[5]));

  const char *next = MESSAGE[5];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    
    case 7:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[6]));

  const char *next = MESSAGE[6];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    case 8:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[7]));

  const char *next = MESSAGE[7];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    case 9:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[8]));

  const char *next = MESSAGE[8];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    case 10:
{
  dmd.drawString(0,0,String(n)); 
  delay(1000);
  dmd.clearScreen();
  dmd.drawString(12,0,String(n1[9]));

  const char *next = MESSAGE[9];
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    }
    break;
    
   default:   
  const char *next = n2[0];

  dmd.drawString(0,0,String(n3[0]));
  delay(1000); dmd.clearScreen();
  dmd.drawString(0,0,String(n3[1]));
  while(*next) {
    Serial.print(*next);
    box.print(*next);
    delay(500);
    next++;
    if(digitalRead(2) == 1) break;
}    
    
}  

}
