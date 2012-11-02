#include <stdio.h>

main(){

	int dif=0;
	int total=0;
	int i=0;
	for(i=1;i<=10;++i){
	do{
		scanf("%d", &total);
	}while(total < 1);
	do{
		scanf("%d", &dif);
	}while(dif < 1);
	printf("\n%d\n%d\n", ((total+dif)/2), ((total-dif)/2));
	}
}