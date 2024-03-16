#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {

	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));

	int BilgisayarSkor, OyuncuSkor = 0, x, secim, OyuncuGolSayisi;

	cout << "--------------------------REKABET OYUNUNA HOÞGELDÝNÝZ--------------------------------" << endl;
	cout << "--------- Galatasaray = 1 , Fenerbahçe = 2 , Beþiktaþ = 3 , Trabzonspor = 4 -----------" << endl;
	cout << "NOT : Seçiminiz yukardaki gibi olmalýdýr " << endl << endl;

	cout << "Oyunu kaç tur oynamak istiyorsunuz: ";
	cin >> x;

	for (int i = 0; i < x; i++) {
		int bilgisayar = rand() % 4 + 1;
		cout << endl;
		cout << "----------------------------------" << endl;
		cout << "Lütfen Takýmlardan Birini Seçiniz: ";
		cin >> secim;
		cout << "----------------------------------" << endl;

		if (secim == 1) {
			cout << "Seçtiðiniz Takým: Galatasaray" << endl;


			if (bilgisayar == 2) {
				cout << "Bilgisayarýn Seçtiði Takým: Fenerbahçe" << endl;
			}

			if (bilgisayar == 3) {
				cout << "Bilgisayarýn Seçtiði Takým: Beþiktaþ" << endl;
			}

			if (bilgisayar == 4) {
				cout << "Bilgisayarýn Seçtiði Takým: Trabzonspor" << endl;
			}

		}

		else if (secim == 2) {
			cout << "Seçtiðiniz Takým: Fenerbahçe" << endl;


			if (bilgisayar == 1) {
				cout << "Bilgisayarýn Seçtiði Takým: Galatasaray" << endl;
			}

			if (bilgisayar == 3) {
				cout << "Bilgisayarýn Seçtiði Takým: Beþiktaþ" << endl;
			}

			if (bilgisayar == 4) {
				cout << "Bilgisayarýn Seçtiði Takým: Trabzonspor" << endl;
			}

		}

		else if (secim == 3) {
			cout << "Seçtiðiniz Takým: Beþiktaþ" << endl;


			if (bilgisayar == 1) {
				cout << "Bilgisayarýn Seçtiði Takým: Galatasaray" << endl;
			}

			if (bilgisayar == 2) {
				cout << "Bilgisayarýn Seçtiði Takým: Fenerbahçe" << endl;
			}

			if (bilgisayar == 4) {
				cout << "Bilgisayarýn Seçtiði Takým: Trabzonspor" << endl;
			}

		}

		else if (secim == 4) {
			cout << "Seçtiðiniz Takým: Trabzonspor" << endl;


			if (bilgisayar == 1) {
				cout << "Bilgisayarýn Seçtiði Takým: Galatasaray" << endl;
			}

			if (bilgisayar == 2) {
				cout << "Bilgisayarýn Seçtiði Takým: Fenerbahçe" << endl;
			}

			if (bilgisayar == 3) {
				cout << "Bilgisayarýn Seçtiði Takým: Beþiktaþ" << endl;
			}

		}


		if (secim < 1 || secim > 4) {
			cout << "Hatalý Seçim Yaptýnýz!! " << endl;
		}

		cout << endl;

		cout << "Atmak Ýstediðiniz Gol Sayýsýný Giriniz (Girebileceðiniz Gol Aralýðý: 1 - 5): ";
		cin >> OyuncuGolSayisi;

		cout << endl;

		if (OyuncuGolSayisi == 1) {
			OyuncuSkor++;
		}

		else if (OyuncuGolSayisi == 2) {
			OyuncuSkor += 2;
		}

		else if (OyuncuGolSayisi == 3) {
			OyuncuSkor += 3;
		}

		else if (OyuncuGolSayisi == 4) {
			OyuncuSkor += 4;
		}

		else if (OyuncuGolSayisi == 5) {
			OyuncuSkor += 5;
		}


		int BilgisayarGolSayisi = rand() % 5;


		cout << "Oyuncunun Gol Sayýsý: " << OyuncuGolSayisi << endl;
		cout << "Bilgisayarýn Gol Sayýsý: " << BilgisayarGolSayisi << endl << endl;


		if (secim == 1) {
			switch (bilgisayar) {
			case 2:
				cout << "Galatasaray " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Fenerbahçe" << endl;
				break;

			case 3:
				cout << "Galatasaray " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Beþiktaþ" << endl;
				break;

			case 4:
				cout << "Galatasaray " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Trabzonspor" << endl;
				break;

			}
		}

		else if (secim == 2) {
			switch (bilgisayar) {
			case 1:
				cout << "Fenerbahçe " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Galatasaray" << endl;
				break;
			case 3:
				cout << "Fenerbahçe " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Beþiktaþ" << endl;
				break;

			case 4:
				cout << "Fenerbahçe " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Trabzonspor" << endl;
				break;
			}
		}

		else if (secim == 3) {
			switch (bilgisayar) {
			case 1:
				cout << "Beþiktaþ " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Galatasaray" << endl;
				break;

			case 2:
				cout << "Beþiktaþ " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Fenerbahçe" << endl;
				break;

			case 4:
				cout << "Beþiktaþ " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Trabzonspor" << endl;
				break;
			}
		}


		else if (secim == 4) {
			switch (bilgisayar) {
			case 1:
				cout << "Trabzonspor " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Galatasaray" << endl;
				break;

			case 2:
				cout << "Trabzonspor " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Fenerbahçe" << endl;
				break;

			case 3:
				cout << "Trabzonspor " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Beþiktaþ" << endl;
				break;
			}

		}


		if (BilgisayarGolSayisi == OyuncuGolSayisi) {
			cout << "Takýmlar Berabere Kaldý!! ";
		}

		else if (OyuncuGolSayisi > BilgisayarGolSayisi) {
			cout << "Oyuncu Kazandý!! ";
		}

		else if (OyuncuGolSayisi < BilgisayarGolSayisi) {
			cout << "Bilgisayar Kazandý!! ";
		}


	}



	cout << endl << endl << endl;
	return 0;
}
