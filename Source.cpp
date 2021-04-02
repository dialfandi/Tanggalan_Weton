#include<stdio.h>
#include<stdlib.h>

/*int main()
{
	int bulan, tahun, jhari;
	int jum_hari[12] =
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	puts("MEMPEROLEH JUMLAH HARI");
	puts("PADA SUATU BULAN DAN SUATU TAHUN");
	puts("--------------------------------");
	printf("Masukkan bulan (1..12) : ");
	scanf_s("%d", &bulan);
	printf("Masukkan tahunnya : ");
	scanf_s("%d", &tahun);
	if (bulan == 2)
		if (tahun % 4 == 0)
			jhari = 29;
		else
			jhari = 28;
	else
		jhari = jum_hari[bulan - 1];
	printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n", bulan, tahun, jhari);

	system("pause");
}*/

/*int main() {
	int A[12] = { 31, 28, 30 ,31, 30, 31, 30, 31, 30, 31, 30, 31 };
	int B[12] = { 31, 29, 30 ,31, 30, 31, 30, 31, 30, 31, 30, 31 };
	char C[7][7] = { "senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu" };
	char D[5][7] = { "pahing", "pon", "wage", "kliwon", "legi" };
	int kabisat = 366, T_kabisat = 365;
	int i, a, c=0;

	printf("masukkan hari: ");
	scanf_s("%d", &a);
	system("pause");
}*/

/*void menu() {
	printf("pilihan menu\n");
}

void main() {
	menu();
}*/

/*void cetak(char a) {
	printf("Aku akan selalu ada untukmu");
}

void main() {
	char a;
	scanf_s("%c/n", &a);
	cetak(a);
}*/

/*int total(int x, int y) 
{
	return(x+y);
}

void main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n", total(a, b));
}*/

/*void main()
{
	int i;
	float total = 0, rata;
	float nilai_tes[MAKS];			
	for (i = 0; i < MAKS; i++)		
	{
	printf("Nilai tes ke-%d : ", i + 1);
	scanf_s("%f", &nilai_tes[i]);
									
	total = total + nilai_tes[i];
	}
	rata = total / MAKS;			
	printf("\nNilai rata-rata = %g\n", rata);
}*/

/*int nilai[5] = { 40,50,60,70,80 };
int main() {
	nilai[0] = 40;
	nilai[1] = 50;
	nilai[2] = 60;
	nilai[3] = 70;
	nilai[4] = 80;
	nilai[5] = 90;
	nilai[6] = 100;
		printf("nilai ke-0= %d\n", nilai[0]);
	printf("nilai ke-1= %d\n", nilai[1]);
	printf("nilai ke-2= %d\n", nilai[2]);
	printf("nilai ke-3= %d\n", nilai[3]);
	printf("nilai ke-4= %d\n", nilai[4]);
	printf("nilai ke-5= %d\n", nilai[5]);
	printf("nilai ke-6= %d\n", nilai[6]);
	nilai[4] = 70;
	printf("nilai ke-0= %d\n", nilai[0]);
	printf("nilai ke-1= %d\n", nilai[1]);
	printf("nilai ke-2= %d\n", nilai[2]);
	printf("nilai ke-3= %d\n", nilai[3]);
	printf("nilai ke-4= %d\n", nilai[4]);
	printf("nilai ke-5= %d\n", nilai[5]);
	printf("nilai ke-6= %d\n", nilai[6]);
	for (int i = 0; i <= 4; i++)
	{
		printf("nilai ke [%d]= %d\n", i, nilai[i]);
	}
}*/

/*void main()
{
	int i, j, k;
	int data_huruf[2][8][8] = {
		{ { 0, 1, 1, 1, 1, 1, 0, 0 },
		{ 0, 1, 0, 0, 0, 1, 0, 0 },
		{ 0, 1, 0, 0, 0, 1, 0, 0 },
		{ 1, 1, 1, 1, 1, 1, 1, 0 },
		{ 1, 1, 0, 0, 0, 0, 1, 0 },
		{ 1, 1, 0, 0, 0, 0, 1, 0 },
		{ 1, 1, 0, 0, 0, 0, 1, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0 }
		},
		{ { 1, 1, 1, 1, 1, 1, 0, 0 },
		{ 1, 0, 0, 0, 0, 1, 0, 0 },
		{ 1, 0, 0, 0, 0, 1, 0, 0 },
		{ 1, 1, 1, 1, 1, 1, 1, 0 },
		{ 1, 1, 0, 0, 0, 0, 1, 0 },
		{ 1, 1, 0, 0, 0, 0, 1, 0 },
		{ 1, 1, 1, 1, 1, 1, 1, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0 }
		}
	};
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 8; j++)
		{
			for (k = 0; k < 8; k++)
				if (data_huruf[i][j][k] != 0)
					putchar('\xDB');
				else
					putchar(' ');
			printf("\n"); 
		}
		printf("\n"); 
	}
	system("pause");
}*/

