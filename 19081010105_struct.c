#include <stdio.h>
#include <stdlib.h>

struct siswa{
	char nama[50];
	int absen;
	char kelas; //kelas : A/B/C
};

void main(){
	int i,input;
	struct siswa siswa[input];
	
	//input data
	printf("=================================\n");
	printf("Berapa data siswa yang ingin anda masukkan? ");
	scanf("%d",&input);
	system("cls");
	for(i=1;i<=input;i++){
		printf("=================================\n");
		printf("Input no.%d :\n",i);
		printf("Nama siswa : ");
		scanf(" %[^\n]%*c", &siswa[i].nama);
		printf("\nAbsen : ");
		scanf("%d", &siswa[i].absen);
		system("cls");
	}
	
	//output data
	printf("=================================\n");
	for(i=1;i<=input;i++){
		printf("Siswa ke-%d\n", i);
		printf("Nama : %s\n", siswa[i].nama);
		printf("Absen : %d\n\n", siswa[i].absen);
	}
}
