void movozuDen(){
  switch (den) {//день недели(0-воскресенье)
    case 0:
    for(int x=0;x<8;x++){
      ozuDen[x][0]=c6s[x][0]; ozuDen[x][1]=c6s[x][1]; ozuDen[x][2]=c6s[x][2];
      ozuDen[x+10][0]=c7s[x][0]; ozuDen[x+10][1]=c7s[x][1]; ozuDen[x+10][2]=c7s[x][2];
    }
      break;
    case 1:
   for(int x=0;x<8;x++){
      ozuDen[x][0]=c7s[x][0]; ozuDen[x][1]=c7s[x][1]; ozuDen[x][2]=c7s[x][2];
      ozuDen[x+10][0]=c1s[x][0]; ozuDen[x+10][1]=c1s[x][1]; ozuDen[x+10][2]=c1s[x][2];
    }
      break;
    case 2:
    for(int x=0;x<8;x++){
      ozuDen[x][0]=c1s[x][0]; ozuDen[x][1]=c1s[x][1]; ozuDen[x][2]=c1s[x][2];
      ozuDen[x+10][0]=c2s[x][0]; ozuDen[x+10][1]=c2s[x][1]; ozuDen[x+10][2]=c2s[x][2];
    }
      break;
    case 3:
    for(int x=0;x<8;x++){
      ozuDen[x][0]=c2s[x][0]; ozuDen[x][1]=c2s[x][1]; ozuDen[x][2]=c2s[x][2];
      ozuDen[x+10][0]=c3s[x][0]; ozuDen[x+10][1]=c3s[x][1]; ozuDen[x+10][2]=c3s[x][2];
    }
      break;
    case 4:
    for(int x=0;x<8;x++){
      ozuDen[x][0]=c3s[x][0]; ozuDen[x][1]=c3s[x][1]; ozuDen[x][2]=c3s[x][2];
      ozuDen[x+10][0]=c4s[x][0]; ozuDen[x+10][1]=c4s[x][1]; ozuDen[x+10][2]=c4s[x][2];
    }
      break;
    case 5:
    for(int x=0;x<8;x++){
      ozuDen[x][0]=c4s[x][0]; ozuDen[x][1]=c4s[x][1]; ozuDen[x][2]=c4s[x][2];
      ozuDen[x+10][0]=c5s[x][0]; ozuDen[x+10][1]=c5s[x][1]; ozuDen[x+10][2]=c5s[x][2];
    }
      break;
    case 6:
    for(int x=0;x<8;x++){
      ozuDen[x][0]=c5s[x][0]; ozuDen[x][1]=c5s[x][1]; ozuDen[x][2]=c5s[x][2];
      ozuDen[x+10][0]=c6s[x][0]; ozuDen[x+10][1]=c6s[x][1]; ozuDen[x+10][2]=c6s[x][2];
    }
      break;
  }  
}
