#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int jumlahTest;
    cin >> jumlahTest;
    for (int i=0;i<jumlahTest;i++){
        long long sum = 0, minimal = INT_MAX;
        long long jumlahAnak;
        cin >> jumlahAnak;
        for(int j=0;j<jumlahAnak;j++){
            long long potAnak;
            cin >>potAnak;
            minimal = min(minimal, potAnak);
            sum += potAnak;
        }
        cout << sum - (minimal * jumlahAnak) << "\n";
    }
    return 0;
}
