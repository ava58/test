void vyvTime(){
  if(pause>1){
  pause=0;
      // vyv(3,3);
  time.gettime(); // Читаем в переменные
  sek=time.seconds;
  minut=time.minutes;
  hou=time.Hours;
  den=time.weekday;

   movozuSek0m(); movozuSek1m();
   movozuMin0(); movozuMin1();
   movozuHou0(); movozuHou1();
   movozuDen();
   
   if(predsek!=sek){
    flsek0=true;
   predsek=sek;
   }
   if(predsek1!=sek/10){
     flsek1=true;
   predsek1=sek/10;
   }
   
   if(predmin!=minut){
    flmin0=true;
   predmin=minut;
   }
   if(predmin1!=minut/10){
     flmin1=true;
   predmin1=minut/10;
   }
   
   if(predhou!=hou){
    flhou0=true;
   predhou=hou;
   }
   if(predhou1!=hou/10){
     flhou1=true;
   predhou1=hou/10;
   }
   if(predden!=den){
     flden=true;
   predden=den;
   }
vyvod();
  }
}
