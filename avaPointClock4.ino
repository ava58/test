 #include "LedControl.h"
 #include <MsTimer2.h>
 #include <iarduino_RTC.h>
const int Button_1 = 5;            // Номер кнопки выбора меню установок

//Синтаксис создания класса LedControl(dataPin,clockPin,csPin,numDevices)
//Где LedControl - объект класса
//dataPin  - пин на плате Arduino к которому будет подключен пин DIN
//clockPin - пин на плате Arduino к которому будет подключен пин CLK
//csPin    - пин на плате Arduino к которому будет подключен пин CS
//numDevices - количество устройств на шине

//Создать объект класса matrix в нашем случае с одним подключенным устройством
LedControl matrix = LedControl(11, 13, 9, 4);
iarduino_RTC time(RTC_DS1307);      // Подключаем датчик времени типа DS1307

bool c0[8][3]={{0,1,0},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{0,1,0},};
bool c1[8][3]={{0,1,0},{1,1,0},{0,1,0},{0,1,0},{0,1,0},{0,1,0},{0,1,0},{1,1,1},};
bool c2[8][3]={{0,1,0},{1,0,1},{0,0,1},{0,0,1},{0,1,0},{1,0,0},{1,0,0},{1,1,1},};
bool c3[8][3]={{0,1,0},{1,0,1},{0,0,1},{0,1,0},{0,0,1},{0,0,1},{1,0,1},{0,1,0},};
bool c4[8][3]={{1,0,1},{1,0,1},{1,0,1},{1,0,1},{0,1,1},{0,0,1},{0,0,1},{0,0,1},};
bool c5[8][3]={{1,1,1},{1,0,0},{1,0,0},{1,1,0},{0,0,1},{0,0,1},{1,0,1},{0,1,0},};
bool c6[8][3]={{0,1,0},{1,0,1},{1,0,0},{1,0,0},{1,1,1},{1,0,1},{1,0,1},{0,1,0},};
bool c7[8][3]={{1,1,1},{1,0,1},{0,0,1},{0,0,1},{0,1,0},{0,1,0},{0,1,0},{0,1,0},};
bool c8[8][3]={{0,1,0},{1,0,1},{1,0,1},{0,1,0},{1,0,1},{1,0,1},{1,0,1},{0,1,0},};
bool c9[8][3]={{0,1,0},{1,0,1},{1,0,1},{1,0,1},{0,1,1},{0,0,1},{1,0,1},{0,1,0},};
bool cCls[8][3]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},};

bool c0s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,1,1},{1,0,1},{1,0,1},{1,0,1},{1,1,1},};
bool c1s[8][3]={{0,0,0},{0,0,0},{0,0,0},{0,1,0},{1,1,0},{0,1,0},{0,1,0},{0,1,0},};
bool c2s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,1,1},{0,0,1},{1,1,1},{1,0,0},{1,1,1},};
bool c3s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,1,1},{0,0,1},{1,1,1},{0,0,1},{1,1,1},};
bool c4s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,0,1},{1,0,1},{1,1,1},{0,0,1},{0,0,1},};
bool c5s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,1,1},{1,0,0},{1,1,1},{0,0,1},{1,1,1},};
bool c6s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,1,1},{1,0,0},{1,1,1},{1,0,1},{1,1,1},};
bool c7s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,1,1},{0,0,1},{0,1,0},{0,1,0},{0,1,0},};
bool c8s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,1,1},{1,0,1},{0,1,0},{1,0,1},{1,1,1},};
bool c9s[8][3]={{0,0,0},{0,0,0},{0,0,0},{1,1,1},{1,0,1},{1,1,1},{0,0,1},{1,1,1},};


byte ozuSek0[18][3]; byte ozuSek1[18][3]; byte ozuMin0[18][3]; byte ozuMin1[18][3]; byte ozuHou0[18][3]; byte ozuHou1[18][3]; byte ozuDen[18][3];

byte sek=0,predsek=70,predsek1=70;
byte minut=0,predmin=70,predmin1=70;
byte hou=0,predhou=70,predhou1=70,predden=70;
byte den=0;

int tik=0,pause=0;
int countButton_1;                 // Время нажатия кнопки countMainSet * 100 мс
bool marker=false;

bool flsek0=false;
bool flsek1=false;

bool flmin0=false;
bool flmin1=false;

bool flhou0=false;
bool flhou1=false;
bool flden=false;

bool but=false;
bool flPress=false;
byte presDlit=0;

byte ClockStatus=0; //0-индикация времени  1-установка времени  2-установка даты,месяца и дня недели
bool flM0=false;

//--------------------------------------------------------------------------------------------------
void setup() {
pinMode(Button_1, INPUT);         // Включение пина на вход
digitalWrite(Button_1, HIGH);     // включить подтягивающий резистор
  
MsTimer2::set (20, flash);          // 100ms period
MsTimer2::start ();
  //Устройству с адресом 0,1,2,3 выйти из спящего режима по умолчанию
  matrix.shutdown(0, false); 
  matrix.shutdown(1, false);
  matrix.shutdown(2, false); 
  matrix.shutdown(3, false);  
  
  //Установить яркость Led матрицы на 8
  //Возможные значения от 0 до 15     
  matrix.setIntensity(0, 0);
  matrix.setIntensity(1, 0);
  matrix.setIntensity(2, 0);
  matrix.setIntensity(3, 0);   

  //Очистить дисплей
  matrix.clearDisplay(0); 
  matrix.clearDisplay(1);
  matrix.clearDisplay(2);
  matrix.clearDisplay(3);

   time.begin();
     //time.settime(50,58,23,25,10,20,0);  // 0  сек, 29 мин, 22 час, 11, 02, 2020 года, четверг
     delay(3000);

}

//--------------------------------------------------------------------------------------------------
void loop() {
  //button();
  if(flPress==true&&presDlit>7){
    if(ClockStatus < 5){
       ClockStatus++;
       }else{
           ClockStatus=0;
           predden=0;
           flden=true;
       }
       flPress=false;presDlit=0;
  }
  
  switch (ClockStatus) {
    case 0:
      //flden=true;
      //vyvod();
      //movozuDen();
      //flden=true;
      vyvTime();
      //avaPoint(28,0,0);
      break;
    case 1:
      //avaPoint(26,0,1);
      //if(flM0==false){
        //flM0=true;
        ustM0();
      //}
      break;
    case 2:
      //avaPoint(28,0,1); //flmin0==true;vyv(20,minut-minut/10*10);
      ustM1();
      break;
    case 3:
      //avaPoint(30,0,1);
      ustH0();
      break;
    case 4:
      //avaPoint(30,0,1);
      ustH1();
      break;
    case 5:
      //avaPoint(30,0,1);
      ustD();
      break;
  }
}
//---------------------------------------------------------------------------------------------------

void flash () {
  pause++;
  button(); 
  tik++;
  if(tik>25){
    if(marker){
       marker=false;
       avaPoint(14,3,0); avaPoint(14,4,0);// avaPoint(23,3,0); avaPoint(23,4,0);
       avaPoint(14,2,1); avaPoint(14,5,1);// avaPoint(23,2,1); avaPoint(23,5,1);
       //sek++;
      }else{
        marker=true;
       avaPoint(14,2,0); avaPoint(14,5,0);// avaPoint(23,2,0); avaPoint(23,5,0);
       avaPoint(14,3,1); avaPoint(14,4,1);// avaPoint(23,3,1); avaPoint(23,4,1);
      }
      tik=0;
   }
}
