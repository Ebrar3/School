#include <stdio.h>

int main(){
	int koltuklar[16]={0};
	int sec;
	int i,num;
	int counter=0;
	char karar='o';
	
	while(1){

	
	if (counter==15){
		puts("Bu otobüse ait tüm koltuklar dolmuştur.");
		break;
	}
	puts("Lütfen \"tekli koltuk\" için 1, \"ikili koltuk\" için 2 değerini giriniz: ");
	scanf(" %d",&sec);
	if (karar=='y' || karar=='Y'){
	sec=2;}
	
	if (sec==1){
	for (i=1;i<14;i+=3){
	if (koltuklar[i]==0){
		koltuklar[i]=1;
		printf("Tekli koltuklarda atamanız %d.\n",i);
		counter+=1;
		break;
	}
	
	if (koltuklar[13]==1){
		puts("Tekli koltuk bölümü dolmuştur. İkili koltuk bölümünde oturmak ister misiniz (Y veya N)?: ");
		scanf(" %c",&karar);
		if (karar=='Y'||karar=='y'){
		break;
		}
		else{
		puts("Sonraki sefer 3 saat sonra kalkıyor.");
		break;
		}
		
		
	}
	

	
	}
	
	
	
	}
	else if (sec==2){
	for (i=2;i<16;i++){
	
		if(i==1||i==4||i==7||i==10||i==13){
		continue;
		}
		if(koltuklar[i]==0){
		counter+=1;
		koltuklar[i]=1;
		printf("İkili koltuklarda atamanız %d.\n",i);
		break;
		}
		if (koltuklar[15]==1){
		puts("İkili koltuk bölümü dolmuştur. Tekli koltuk bölümünde oturmak ister misiniz (Y veya N)?: ");
		scanf(" %c",&karar);
		if (karar=='Y'||karar=='y'){
		break;
		}
		else{
		puts("Sonraki sefer 3 saat sonra kalkıyor.");
		break;
		}
		
	
	
	}
	}
}
}
}







