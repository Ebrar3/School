#include <stdio.h>
 
int main(){
    int i,r,c;
    char a[8][8];
    for (i=0;i<8;i++){
        scanf(" %d %d",&r,&c);
        a[r][c]='K';
    }

    puts("Şövalyelerin yerleştirildiği tahta:");
    for (r=0;r<8;r++){
        for(c=0;c<8;c++){
            if (a[r][c]=='K'){printf("K ");}
            else{
                a[r][c]=='-';
                printf("- ");}
        }
        puts("");
    }
    i=0;
    for(r=0;r<8;r++){
        if(i==0){
        for(c=0;c<8;c++){
            if(a[r][c]=='K'){
            
            if(r==0 || r==1 || c==0 || c==1){
                if (r==0){
                    if (c==0){if(a[r+2][c+1]=='K' || a[r+1][c+2]=='K'){
                        i++;
                        break;}}
                    else if(c==1){if(a[r+2][c-1]=='K' || a[r+2][c+1]=='K' || a[r+1][c+2]=='K'){
                        i++;
                        break;
                    }}
                    else{if(a[r+1][c-2]=='K' || a[r+1][c+2]=='K' || a[r+2][c-1]=='K' || a[r+2][c+1]=='K'){
                        i++;
                        break;
                    }}
                }
                else if(r==1){
                    if(c==0){if(a[r-1][c+2]=='K' || a[r+1][c+2]=='K' || a[r+2][c+1]=='K'){
                    i++;
                    break;}}
                    else if(c==1){if(a[r-1][c+2]=='K' || a[r+1][c+2]=='K' || a[r+2][c-1]=='K' || a[r+2][c+1]=='K'){
                        i++;
                        break;
                    }}
                    else{if(a[r-1][c-2]=='K' || a[r-1][c+2]=='K' || a[r+1][c+2]=='K' || a[r+1][c-2]=='K' || a[r+2][c-1]=='K' || a[r+2][c+1]=='K'){
                        i++;
                        break;
                    }}
                }
                else if(c==0){
                    if(a[r+2][c+1]=='K' || a[r-2][c+1]=='K' || a[r-1][c+2]=='K' || a[r+1][c+2]=='K'){
                        i++;
                        break;
                    }

                }
                else if(c==1){
                    if(a[r+2][c+1]=='K' || a[r-2][c+1]=='K' || a[r-1][c+2]=='K' || a[r+1][c+2]=='K' || a[r+2][c-1]=='K' || a[r-2][c-1]=='K'){
                        i++;
                        break;
                    }

                }

            }

            
            
            else if(a[r+2][c+1]=='K' || a[r+2][c-1]=='K' || a[r-2][c+1]=='K' || a[r-2][c-1]=='K' || a[r+1][c+2]=='K' || a[r-1][c+2]=='K' || a[r+1][c-2]=='K' || a[r-1][c-2]=='K'){
              i++;
              break;  

            }
            }
        }
        }
        else{
            printf("Şövalye konumları sekiz şövalye problemine uygun değil\n");
            break;}
    }

if (i==0){
    printf("Tebrikler! Şövalye konumları sekiz şövalye problemine uygun\n");
}



return 0;
}