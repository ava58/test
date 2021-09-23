void ustD(){
  time.gettime(); // Читаем в переменные
  den=time.weekday;
  if(marker){
    movozuDen();
    vyv(0,den);
    
    //flden=true;
    //vyvod();
    vyv(6,hou/10);
  }else{
    vyvCls(0);
  }
  //flM0=false;
}
