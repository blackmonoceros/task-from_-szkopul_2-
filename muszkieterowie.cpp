#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int liczba_kandydatow;
    cin>>liczba_kandydatow;

    if(liczba_kandydatow < 1 || liczba_kandydatow > 1000000){
        cout<< "Nieprawidlowa wartosc. Podaj w zakresie 1 - 1000000";
        return 1;
    }

    int* moc_kandydata=new int[liczba_kandydatow];
    for (int i = 0; i < liczba_kandydatow; i++) {
        cin>>moc_kandydata[i];

        if(moc_kandydata[i] < -1000000 || moc_kandydata[i] > 1000000) {
            cout << "Nieprawidlowa wartosc. Podaj w zakresie -1000000 - 1000000";
            delete[] moc_kandydata;
            return 1;
        }
    }

    sort(moc_kandydata, moc_kandydata + liczba_kandydatow, greater<int>());

    for(int i = 0; i < min(10, liczba_kandydatow);i++){
        cout<<moc_kandydata[i]<<" ";
    }

    delete[]moc_kandydata;

    return 0;
}