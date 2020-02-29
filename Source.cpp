#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void CetakJudul(char, string, char);

int main()
{
	CetakJudul('-', "CONTOH 1", '-');
	string Nama("RizkyKhapidsyah");

	/* Menampilkan Data String */
	cout << "Menampilkan Data String :";
	cout << Nama << endl << endl;

	/* Mengambil Karakter Berdasarkan Index */
	cout << "Mengambil Karakter Berdasarkan Index : " << endl;
	cout << "Karakter ke 0  : " << Nama[0] << endl;
	cout << "Karakter ke 1  : " << Nama[1] << endl;
	cout << "Karakter ke 2  : " << Nama[2] << endl;
	cout << "Karakter ke 3  : " << Nama[3] << endl;
	cout << "Karakter ke 4  : " << Nama[4] << endl;
	cout << "Karakter ke 5  : " << Nama[5] << endl;
	cout << "Karakter ke 6  : " << Nama[6] << endl;
	cout << "Karakter ke 7  : " << Nama[7] << endl;
	cout << "Karakter ke 8  : " << Nama[8] << endl;
	cout << "Karakter ke 9  : " << Nama[9] << endl;
	cout << "Karakter ke 10 : " << Nama[10] << endl;
	cout << "Karakter ke 11 : " << Nama[11] << endl;
	cout << "Karakter ke 12 : " << Nama[12] << endl;
	cout << "Karakter ke 13 : " << Nama[13] << endl;
	cout << "Karakter ke 14 : " << Nama[14] << endl;
	cout << "Karakter ke 15 : " << Nama[15] << endl << endl; //Karakter ke 15 akan kosong karena pada library string sudah dilakukan penanganan error secara otomatis

	/* Mengambil Karakter Berdasarkan Index - Menggunakan Perulangan */
	cout << "Mengambil Karakter Berdasarkan Index (Menggunakan Perulangan) : " << endl;
	for (int i = 0; i <= 14; i++)
	{
		cout << "Karakter ke " << i << " : " << Nama[i] << endl;
	}
	cout << endl;

	/* Mengambil Karakter Berdasarkan Index - Menggunakan Perulangan (2)*/
	cout << "Mengambil Karakter Berdasarkan Index (Menggunakan Perulangan)_2: " << endl;
	for (int i = 0; i <= 14; i++)
	{
		cout << Nama[i];
	}
	cout << endl << endl;

	CetakJudul('-', "CONTOH 2", '-');
	/* Mengambil Karakter Pada Index Tertentu */
	int X;
	cout << "Isi Nilai Index yang akan ditampilkan Karakternya (0 sd 14)  : ";
	cin >> X;

	if ((X < 0) || (X > 14))
	{
		cout << "Udah dibilang hanya index 0 sampai 14 aja!" << endl;
	}
	else
	{
		cout << "Anda memilih karakter: " << Nama[X] << ", yang berada pada index: " << X << endl << endl;
	}

	CetakJudul('-', "CONTOH 3", '-');
	/* Merubah Karakter Pada Index Tertentu */
	int Y;
	char Z;

	cout << "Masukkan Index Yang Ingin Dirubah Hurufnya (Index dimulai dari 0 sd 14)  : ";
	cin >> Y;
	cout << "Masukkan Karakter/Huruf baru  : ";
	cin >> Z;

	if ((X < 0) || (X > 14))
	{
		cout << "Udah dibilang hanya index 0 sampai 14 aja!" << endl;
	}
	else
	{
		cout << "Anda memilih karakter: " << Nama[X] << ", yang berada pada index: " << X << endl;
		cout << "Yang telah dirubah menjadi: " << Z << endl;
		
		Nama[Y] = Z;
		cout << "Sehingga keseluruhannya menjadi: " << Nama << endl << endl;
	}

	CetakJudul('-', "CONTOH 4", '-');
	/* Menyambung Karakter */
	Nama = "RizkyKhapidsyah";
	string Nama2 = " dan Dessy Puspita Sari";
	string Nama3(Nama + Nama2);
	cout << Nama3 << endl << endl;

	CetakJudul('-', "CONTOH 5", '-');
	/* Menyambung Karakter (Menggunakan Append) */
	string Nama4(" memiliki rencana.");
	Nama3.append(Nama4);
	cout << Nama3 << endl << endl;

	CetakJudul('-', "CONTOH 6", '-');
	/* Menyambung Karakter (Cara Termudah) */
	string A, B, C, D, E, F;
	A = "Halo, ";
	B = "Nama ";
	C = "Saya ";
	D = "Rizky ";
	E = "Khapidsyah";
	F = A += B += C += D += E;
	cout << F << endl;

	_getch();
	return 0;
}

void CetakJudul(char A, string B, char C)
{
	for (int i = 0; i <= 50; i++)
	{
		cout << A;
	}
	
	cout << endl << B << endl;

	for (int i = 0; i <= 50; i++)
	{
		cout << C;
	}

	cout << endl;
}