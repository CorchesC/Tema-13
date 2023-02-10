#pragma once
#include "functii.h"
using namespace std;

void sol1() {
	//Se dă un şir de numere. Găsiți un subşir de lungime maximă care începe și se sfârşeşte cu acelaşi număr.
	int v[100], d = 0;
	citire(v, d);
	secventiereElementeIntreExtEgale(v, d);
}
void sol2() {
	//Definim noțiunea de pantă ca fiind o secvență de elemente consecutive din vectorul A astfel încât a[i] = a[i - 1] + 1. Să se determine panta de lungimea maximă.
	int v[100], d = 0;
	citire(v, d);
	secventierePanta(v, d);
}
void sol3() {
	//Pentru un vector x de n numere întregi dat, să se afişeze o secvenţă (dacă există) de elemente consecutive din vector pentru care suma elementelor se divide cu n.
	int v[100], d = 0;
	citire(v, d);
	cout << "Introduceti n: " << endl;
	int n;
	cin >> n;
	secventiereSol3(v, d,n);
}
void sol4() {
	//Se consideră un şir de n numere naturale mai mici decât 32000. Se cere să se determine o succesiune cu număr maxim de elemente din şir, care are proprietatea că fiecare componentă a succesiunii are acelaşi număr de cifre distincte în scrierea sa.
	int v[100], d = 0;
	citire(v, d);
	secventiereNrcDiferite(v, d);
}
void sol5() {
	//Se dau doi vectori A cu m componente şi B cu n componente (n>m). Componentele ce formează vectorul A sunt distincte două câte două.Să se scrie un program care să verifice dacă toate componentele vectorului A luate în orice ordine se găsesc în vectorul в pe poziții consecutive.Dacă testul este reuşit să se afişeze fiecare poziție din vectorul B unde începe secvenţa de elemente din A.
	int v[100], d = 0;
	citire(v, d);
	int n[100], k = 0;
	citire2(n, k);
	secventaVectorInclus(v, d,n,k);
}
void sol6() {
	//Se dă un şir cu n elemente, numere naturale. Determinaţi cea mai lungă secvenţă de elemente din şir cu proprietatea că oricare două valori consecutive în secvenţă au parităţi diferite.
	int v[100], d = 0;
	citire(v, d);
	secventaParitatiDiferite(v, d);
}
void sol7() {
	//Se consideră un vector cu n elemente numere naturale. Calculați suma sumelor tuturor subsecvențelor ce se pot forma cu elementele vectorului. Pentru că suma poate fi foarte mare, afișați suma modulo 1.000.000.007.
	int v[100], d = 0;
	citire(v, d);
	int s = sumaSecvente(v, d);
	cout << "Suma tuturor secventelor vectorului este: " << s << endl;
}
void sol8() {
	//Se dă un şir format din n numere naturale distincte. Calculați suma elementelor din secvenţa ce uneşte cel mai mic şi cel mai mare element din şir.
	int v[100], d = 0;
	citire(v, d);
	int s = sumaIntreMaxMin(v, d);
	cout << "Suma elementelor formate din secventa cu extermintatiile elementul maxim si cel mimim al vectorului este: " << endl;
}
void sol9() {
	//Fie N un numar natural și un șir de N numere naturale V[1], V[2], …, V[N]. Pentru M întrebări de forma (i,j), să se calculeze suma termenilor V[i], V[i + 1], …, V[j].
	int v[100], d = 0;
	citire(v, d);
	cout << "cate secvente doriti sa introudceti: " << endl;
	int n;
	cin >> n;
	sumaSecventeSelectate(v, d, n);
}
void sol10() {
	//Se dau doi vectori. A cu m componente şi B cu n componente (n>m). Componentele ce formează vectorul A sunt distincte două câte două.Să se scrie un program care să verifice dacă toate componentele vectorului A luate în orice ordine se găsesc în vectorul B pe poziții consecutive.Dacă testul este reuşit să se afişeze fiecare poziție din vectorul B unde începe secvenţa de elemente din A.
	int v[100], d = 0;
	citire(v, d);
	int n[100], k = 0;
	citire2(n, k);
	secventaVectorOrdontatInclus(v, d, n, k);
}