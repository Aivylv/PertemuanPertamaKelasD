#include <iostream>
using namespace std;

int main()
{
	int nAlas, nTinggi;
	float nLuas;
	cout << "Masukan Alasnya= ";
	cin >> nAlas;
	cout << "Masukkan Tingginya= ";
	cin >> nTinggi;
	nLuas = 0.5 * (nAlas * nTinggi);
	cout << "Luasnya adalah= " << nLuas << endl;

	system("pause");
}