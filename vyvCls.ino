void vyvCls(byte xpoz){
  for(int x=0;x<8;x++){//вывод цифры в заданную позицию
          avaPoint(xpoz,x,cCls[x][0]);avaPoint(xpoz+1,x,cCls[x][1]);avaPoint(xpoz+2,x,cCls[x][2]);
        }
}
