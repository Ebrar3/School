#include<stdio.h>

//x in yerleri [4][4]   [0][0]    [4][9]


void generation (char hucre[10][10],int h){
	int r,c,olup=0,k;
	printf("Generation %d:\n",h);
	for(r=0;r<10;r++){
		for(c=0;c<10;c++){
		
		if(r==0 || r==9 || c==0 || c==9){
			     if(r==0 && c==0){
			     	if(hucre[r+1][c]=='#'){olup+=1;}
			     	if(hucre[r][c+1]=='#'){olup+=1;}
			     	if(hucre[9][0]=='#'){olup+=1;}
			     	if(hucre[0][9]=='#'){olup+=1;}
			        if(olup==4 && olup==1 && olup==0){
			hucre[r][c]='.';
			}
			if(olup==2 && olup==3){
			hucre[r][c]='#';}
			printf("%c ",hucre[r][c]);
			olup=0;
			     	
			     }
			else if(r==0 && c==9){
			if(hucre[9][c]=='#'){
			olup+=1;}
			if(hucre[r+1][c]=='#'){
			olup+=1;}
			if(hucre[r][c-1]=='#'){
			olup+=1;}
			if(hucre[r][0]=='#'){
			olup+=1;}
			if(olup==4 && olup==1 && olup==0){
			hucre[r][c]='.';
			}
			if(olup==2 && olup==3){
			hucre[r][c]='#';}
			printf("%c ",hucre[r][c]);
			olup=0;}
			else if(r==9 && c==0){
			if(hucre[r-1][c]=='#'){
			olup+=1;}
			if(hucre[0][c]=='#'){
			olup+=1;}
			if(hucre[r][9]=='#'){
			olup+=1;}
			if(hucre[r][c+1]=='#'){
			olup+=1;}
			if(olup==4 && olup==1 && olup==0){
			hucre[r][c]='.';
			}
			if(olup==2 && olup==3){
			hucre[r][c]='#';}
			printf("%c ",hucre[r][c]);
			olup=0;}
			else if(r==9 && c==9){
			if(hucre[r-1][c]=='#'){
			olup+=1;}
			if(hucre[0][c]=='#'){
			olup+=1;}
			if(hucre[r][c-1]=='#'){
			olup+=1;}
			if(hucre[r][0]=='#'){
			olup+=1;}
			if(olup==4 && olup==1 && olup==0){
			hucre[r][c]='.';
			}
			if(olup==2 && olup==3){
			hucre[r][c]='#';}
			printf("%c ",hucre[r][c]);
			olup=0;}
			
			
		
		
		
				
		}
		else{
		
			if(hucre[r-1][c]=='#'){
			olup+=1;}
			if(hucre[r+1][c]=='#'){
			olup+=1;}
			if(hucre[r][c-1]=='#'){
			olup+=1;}
			if(hucre[r][c+1]=='#'){
			olup+=1;}
			if(olup==4 && olup==1 && olup==0){
			hucre[r][c]='.';
			}
			if(olup==2 && olup==3){
			hucre[r][c]='#';}
			printf("%c ",hucre[r][c]);
			olup=0;
		
		
		}
		
		
		}
		puts("");
	
	}
	
	
	
	
	
	
	
	puts("");
	

}



int main(){
	int i,kac,yer[10][10]={0},r,c,s;
	char out[10][10];
	

	for(r=0;r<10;r++){
		for(c=0;c<10;c++){
			scanf("%d",&s);
			yer[r][c]=s;
		}

	}
	scanf("%d",&kac);
	printf("Initial state:\n");
			for(r=0;r<10;r++){
			for(c=0;c<10;c++){
				if(yer[r][c]==0){
				out[r][c]='.';
				printf("%c ",out[r][c]);}
				else{
				out[r][c]='#';
				printf("%c ",out[r][c]);}
			}
			puts("");
			}
			puts("");
	
	for(i=1;i<=kac;i++){
	// kac defa cagırcaz fonksiyonu
	generation(out,i);
	
	}
	

}














