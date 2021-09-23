void vyvod(){
  for(int x=0;x<11;x++){
    for(int y=0;y<8;y++){
     if(flsek0==true) {//вывод единиц секунд
      avaPoint(29,y,ozuSek0[y+x][0]);avaPoint(30,y,ozuSek0[y+x][1]);avaPoint(31,y,ozuSek0[y+x][2]);
      if(flsek1==false and flmin0==false and flmin1==false and flhou0==false and flhou1==false and flden==false){
         avaPoint(29,y,ozuSek0[y+x][0]);avaPoint(30,y,ozuSek0[y+x][1]);avaPoint(31,y,ozuSek0[y+x][2]);
         avaPoint(29,y,ozuSek0[y+x][0]);avaPoint(30,y,ozuSek0[y+x][1]);avaPoint(31,y,ozuSek0[y+x][2]);
      }
     }
     if(flsek1==true){//вывод десятков секунд
      avaPoint(25,y,ozuSek1[y+x][0]);avaPoint(26,y,ozuSek1[y+x][1]);avaPoint(27,y,ozuSek1[y+x][2]);
      if(flmin0==false and flmin1==false and flhou0==false and flhou1==false and flden==false){
         avaPoint(25,y,ozuSek1[y+x][0]);avaPoint(26,y,ozuSek1[y+x][1]);avaPoint(27,y,ozuSek1[y+x][2]);
      }
     }

     if(flmin0==true) {//вывод единиц минут
      avaPoint(20,y,ozuMin0[y+x][0]);avaPoint(21,y,ozuMin0[y+x][1]);avaPoint(22,y,ozuMin0[y+x][2]);
     }
     if(flmin1==true){//вывод десятков минут
      avaPoint(16,y,ozuMin1[y+x][0]);avaPoint(17,y,ozuMin1[y+x][1]);avaPoint(18,y,ozuMin1[y+x][2]);
     }

     if(flhou0==true) {//вывод единиц часов
      avaPoint(10,y,ozuHou0[y+x][0]);avaPoint(11,y,ozuHou0[y+x][1]);avaPoint(12,y,ozuHou0[y+x][2]);
     }
     if(flhou1==true){//вывод десятков часов
      avaPoint(6,y,ozuHou1[y+x][0]);avaPoint(7,y,ozuHou1[y+x][1]);avaPoint(8,y,ozuHou1[y+x][2]);
     }
     if(flden==true){//вывод дня недели
      avaPoint(0,y,ozuDen[y+x][0]);avaPoint(1,y,ozuDen[y+x][1]);avaPoint(2,y,ozuDen[y+x][2]);
     }     
    }
  }
       flsek0=false; 
       flsek1=false;
       flmin0=false; 
       flmin1=false;
       flhou0=false; 
       flhou1=false;
       flden=false;
}
