#pragma once
#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisare(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}
void secventiereElementeIntreExtEgale(int v[], int dim) {
    int dr = 0;
    int stg = 0;
    for (int i = 1; i <= dim; ++i)
    {
        for (int j = i + 1; j <= dim; ++j)
        {
            if (v[i] == v[j])
            {

                stg = i;
                dr = j;

            }
        }
    }

    for (int f = 0; f <= dim; f++) {
        if (f >= stg && f <= dr) {
            cout << v[f] << " ";
        }
    }
}
void secventierePanta(int v[], int dim) {
	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] == v[i-1] +1) {
			int j = i;
			while (j + 1 < dim && v[j] == v[j - 1] + 1) {
				j++;
			}
			if (j - i + 1 > dmax - smax + 1) {
				smax = i, dmax = j;

			}

		}
	}
	for (int f = 0; f <= dim; f++) {
		if (f >= smax && f <= dmax) {
			cout << v[f] << " ";
		}
	}
	cout << endl;
}
void secventiereSol3(int v[], int dim,int n) {
	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < dim; i++) {
		for (int j = i + 1; j < dim; ++j) {
			int s = 0;
			for (int f = i; f < j; f++) {
				s += v[f];
			}
			if (s != 0 && s % n == 0 && j - i + 1 > dmax - smax + 1) {
				smax = i; dmax = j;
			}
		}
	}
	for (int f = 0; f <= dim; f++) {
		if (f >= smax && f <= dmax) {
			cout << v[f] << " ";
		}
	}
	cout << endl;
}
int nrCifreDistincte(int n) {
	int nrc = 0;
	while (n != 0) {
		int cifra = n % 10;
		int nr = n;
		int x = 0;
		for (int i = 0; nr > 0; nr = nr / 10) {
			i = nr % 10;
			if (i == cifra) {
				x++;
			}
		}
		if (x <= 1) {
			nrc++;
		}
		n = n / 10;
	}
	return nrc;
}
void secventiereNrcDiferite(int v[], int dim) {
	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < dim; i++) {
		if (nrCifreDistincte(v[i]) == nrCifreDistincte(v[i + 1])) {
			int j = i;
			while (j + 1 < dim && nrCifreDistincte(v[j]) == nrCifreDistincte(v[j + 1])) {
				j++;
			}
			if (j - i + 1 > dmax - smax + 1) {
				smax = i, dmax = j;

			}

		}
	}
	for (int f = 0; f <= dim; f++) {
		if (f >= smax && f <= dmax) {
			cout << v[f] << " ";
		}
	}
	cout << endl;
}
void citire2(int v[], int& dim) {

	ifstream f("numere2.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void secventaVectorInclus(int v[], int dim, int v2[], int dim2) {
	int stg = 0;
	int dr = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] = v2[i]) {
			for (int f = 0; f < dim2; f++) {
				if (v[f] == v2[f]) {
					stg = i;
					dr = f;
				}
			}
		}
		
	}
	cout << stg << " " << dr;
} 
bool paritateDiferita(int n, int m) {
	cout << n << endl;
	if (n % 2 == 0) {
		if (m % 2 != 0) {
			return true;
		}
		else if (m % 2 == 0) {
			return false;
		}
	}
	if (n % 2 != 0) {
		if (m % 2 == 0) {
			return true;
		}
		else if (m % 2 != 0) {
			return false;
		}
	}
}
void secventaParitatiDiferite(int v[], int dim) {
	int smax = 1;
	int dmax = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] < v[i + 1] && paritateDiferita(v[i], v[i + 1]) == true) {
			int j = i;
			while (j + 1 < dim && v[j] < v[j + 1] && paritateDiferita(v[j], v[j + 1]) == true) {
				j++;
			}
			if (j - i + 1 > dmax - smax + 1) {
				smax = i, dmax = j;

			}
		}
	}
	cout << smax << " " << dmax << endl;
}
int sumaSecvente(int v[], int dim) {
	int s = 0;
	for (int i = 0; i < dim; i++) {
		for (int x = i; x < dim; x++) {
			s += v[x];
		}
	}
	return s;
}
int elementMaximPoz(int v[], int dim) {
	int eMax = -1;
	int poz = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] > eMax) {
			eMax = v[i];
			poz = i;
		}
	}
	return poz;
}
int elementMinimPoz(int v[], int dim) {
	int eMin = 9999;
	int poz = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] < eMin) {
			eMin = v[i];
			poz = i;
		}
	}
	return poz;
}
int sumaIntreMaxMin(int v[], int dim) {
	int max = elementMaximPoz(v, dim);
	int min = elementMinimPoz(v, dim);
	int s = 0;
	for (int i = 0; i < dim; i++) {
		if (i >= min && i <= max) {
			s += v[i];
		}
	}
	return s;
}
void sumaSecventeSelectate(int v[], int dim,int n) {
	int ctr = 0;
	while (ctr != n) {
		cout << "Introduceti i: " << endl;
		int i;
		cin >> i;
		cout << " Introduecti j: " << endl;
		int j = 0;
		cin >> j;
		int s = 0;
		for (int f = 0; f < dim; f++) {
			if (i >= i && i <= j) {
				s += v[i];
			}
		}
		cout << s << endl;
	}
}
void bubbleSort(int v[], int dim) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < dim - 1; j++) {
			if (v[j] > v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				aff = false;
			}
		}
	} while (aff == false);
}

void secventaVectorOrdontatInclus(int v[], int dim, int v2[], int dim2) {
	bubbleSort(v2, dim2);
	int stg = 0;
	int dr = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] = v2[i]) {
			for (int f = 0; f < dim2; f++) {
				if (v[f] == v2[f]) {
					stg = i;
					dr = f;
				}
			}
		}

	}
	cout << stg << " " << dr;
}