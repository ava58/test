void movozuHou1(){
switch (hou/10) {//единицы минут (пересылка в озу массива единиц минут и предыдущей цифры)
    case 0:
    for(int x=0;x<8;x++){
      ozuHou1[x][0]=c2[x][0]; ozuHou1[x][1]=c2[x][1]; ozuHou1[x][2]=c2[x][2];
      ozuHou1[x+10][0]=c0[x][0]; ozuHou1[x+10][1]=c0[x][1]; ozuHou1[x+10][2]=c0[x][2];
    }
      break;
    case 1:
   for(int x=0;x<8;x++){
      ozuHou1[x][0]=c0[x][0]; ozuHou1[x][1]=c0[x][1]; ozuHou1[x][2]=c0[x][2];
      ozuHou1[x+10][0]=c1[x][0]; ozuHou1[x+10][1]=c1[x][1]; ozuHou1[x+10][2]=c1[x][2];
    }
      break;
    case 2:
    for(int x=0;x<8;x++){
      ozuHou1[x][0]=c1[x][0]; ozuHou1[x][1]=c1[x][1]; ozuHou1[x][2]=c1[x][2];
      ozuHou1[x+10][0]=c2[x][0]; ozuHou1[x+10][1]=c2[x][1]; ozuHou1[x+10][2]=c2[x][2];
    }
      break;
  }  
}
