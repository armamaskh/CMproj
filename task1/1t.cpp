#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;


vector<int> A, B, C;
void ZapC(int n) {C.push_back(n);}

void SSORTC() {
    for (int i = 0; i < C.size() ; ++i) {
        for (int j = 0; j < C.size(); ++j) {
            if (C[i] < C[j]) swap(C[i], C[j]);}
        
    }
}

void VIV() {
    for (int elem : A) { cout << elem << " "; }
    cout<<"\n\n" << endl;
    for (int elem : B) { cout << elem << " "; }
    cout << "\n\n" << endl;
    for (int elem : C) { cout << elem << " "; }}

void t1() {
    setlocale(LC_ALL, "0");
    cout << "ЗАДАНИЕ 1 - Даны 2 стержня с дисками. Необходимо переложить диски с 2х стержней в один, в порядке возрастания.\n";
    int a;
    int b;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10000);

    cout << "ВВЕДИТЕ КОЛ-ВО ДИСКОВ НА СТЕРЖНЕ А - > ";
    cin >> a;
    for (int i = 0; i < a; i++)
        A.push_back(int(dis(gen)));
    cout << "ВВЕДИТЕ КОЛ-ВО ДИСКОВ НА СТЕРЖНЕ B - > ";
    cin >> b;
    for (int jj = 0; jj < b; jj++)
        B.push_back(int(dis(gen)));

    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());

    int ii;
    
    
    for (ii = 0; ii < min(A.size(), B.size()); ii++) {
        ZapC(min(A[ii], B[ii]));
        ZapC(max(A[ii], B[ii]));   }
    for (ii = min(A.size(), B.size()) ; ii < (A.size() + B.size()) - min(A.size(), B.size()); ii++) {
            if ( B.size() >ii ) {ZapC(B[ii]);
            }
            else if (A.size() > ii) {ZapC(B[ii]);} } 
    SSORTC();
    cout << "_РЕЗУЛЬТАТ:\n ";
    VIV();
}
