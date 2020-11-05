#include "dfd.h"
#include <stdio.h>
#include <conio.h>
#include "math.h"
#include<time.h>

Pegawai p;

void inisialisasi (Pegawai *p, int i){
	(*p)[i].nomer = i;
	(*p)[i].noPegawai = 0;
	(*p)[i].thp = 0;
	(*p)[i].waktukerja = 0;
}

void inputdatapegawai(Pegawai *p, int i){
	puts ("===============================================");
	puts ("             Masukan Data Pegawai              ");
	puts ("===============================================");
	
	printf ("Masukan Nama Pegawai	: ");
	gets ((*p)[i].nama);

	printf ("Masukan Departemen 	: ");
	gets ((*p)[i].departeman);
	
	printf ("Masukan Jabatan 	: ");
	gets ((*p)[i].jabatan);	

	printf ("Masukan Nomor Induk Pegawai : ");
	scanf ("%i", &(*p)[i].noPegawai);	
	
	printf ("Masukan Jumlah Waktu Kerja (Dalam Sebulan)	: ");
	scanf ("%i", &(*p)[i].waktukerja);
}

void cetakdatapegawai (Pegawai *p, int j){
	int i;
	puts ("===================================================================================");
	puts ("                               Data Seluruh Pegawai                                 ");
	puts ("===================================================================================");
	puts ("                                                                                    ");
	puts ("-----------------------------------------------------------------------------------");
	puts (" No | Nama Pegawai |  Nomor Pegawai  |   Departemen   |  Jabatan  |  Waktu Kerja  | ");
	puts ("-----------------------------------------------------------------------------------");
	for(i=1;i<j;i++){
		printf (" %i    %.20s \t\t %.10i \t %.15s \t %.15s \t %.5i\n", i, (*p)[i].nama, (*p)[i].noPegawai, (*p)[i].departeman, (*p)[i].jabatan, (*p)[i].waktukerja);
		puts ("___________________________________________________________________________________");
	}
}

void hitunggaji (Pegawai *p, int j){
	int i; 
	for(i=1;i<j;i++){
		(*p)[i].thp = (((*p)[i].waktukerja)*25000)+900000+1500000;
	}
}

void laporangajipegawai (Pegawai *p, int j){
	int i;
	float totalgaji = 0;
	puts ("=================================================================================================");
	puts ("                                      Laporan Gaji Pegawai                                       ");
	puts ("=================================================================================================");
	puts ("                                                                                                 ");
	puts ("-------------------------------------------------------------------------------------------------");
	puts (" No | Nama Pegawai |  Nomor Pegawai  |   Departemen   |  Jabatan  | Waktu Kerja | Take Home Pay |");
	puts ("-------------------------------------------------------------------------------------------------");
	for(i=1;i<j;i++){
		printf (" %i    %.20s \t\t %.10i \t %.15s \t %.15s \t %.5i \t %10.f \n", i, (*p)[i].nama, (*p)[i].noPegawai, (*p)[i].departeman, (*p)[i].jabatan, (*p)[i].waktukerja, (*p)[i].thp);
		puts ("_________________________________________________________________________________________________");
		totalgaji = totalgaji + (*p)[i].thp;
	}
	puts("");
	printf ("Total Beban Gaji : %.0f", totalgaji);
}

void slipgajipegawai (Pegawai *p, int j){
		int i;
	puts       ("|=================================================================================|");
	puts 	   ("|                                Slip Gaji Pegawai                                |");
	puts 	   ("|=================================================================================|");

	for(i=1;i<j;i++){
		
		time_t t;   // not a primitive datatype
    	time(&t);
    
		puts   (" ________________________________________________________________________________ ");
		puts   ("|PT. IMPLEMENTASI PERANGKAT LUNAK AIG - A");
		puts   ("|Jln. In Aja Dulu Siapa Tau Cocok");
		puts   ("|Telp 		: 081224225565");
		puts   ("|Website 	: pejuangcinta.com ");
		printf ("|Tanggal 	: %s", ctime(&t));
		puts   ("|--------------------------------------------------------------------------------");
		printf ("|Nomor Pegawai : %i\n", (*p)[i].noPegawai);
		printf ("|Nama Pegawai  : %s\n", (*p)[i].nama);
		printf ("|Departemen    : %s\n", (*p)[i].departeman);
		printf ("|Jabatan       : %s\n", (*p)[i].jabatan);
		puts   ("|--------------------------------------------------------------------------------");
		puts   ("|Penerimaan");
		printf ("|Gaji Pokok 		: Rp %i\n", ((*p)[i].waktukerja)*25000);
		puts   ("|Tunjangan Makan 	: Rp 900000");
		puts   ("|Tunjangan Keluarga 	: Rp 1500000");
		printf ("|Take Home Pay 		: Rp %.0f\n", (*p)[i].thp);
		puts   ("|--------------------------------------------------------------------------------");	
		puts   ("| Dibuat oleh : ");
		puts   ("|\n|\n|\n|\n|\n| Gerald Andreas");
		puts   ("|________________________________________________________________________________");		
	}
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

