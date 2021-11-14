 #include <iostream>
using namespace std;
int main(){
    int n =0, primo = 0, secondo = 1, terzo = 0;
    cin >> n;


        cout << "1" << endl;
            for (int i = 2; i<=(n+1); i++) {
                if (terzo <= n) {
                    terzo = primo + secondo;
                    primo = secondo;
                    secondo = terzo;

                    cout << terzo << endl;
                }
            }
    return 0;
}
