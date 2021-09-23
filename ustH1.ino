void ustH1(){
  time.gettime(); // Читаем в переменные
  hou=time.Hours;
  if(marker){
    vyv(10,hou-hou/10*10);
    vyv(6,hou/10);
  }else{
    vyvCls(6);
  }
  //flM0=false;
}
