#define _DFD_H
#include "boolean.h"
#include <stdio.h>
#include <conio.h>

#define nMax 99
#define TAB int
#define TAD float
#define TH char 


typedef struct{
	TAB nomer;
	TH nama[nMax];
	TAB noPegawai;
	TH departeman[nMax];
	TH jabatan[nMax];
	TAD thp;
	TAB waktukerja;
} Pegawai [nMax];

Pegawai p;

void inisialisasi (Pegawai *p,int i);
void inputdatapegawai(Pegawai *p, int i);
void cetakdatapegawai (Pegawai *p, int i);
void hitunggaji (Pegawai *p, int j);
void laporangajipegawai (Pegawai *p, int j);
void slipgajipegawai (Pegawai *p, int j);
void delay(int milliseconds);
