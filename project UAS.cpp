#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

COORD kordinat={0,0};
void gotoxy(int x, int y)

{
kordinat.X=x;
kordinat.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),kordinat);
}
struct databuku
{
char *jenisbuku, *judul;
int harga, total;
int jumlah;
};
struct databuku data[30];
int i,n,no, bayar, kembali;
int total_biaya=0;


void jual();

void plgn()
{
struct dataplgn {char Nama [40];
				char Alamat [50];
				int Tlp [12];
					
}plgn[0];
int i,a;
i=1;

gotoxy (1,15);
printf ("DATA PELANGGAN\n");
{
printf ("Nama =");scanf("%s",&plgn[i].Nama);fflush(stdin);
printf ("Alamat =");scanf("%s",&plgn[i].Alamat);fflush(stdin);
printf ("No.Tlp =");scanf("%d",&plgn[i].Tlp);fflush(stdin);
}
printf ("----------------\n");
getch ();
}

void daftar()
{
system("cls");
printf("\n--------------------* DAFTAR  BUKU *--------------------\n\n");
printf("+======================================================+\n");
printf("| No |  JENIS BUKU   |       JUDUL       |    Harga    |\n");
printf("|======================================================|\n");
printf("| 1  |               | Bumi Dan Antariksa| Rp. 250000  |\n");
printf("| 2  |  PENGETAHUAN  | Geografi Dunia    | Rp. 159000  |\n");
printf("| 3  |               | Budaya Indonesia  | Rp. 167000  |\n");
printf("|----|---------------|-------------------|-------------|\n");
printf("| 4  |               | Attack On Titan   | Rp. 95000   |\n");
printf("| 5  |     KOMIK     | Doraemon          | Rp. 75000   |\n");
printf("| 6  |               | Muhammad Al Fatih | Rp. 91000   |\n");
printf("|----|---------------|-------------------|-------------|\n"); 
printf("| 7  |               | Dear Nathan       | Rp. 86000   |\n");
printf("| 8  |     NOVEL     | Dilan 1990        | Rp. 79000   |\n");
printf("| 9  |               | 5 CM              | Rp. 85000   |\n");
printf("|----|---------------|-------------------|-------------|\n");
printf("+======================================================+\n");
jual();
getch();
}

void jual()
{
int no;
i=1;
char lagi;
do{
printf("\nInput no buku : "); scanf("%d",&no);
if (no==1)
{
    data[i].jenisbuku="PENGETAHUAN";
    data[i].judul="Bumi Dan Antariksa";
    data[i].harga=250000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
    printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah); 
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    } else
    if (no==2)
    {
    data[i].jenisbuku="PENGETAHUAN";
    data[i].judul="Geografi Dunia";
    data[i].harga=159000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
    printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah); 
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    }else
    if (no==3)
    {
    data[i].jenisbuku="PENGETAHUAN";
    data[i].judul="Budaya Indonesia";
    data[i].harga=167000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
    printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah);
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    }else
    if (no==4)
    {
    data[i].jenisbuku="KOMIK";
    data[i].judul="Attack On Titan";
    data[i].harga=95000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
    printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah); 
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    }else
    if (no==5)
    {
    data[i].jenisbuku="KOMIK";
    data[i].judul="Doraemon";
    data[i].harga=75000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
    printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah); 
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    }else
    if (no==6)
    {
    data[i].jenisbuku="KOMIK";
    data[i].judul="Muhammad Al Fatih";
    data[i].harga=91000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
    printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah); 
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    }else
    if (no==7)
    { 
    data[i].jenisbuku="NOVEL";
    data[i].judul="Dear Nathan";
    data[i].harga=79000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
	printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah); 
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    }else
    if (no==8)
    {
    data[i].jenisbuku="NOVEL";
    data[i].judul="Dilan 1990";
    data[i].harga=79000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
    printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah); 
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    }else
    if (no==9)
    {
    data[i].jenisbuku="NOVEL";
    data[i].judul="5 CM";
    data[i].harga=85000;
    printf("Jenis Buku  : %s\n",data[i].jenisbuku);
    printf("Judul   : %s\n",data[i].judul);
    printf("Harga  : %d\n",data[i].harga);
    printf("Jumlah : "); scanf("%d",&data[i].jumlah); 
    data[i].total=data[i].harga*data[i].jumlah;
    total_biaya=data[i].total+total_biaya;
    n=n+1;
    }
	 i++;
    printf("\nBeli lagi (Y/T) : "); scanf("%s",&lagi); 
    }while (lagi!='T');
    getch();
}

