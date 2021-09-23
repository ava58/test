void button(){
  if(digitalRead(Button_1) == LOW){   //нажата кнопка Button_1
     //avaPoint(0,0,1);
    countButton_1++;
  }else{
       if(countButton_1>8){
          flPress=true;
          presDlit=countButton_1;
          countButton_1=0;
         }else{
              if(countButton_1>0){
                //avaPoint(0,0,1);
                switch (ClockStatus) {
                case 0:
                    //avaPoint(0,0,1);
                  break;
                  
                case 1://---------------------------------
                    //avaPoint(1,0,1);
                    if(minut<58){
                       minut++;
                    }else{
                          minut=0;
                         }
                    time.settime(-1, minut);
                    vyv(16,minut/10);
                  break;
                  
                case 2://------------------------------------
                    //avaPoint(2,0,1);
                    if(minut<50){
                       minut+=10;
                    }else{
                          minut=minut-minut/10*10;
                         }
                    time.settime(-1, minut);
                    vyv(20,minut-minut/10*10);                    
                  break;
                  
                case 3://-------------------------------------
                    //avaPoint(3,0,1);
                    if(hou<23){
                       hou+=1;
                    }else{
                          hou=0;
                         }
                    time.settime(-1,-1,hou);
                    vyv(6,hou/10);                      
                  break;
                  
                case 4://--------------------------------------
                    //avaPoint(4,0,1);
                    if(hou<14){
                       hou+=10;
                    }else{
                          hou=hou-hou/10*10;
                         }
                    time.settime(-1,-1,hou);
                    vyv(10,hou-hou/10*10);                      
                  break;
                case 5://---------------------------------------
                    if(den<6){
                       den++;
                    }else{
                          den=0;
                         }
                    time.settime(-1,-1,-1,-1,-1,-1,den);
                    vyv(6,hou/10); 
                  break;
              }
                countButton_1=0;
                }  
              }
       }
}
