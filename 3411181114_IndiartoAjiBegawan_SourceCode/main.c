#include <stdio.h>
#include <stdlib.h>
#include "dfd.h"
int main(int argc, char *argv[]) {
	
	//Kamus
	Pegawai p;
	int jumlah=1;
	int pil;
	//Algoritma
	
	do{	
	puts ("--------------------------------");
	puts ("PROGRAM PERHITUNGAN GAJI PEGAWAI");
	puts ("--------------------------------");
	inisialisasi (&p, jumlah);
	puts ("|0| Reset");
	puts ("|1| Masukan Data Pegawai");
	puts ("|2| Cetak Data Pegawai");
	puts ("|3| Hitung Gaji Pegawai");
	puts ("|4| Slip Gaji Pegawai");
	puts ("|5| Laporan Gaji Pegawai");
	puts ("|9| Keluar");
	printf ("Pilih menu yang diinginkan : ");
	scanf  ("%i", &pil);
	fflush(stdin);
	system("cls");
	

	switch (pil){
		case 0 : inisialisasi (&p, jumlah);
				 jumlah = 1;
				 printf ("Data Telah Di Reset!!!");
				 getche();
				 system("cls");
				 break;	
				 
		case 1 : inputdatapegawai(&p,jumlah);
				 jumlah++;
				 system("cls");
				 break;	
				 
		case 2 : cetakdatapegawai(&p,jumlah);
				 getche();
				 system("cls");
				 break;	
				 
		case 3 : hitunggaji (&p,jumlah);
				int waktu;
				puts("Sedang Menghitung gaji");
				for(waktu=1;waktu<=100;waktu++){
					printf("|");
					delay(20);
				}
				puts (">100");
				puts("Perhitungan gaji telah selesai");
				 getche();
				 system("cls");
				 break;	
				 
		case 4 : slipgajipegawai (&p,jumlah);
				 getche();
				 system("cls");
				 break;	
				 
		case 5 : laporangajipegawai (&p,jumlah);
				 getche();
				 system("cls");
				 break;	
		case 9 : puts("Terima Kasih!!!");
				 getche();
				 system("cls");
				 break;			 
		default: puts ("Anda salah memasukkan angka!!!");
				 getche();
				 system("cls");
				 break;		 
	}
	
	}while(pil!=9);
	puts ("Indiarto Aji Begawan");
	puts ("3411181114");
	puts ("AIG - A 2018");
	puts ("Indiarto.Aji@student.unjani.ac.id");
	getche();
	return 0;
}