void output()
{
    system("cls");	
   	printf("+=============================================================================+\n");
    printf("| No |   JENIS BUKU    |       JUDUL       |    Harga    |Jumlah|    Total    |\n");
    printf("|---------------------------------------------------------------|-------------|\n");
    for(i=1;i<=n;i++)
    {
   		printf("|    |                 |                   |             |      |Rp.          |\n");
        gotoxy(3, i+2); printf("%d\n",i);
        gotoxy(8, i+2); printf("%s\n", data[i].jenisbuku);
        gotoxy(25, i+2); printf("%s\n", data[i].judul);
        gotoxy(45, i+2); printf("%d\n", data[i].harga);
        gotoxy(60, i+2); printf("%d\n", data[i].jumlah);
        gotoxy(69, i+2); printf("%d\n", data[i].total);
       
    }printf("|-----------------------------------------------------------------------------|\n");
    printf("+=============================================================================+\n");
    printf("\nCek Terlebih Dahulu Dan Pastikan Barang Anda Benar\n");
    getch();
}
void cetak()
 {		system("cls");
 		printf("                              TOKO BUKU MELATI\n");
 		printf("               Jl.Candi Plaosan,Bugisan Kec.Prambanan Kab.Klaten\n");
 		printf("                         Jawa Tengah Kode.Pos 57454\n");
 		printf("                             Tlp.(082)808241980\n\n");
   		printf("+=============================================================================+\n");
    for(i=1;i<=n;i++)
    {	printf("%d.\t",i);
   		printf("Jenis Buku\t: %s\n", data[i].jenisbuku);
        printf("\tJudul\t: %s\n", data[i].judul);
        printf("\tHarga\t: %d\n", data[i].harga);
        printf("\tJumlah\t: %d\n", data[i].jumlah);
        printf("\tTot.Hrg\t: %d\n", data[i].total);
       
    }
     printf("\nTOTAL YANG HARUS DI BAYAR : Rp.%d\n", total_biaya);
     printf("MASUKAN PEMBAYARAN        : Rp.");scanf("%i",&bayar);
     if (bayar<total_biaya){
     	printf ("\n----------------------MAAF, UANG ANDA TIDAK MENCUKUPI------------------------");
	 }
	 else{
	 	kembali=bayar-total_biaya;
	 printf("KEMBALIAN                 : Rp.%d",kembali);
	 printf("\n+=============================================================================+\n"); 
	 printf("\n                        TERIMAKASIH ATAS KUNJUNGANNYA\n");
	 printf("             *Barang yang sudah di beli tidak dapat di kembalikan*");
	 } 
     getch();
 }

int main()
{
    int pil;
    do{
        system("cls");
        printf("\t SELAMAT DATANG DI TOKO BUKU MELATI\n");
        printf("\t....................................\n");
        printf("\n");
        printf("\t+================================+\n");
        printf("\t|         PENJUALAN BUKU         |\n");
        printf("\t|--------------------------------|\n");
        printf("\t| 1. Data Pelanggan              |\n");
		printf("\t| 2. Pilih Buku                  |\n");
        printf("\t| 3. Lihat Hasil Belanja         |\n");
		printf("\t| 4. Cetak Nota                  |\n");
        printf("\t| 0. Keluar                      |\n");
        printf("\t|--------------------------------|\n");
        printf("\t| Pilih menu :                   |\n");
        printf("\t+================================+\n");
        gotoxy(23,12); scanf("%d",&pil);
        switch(pil)
        {
            case 1 : {plgn();break;}
			case 2 : {daftar(); break;}
            case 3 : {output(); break;}
			case 4 : {cetak(); break;}
            case 0 : break;
            default : gotoxy(1,15); printf("Pilihan salah"); getch();
        }
    }while (pil!=0);
}