/*#define MAKS 5
int main() {
	int i;
	float total = 0, rata;
	float nilai_tes[MAKS]; 
	for (i = 0; i < MAKS; i++)
	{
		printf("Nilai tes ke-%d : ", i + 1);
		scanf_s("%f", &nilai_tes[i]);
		total = total + nilai_tes[i];
	}
	rata = total / MAKS; 
	printf("\nNilai rata-rata = %g\n", rata);
}*/

/*void main()
{
	int bulan, tahun, jhari;
	int jum_hari[12] =
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	puts("MEMPEROLEH JUMLAH HARI");
	puts("PADA SUATU BULAN DAN SUATU TAHUN");
	puts("--------------------------------");
	printf("Masukkan bulan (1..12) : ");
	scanf_s("%d", &bulan);
	printf("Masukkan tahunnya : ");
	scanf_s("%d", &tahun);
	if (bulan == 2)
		if (tahun % 4 == 0)
			jhari = 29;
		else
			jhari = 28;
	else
		jhari = jum_hari[bulan - 1];
	printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n", bulan, tahun, jhari);
}*/

/*int main()
{
	int i;
	int values[] = { 1,2,3,4,5,6,7,8,9 };
	char word[] = { 'H','e','l','l','o' };
	for (i = 0; i < 9; ++i)
		printf("values[%d] is %d\n", i, values[i]);
	printf("\n");
	for (i = 0; i < 6; ++i)
		printf("word[%d] is %c\n", i, word[i]);
	system("pause");
}*/

/*int main()
{
	int tahun, kode_program;
	int data_lulus[4][3];
	99;
	//Memberikan data ke array 
	data_lulus[0][0] = 80;
	data_lulus[0][1] = 540;
	data_lulus[0][2] = 1032;
	data_lulus[1][0] = 15;
	data_lulus[1][1] = 83;
	data_lulus[1][2] = 301;
	data_lulus[2][0] = 8;
	data_lulus[2][1] = 12;
	data_lulus[2][2] = 15;
	data_lulus[3][0] = 10;
	data_lulus[3][1] = 129;
	data_lulus[3][2] = 257;
	// proses utk memperoleh informasi jml siswa yg lulus 
	printf("Masukkan tahun dr data yg ingin anda ketahui ");
	printf("(1998..2000) : ");
	scanf_s("%d", &tahun);
	printf("Masukkan kode program kursus yang ingin anda ketahui");
	printf("(1 = INTRO, 2 = BASIC, 3 = PASCAL, 4 = C) : ");
	scanf_s("%d", &kode_program);
	printf("\nTotal kelulusan program tsb = %d\n",
		data_lulus[kode_program - 1][tahun - 1998]);
	system("pause");
}*/

/*int main()
{
	int i, j;
	int huruf_A[8][8] = {
		{ 0, 1, 1, 1, 1, 1, 0, 0 } ,
		{ 0, 1, 0, 0, 0, 1, 0, 0 } ,
		{ 0, 1, 0, 0, 0, 1, 0, 0 } ,
		{ 1, 1, 1, 1, 1, 1, 1, 0 } ,
		{ 1, 1, 0, 0, 0, 0, 1, 0 } ,
		{ 1, 1, 0, 0, 0, 0, 1, 0 } ,
		{ 1, 1, 0, 0, 0, 0, 1, 0 } ,
		{ 0, 0, 0, 0, 0, 0, 0, 0 }
	};
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			if (huruf_A[i][j] != 0)
				putchar('\xDB\n');
			else
				putchar(' ');
		putchar('\n');
	}
	system("pause");
}*/

