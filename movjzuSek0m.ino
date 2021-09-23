void movozuSek0m(){
switch (sek-sek/10*10) {//единицы секунд (пересылка в озу массива единиц секунд и предыдущей цифры)
    case 0:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c9s[x][0]; ozuSek0[x][1]=c9s[x][1]; ozuSek0[x][2]=c9s[x][2];
      ozuSek0[x+10][0]=c0s[x][0]; ozuSek0[x+10][1]=c0s[x][1]; ozuSek0[x+10][2]=c0s[x][2];
    }
      break;
    case 1:
   for(int x=0;x<8;x++){
      ozuSek0[x][0]=c0s[x][0]; ozuSek0[x][1]=c0s[x][1]; ozuSek0[x][2]=c0s[x][2];
      ozuSek0[x+10][0]=c1s[x][0]; ozuSek0[x+10][1]=c1s[x][1]; ozuSek0[x+10][2]=c1s[x][2];
    }
      break;
    case 2:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c1s[x][0]; ozuSek0[x][1]=c1s[x][1]; ozuSek0[x][2]=c1s[x][2];
      ozuSek0[x+10][0]=c2s[x][0]; ozuSek0[x+10][1]=c2s[x][1]; ozuSek0[x+10][2]=c2s[x][2];
    }
      break;
    case 3:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c2s[x][0]; ozuSek0[x][1]=c2s[x][1]; ozuSek0[x][2]=c2s[x][2];
      ozuSek0[x+10][0]=c3s[x][0]; ozuSek0[x+10][1]=c3s[x][1]; ozuSek0[x+10][2]=c3s[x][2];
    }
      break;
    case 4:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c3s[x][0]; ozuSek0[x][1]=c3s[x][1]; ozuSek0[x][2]=c3s[x][2];
      ozuSek0[x+10][0]=c4s[x][0]; ozuSek0[x+10][1]=c4s[x][1]; ozuSek0[x+10][2]=c4s[x][2];
    }
      break;
    case 5:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c4s[x][0]; ozuSek0[x][1]=c4s[x][1]; ozuSek0[x][2]=c4s[x][2];
      ozuSek0[x+10][0]=c5s[x][0]; ozuSek0[x+10][1]=c5s[x][1]; ozuSek0[x+10][2]=c5s[x][2];
    }
      break;
    case 6:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c5s[x][0]; ozuSek0[x][1]=c5s[x][1]; ozuSek0[x][2]=c5s[x][2];
      ozuSek0[x+10][0]=c6s[x][0]; ozuSek0[x+10][1]=c6s[x][1]; ozuSek0[x+10][2]=c6s[x][2];
    }
      break;
    case 7:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c6s[x][0]; ozuSek0[x][1]=c6s[x][1]; ozuSek0[x][2]=c6s[x][2];
      ozuSek0[x+10][0]=c7s[x][0]; ozuSek0[x+10][1]=c7s[x][1]; ozuSek0[x+10][2]=c7s[x][2];
    }
      break;
    case 8:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c7s[x][0]; ozuSek0[x][1]=c7s[x][1]; ozuSek0[x][2]=c7s[x][2];
      ozuSek0[x+10][0]=c8s[x][0]; ozuSek0[x+10][1]=c8s[x][1]; ozuSek0[x+10][2]=c8s[x][2];
    }
      break;
    case 9:
    for(int x=0;x<8;x++){
      ozuSek0[x][0]=c8s[x][0]; ozuSek0[x][1]=c8s[x][1]; ozuSek0[x][2]=c8s[x][2];
      ozuSek0[x+10][0]=c9s[x][0]; ozuSek0[x+10][1]=c9s[x][1]; ozuSek0[x+10][2]=c9s[x][2];
    }
      break;
  }  
}
