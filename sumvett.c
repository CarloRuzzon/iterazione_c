#include<stdio.h>

int main(){
	int v[10], somma = 0, i;
	float media;

	for(i = 0; i < 10; i++){
		printf("Inserire i valori: ");
		scanf("%d", &v[i]);
	}

	for(i = 0; i < 10; i++){
		somma += v[i];
	}
	media = somma / 10.;

	printf("Somma: %d, media: %f", somma, media);
	return 0;
}

