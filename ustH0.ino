void ustH0(){
  time.gettime(); // Читаем в переменные
  hou=time.Hours;
  if(marker){
    vyv(16,minut/10);
    vyv(10,hou-hou/10*10);
  }else{
    vyvCls(10);
  }
  //flM0=false;
}
