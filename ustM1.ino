void ustM1(){
  time.gettime(); // Читаем в переменные
  //sek=time.seconds;
  minut=time.minutes;
  if(marker){
  vyv(16,minut/10);
  vyv(20,minut-minut/10*10);
  }else{
    vyvCls(16);
  }
  //flM0=false;
}
