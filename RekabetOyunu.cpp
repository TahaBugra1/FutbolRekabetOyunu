#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {

	setlocale(LC_ALL, "Turkish");
	srand(time(NULL));

	int BilgisayarSkor, OyuncuSkor = 0, x, secim, OyuncuGolSayisi;

	cout << "--------------------------REKABET OYUNUNA HO�GELD�N�Z--------------------------------" << endl;
	cout << "--------- Galatasaray = 1 , Fenerbah�e = 2 , Be�ikta� = 3 , Trabzonspor = 4 -----------" << endl;
	cout << "NOT : Se�iminiz yukardaki gibi olmal�d�r " << endl << endl;

	cout << "Oyunu ka� tur oynamak istiyorsunuz: ";
	cin >> x;

	for (int i = 0; i < x; i++) {
		int bilgisayar = rand() % 4 + 1;
		cout << endl;
		cout << "----------------------------------" << endl;
		cout << "L�tfen Tak�mlardan Birini Se�iniz: ";
		cin >> secim;
		cout << "----------------------------------" << endl;

		if (secim == 1) {
			cout << "Se�ti�iniz Tak�m: Galatasaray" << endl;


			if (bilgisayar == 2) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Fenerbah�e" << endl;
			}

			if (bilgisayar == 3) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Be�ikta�" << endl;
			}

			if (bilgisayar == 4) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Trabzonspor" << endl;
			}

		}

		else if (secim == 2) {
			cout << "Se�ti�iniz Tak�m: Fenerbah�e" << endl;


			if (bilgisayar == 1) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Galatasaray" << endl;
			}

			if (bilgisayar == 3) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Be�ikta�" << endl;
			}

			if (bilgisayar == 4) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Trabzonspor" << endl;
			}

		}

		else if (secim == 3) {
			cout << "Se�ti�iniz Tak�m: Be�ikta�" << endl;


			if (bilgisayar == 1) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Galatasaray" << endl;
			}

			if (bilgisayar == 2) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Fenerbah�e" << endl;
			}

			if (bilgisayar == 4) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Trabzonspor" << endl;
			}

		}

		else if (secim == 4) {
			cout << "Se�ti�iniz Tak�m: Trabzonspor" << endl;


			if (bilgisayar == 1) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Galatasaray" << endl;
			}

			if (bilgisayar == 2) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Fenerbah�e" << endl;
			}

			if (bilgisayar == 3) {
				cout << "Bilgisayar�n Se�ti�i Tak�m: Be�ikta�" << endl;
			}

		}


		if (secim < 1 || secim > 4) {
			cout << "Hatal� Se�im Yapt�n�z!! " << endl;
		}

		cout << endl;

		cout << "Atmak �stedi�iniz Gol Say�s�n� Giriniz (Girebilece�iniz Gol Aral���: 1 - 5): ";
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


		cout << "Oyuncunun Gol Say�s�: " << OyuncuGolSayisi << endl;
		cout << "Bilgisayar�n Gol Say�s�: " << BilgisayarGolSayisi << endl << endl;


		if (secim == 1) {
			switch (bilgisayar) {
			case 2:
				cout << "Galatasaray " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Fenerbah�e" << endl;
				break;

			case 3:
				cout << "Galatasaray " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Be�ikta�" << endl;
				break;

			case 4:
				cout << "Galatasaray " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Trabzonspor" << endl;
				break;

			}
		}

		else if (secim == 2) {
			switch (bilgisayar) {
			case 1:
				cout << "Fenerbah�e " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Galatasaray" << endl;
				break;
			case 3:
				cout << "Fenerbah�e " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Be�ikta�" << endl;
				break;

			case 4:
				cout << "Fenerbah�e " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Trabzonspor" << endl;
				break;
			}
		}

		else if (secim == 3) {
			switch (bilgisayar) {
			case 1:
				cout << "Be�ikta� " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Galatasaray" << endl;
				break;

			case 2:
				cout << "Be�ikta� " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Fenerbah�e" << endl;
				break;

			case 4:
				cout << "Be�ikta� " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Trabzonspor" << endl;
				break;
			}
		}


		else if (secim == 4) {
			switch (bilgisayar) {
			case 1:
				cout << "Trabzonspor " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Galatasaray" << endl;
				break;

			case 2:
				cout << "Trabzonspor " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Fenerbah�e" << endl;
				break;

			case 3:
				cout << "Trabzonspor " << OyuncuSkor << " - " << BilgisayarGolSayisi << " Be�ikta�" << endl;
				break;
			}

		}


		if (BilgisayarGolSayisi == OyuncuGolSayisi) {
			cout << "Tak�mlar Berabere Kald�!! ";
		}

		else if (OyuncuGolSayisi > BilgisayarGolSayisi) {
			cout << "Oyuncu Kazand�!! ";
		}

		else if (OyuncuGolSayisi < BilgisayarGolSayisi) {
			cout << "Bilgisayar Kazand�!! ";
		}


	}



	cout << endl << endl << endl;
	return 0;
}