/*#define MAKS 5
void main()
{
	int i;
	float total = 0, rata;
	float nilai_tes[MAKS]; 
	for (i = 0; i < MAKS; i++)
	{
		printf("Nilai tes ke-%d : ", i + 1);
		scanf_s("%f", &nilai_tes[i]);
		total = total + nilai_tes[i];
		}
		rata = total / MAKS;
		printf("\nNilai rata-rata = %g\n", rata);
		system("pause");
}*/

/*void main()
{
	int i;
	int values[] = { 1,2,3,4,5,6,7,8,9 };
	char word[] = { 'H','e','l','l','o' };
	for (i = 0; i < 9; ++i)
		printf("values[%d] is %d\n", i, values[i]);
	printf("\n");
	for (i = 0; i < 6; ++i)
		printf("word[%d] is %c\n", i, word[i]);
	system("pause");
}*/

/*#define JUM_KOLOM 2
#define MAX_KAR 256
void main()
{
	char konversi[][JUM_KOLOM] = {
		'A', 'T',
		'a', 't',
		'E', 'M',
		'e', 'm',
		'I', 'V',
		'i', 'v',
		'O', 'S',
		'o', 's',
		'U', 'J',
		'u', 'j'
	};

	char kalimat[MAX_KAR], karakter;
	int i = 0, j, jum_kar, jum_penyandi;
	printf("Masukkan sebuah kalimat dan akhiri dengan ENTER\n");
	printf("Kemudian kalimat tsb akan saya sandikan\n");
	printf("Kalimat: ");
	//Memasukkan data karakter ke array kalimat 
	while ((kalimat[i] = getchar()) != '\n')
		i++;
	jum_kar = i;
	//sandikan dan menampilkan ke layar 
	printf("\nHasil setelah disandikan: ");
	jum_penyandi = sizeof(konversi) / JUM_KOLOM;
	for (i = 0; i < jum_kar; i++)
	{
		karakter = kalimat[i];
		for (j = 0; j < jum_penyandi; j++)
		{
			if (karakter == konversi[j][0])
			{
				karakter = konversi[j][1];
				break; // keluar dari for terdalam 
			}
			if (karakter == konversi[j][1])
			{
				karakter = konversi[j][0];
				break; // keluar dari for terdalam 
			}
		}
		putchar(karakter);
	}
	printf("\n\n");
	system("pause");
}*/

/*#define MAKS 20
void pemasukan_data(float[], int *);
void pengurutan_data(float[], int);
void penampilan_data(float[], int);
void main()
{
	float data[MAKS];
	int jum_data;
	pemasukan_data(data, &jum_data);
	pengurutan_data(data, jum_data);
	penampilan_data(data, jum_data);
}
void pemasukan_data(float x[], int *pjumlah)
{
	int jum, i;
	printf("Jumlah data = ");
	scanf_s("%d", &jum);
	for (i = 0; i < jum; i++)
	{
		printf("Data ke-%d : ", i + 1);
		scanf_s("%f", &x[i]);
	}
	*pjumlah = jum;
}
void pengurutan_data(float x[], int jumlah)
{
	int i, j;
	float smtr;
	for (i = 0; i < jumlah - 1; i++)
		for (j = i + 1; j < jumlah; j++)
			if (x[i] > x[j]) // penukaran data 

			{
				smtr = x[i];
				x[i] = x[j];
				x[j] = smtr;
			}
}
void penampilan_data(float x[], int jumlah)
{
	int i;
	printf("\nData setelah diurutkan :\n\n");
	for (i = 0; i < jumlah; i++)
		printf("Data ke-%d : %g\n", i + 1, x[i]);
	system("pause");
}*/

char hari[1][7][7] =
{ "Kamis", "Jum'at", "Sabtu", "Minggu", "Senin", "Selasa", "Rabu" };
char pasar[1][5][8]=
{ "Wage", "Kliwon", "Legi", "Paing", "Pon" };
int hb[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };

int jmlhari(int d, int m, int y) {
	int ht = (y - 1970) * 365 - 1;
	int hs = hb[m - 1] + d;
	int kab = 0;
	int i;

	if (y % 4 == 0) {
		if (m > 2) {
			hs++;
		}
	}
	for (i = 2016; i < y; i++) {
		if (i % 4 == 0) {
			kab++;
		}
	}
	return (ht + hs + kab);
}