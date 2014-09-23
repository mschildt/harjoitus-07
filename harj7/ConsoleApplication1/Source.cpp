/*	Työn nimi: Harjoitus 7
	Tekijän nimi: Mikael Schildt
	Tehtävän kuvaus:
	Tee ohjelma, joka kysyy käyttäjältä nimen, pituuden sentteinä ja painon kiloina.
	Ohjelma laskee ja tulostaa käyttäjän ihannepainon (pituus-100). Lisäksi
	ohjelma kertoo käyttäjän nykyisen painon eron kiloina verrattuna ihanne-
	painoon. Ohjelman käyttöliittymä toimii seuraavasti:

	Ihannepaino

	Ohjelma laskee ihannepainosi
	pituutesi perusteella.

	Anna nimesi > Mooses
	Anna pituutesi sentteinä > 175
	Anna osoitteesi > Peikkovuori 5 as 4
	Anna painosi kiloina > 89


	Arvoisa Mooses
	Osoitteesi on Peikkovuori 5 as 4
	Nykyinen painosi 89.0 kg
	Ihannepainosi 75.0 kg
	Erotus 14.0 kg

	...
	a) käytä syotto/tulostus toimintoihin funktioita
	printf/scanf/gets/...(perus C:n funtiot, kirja sivu 86 - 91)  TEHDÄÄN MYÖHEMMIN
	b) käytä cin/cout/cin.get... olioita ohjelman
	toteuttamiseen (c++ metodit, kirja sivu 92 - 99)


*/
#include <iostream>
using namespace std;

const int IHANNE = 100;

float EROTUS;
float EROTUS2;

void Laske(float, float);

void main()
{
	char NIMI[30];
	char OSOITE[40];
	float PITUUS;
	float PAINO;
	cout << "Anna nimesi: \n";
	cin.get();
	cin.get(NIMI, 30);
	cout << "Anna pituutesi sentteina: \n";
	cin >> PITUUS;
	cout << "Anna osoitteesi: \n";
	cin.get();
	cin.get(OSOITE, 40);
	cout << "Anna painosi: \n";
	cin >> PAINO;

	Laske(PITUUS, IHANNE);
	cout << "\n Arvoisa " << NIMI;
	cout << "\n Osoitteesi on " << OSOITE;
	cout << "\n Nykyinen painosi on " << PAINO;
	cout << " kg \n Ihannepainosi on " << EROTUS;

	Laske(PAINO, EROTUS);
	cout << " kg \n Erotus " << EROTUS2;
	cout << " kg \n";
}

void Laske(float eka, float toka)
{
	EROTUS = eka - toka;
	EROTUS2 = eka - toka;
}