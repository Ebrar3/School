#include <stdio.h>
int main(){
  int row=0,column=0,c,b,j,i=0,count=0;
  char a[8][8];//={{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'},{'-','-','-','-','-','-','-','-'}};
  for (;i<8;i++){
    for (j=0;j<8;j++){
      a[i][j]='-';
    }
  }
  
  for(row=0;row<8;row++){
    scanf("%d %d",&c,&b);
    a[c][b]='K';
  }
  for(row=0;row<8;row++){
    for(column=0;column<8;column++){
      if(a[c][b]=='K'){
        if(a[c+2][b+1]=='K' || a[c+2][b-1]=='K' || a[c-2][b+1]=='K' || a[c-2][b-1]=='K' || a[c+1][b+2]=='K' || a[c-1][b+2]=='K' || a[c+1][b-2]=='K' || a[c-1][b-2]=='K'){
       count++;
}}}}
  printf("Şövalyelerin yerleştirildiği tahta:\n");
  for(row=0;row<8;row++){
    for(column=0;column<8;column++){
      printf("%c ",a[row][column]);
    }
    printf("\n");
  }
  if(count!=0){
    printf("Şövalye konumları sekiz şövalye problemine uygun değil\n");
  }
  else{
    printf("Tebrikler! Şövalye konumları sekiz şövalye problemine uygun\n");
  }

}




//my code fault is that prog commit for just last input. -iko's code-
