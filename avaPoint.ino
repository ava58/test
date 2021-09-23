
void avaPoint( int x, int y, bool set){ //Используем функцию setLed(address, row, col, set) 
 if(x<8){
  matrix.setLed(0,y, x,set);
 }
 if(x>7 && x<16){
  x=x-8;
  matrix.setLed(1,y, x,set); 
 }
 if(x>15 && x<24){
  x=x-16;
  matrix.setLed(2,y, x,set);
 }
 if(x>23 && x<32){
  x=x-24;
  matrix.setLed(3,y, x,set); 
 }
}
