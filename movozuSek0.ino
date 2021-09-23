void movozuSek0(){
switch (sek-sek/10*10) {//единицы секунд (пересылка в озу массива единиц секунд и предыдущей цифры)
    case 0:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c9[x][0]; ozuSek0[x][1]=c9[x][1]; ozuSek0[x][2]=c9[x][2];
      ozuSek0[x+10][0]=c0[x][0]; ozuSek0[x+10][1]=c0[x][1]; ozuSek0[x+10][2]=c0[x][2];
    }
      break;
    case 1:
   for(int x=0;x<8;x++){
      ozuSek0[x][0]=c0[x][0]; ozuSek0[x][1]=c0[x][1]; ozuSek0[x][2]=c0[x][2];
      ozuSek0[x+10][0]=c1[x][0]; ozuSek0[x+10][1]=c1[x][1]; ozuSek0[x+10][2]=c1[x][2];
    }
      break;
    case 2:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c1[x][0]; ozuSek0[x][1]=c1[x][1]; ozuSek0[x][2]=c1[x][2];
      ozuSek0[x+10][0]=c2[x][0]; ozuSek0[x+10][1]=c2[x][1]; ozuSek0[x+10][2]=c2[x][2];
    }
      break;
    case 3:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c2[x][0]; ozuSek0[x][1]=c2[x][1]; ozuSek0[x][2]=c2[x][2];
      ozuSek0[x+10][0]=c3[x][0]; ozuSek0[x+10][1]=c3[x][1]; ozuSek0[x+10][2]=c3[x][2];
    }
      break;
    case 4:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c3[x][0]; ozuSek0[x][1]=c3[x][1]; ozuSek0[x][2]=c3[x][2];
      ozuSek0[x+10][0]=c4[x][0]; ozuSek0[x+10][1]=c4[x][1]; ozuSek0[x+10][2]=c4[x][2];
    }
      break;
    case 5:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c4[x][0]; ozuSek0[x][1]=c4[x][1]; ozuSek0[x][2]=c4[x][2];
      ozuSek0[x+10][0]=c5[x][0]; ozuSek0[x+10][1]=c5[x][1]; ozuSek0[x+10][2]=c5[x][2];
    }
      break;
    case 6:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c5[x][0]; ozuSek0[x][1]=c5[x][1]; ozuSek0[x][2]=c5[x][2];
      ozuSek0[x+10][0]=c6[x][0]; ozuSek0[x+10][1]=c6[x][1]; ozuSek0[x+10][2]=c6[x][2];
    }
      break;
    case 7:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c6[x][0]; ozuSek0[x][1]=c6[x][1]; ozuSek0[x][2]=c6[x][2];
      ozuSek0[x+10][0]=c7[x][0]; ozuSek0[x+10][1]=c7[x][1]; ozuSek0[x+10][2]=c7[x][2];
    }
      break;
    case 8:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c7[x][0]; ozuSek0[x][1]=c7[x][1]; ozuSek0[x][2]=c7[x][2];
      ozuSek0[x+10][0]=c8[x][0]; ozuSek0[x+10][1]=c8[x][1]; ozuSek0[x+10][2]=c8[x][2];
    }
      break;
    case 9:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c8[x][0]; ozuSek0[x][1]=c8[x][1]; ozuSek0[x][2]=c8[x][2];
      ozuSek0[x+10][0]=c9[x][0]; ozuSek0[x+10][1]=c9[x][1]; ozuSek0[x+10][2]=c9[x][2];
    }
      break;
  }  
}
