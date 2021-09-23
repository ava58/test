void ustM0(){
  time.gettime(); // Читаем в переменные
  //sek=time.seconds;
  minut=time.minutes;
  if(marker){
  vyv(20,minut-minut/10*10);
  }else{
    vyvCls(20);
  }
  //flM0=false;
}
