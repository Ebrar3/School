#include<stdio.h>
int main(){
	int sayi,eksi,bit,a,e,y,fark,carp;
	char i;
	carp=0;
	bit=0;
	while (1){
		eksi=0;
		scanf("%c",&i);
		scanf("%d",&sayi);
		switch(i){
		case'r':
			for (a=sayi;a>0;a--){	
			for (y=a;y>0;y--){
				printf("*");
}
			for (e=eksi;e>0;e--){
				printf("-");
}
			printf("\n");
			eksi+=1;
}
			eksi=0;
			break;
		case'l':
			for (a=sayi;a>0;a--){	
			
			for (e=eksi;e>0;e--){
				printf("-");
}
			for (y=a;y>0;y--){
				printf("*");
}
			printf("\n");
			eksi+=1;
}
			eksi=0;
			break;

		case'd':
			for (a=sayi;a>0;a--){	

			for (e=a-1;e>0;e--){
				printf("-");
}
			for (y=carp;y>-1;y--){
				printf("*");
}
			printf("\n");
			carp++;
}
			carp=0;
			break;
		case'b':
			for (a=sayi;a>0;a--){	

			for (y=carp;y>-1;y--){
				printf("*");
}
			for (e=a-1;e>0;e--){
				printf("-");
}
			printf("\n");
			carp++;
}
			carp=0;
			break;
		default:
			bit=-1;

}
	if (bit==-1){
		break;
}
}
	return 0;
}
