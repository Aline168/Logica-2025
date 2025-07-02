#include <iostream>
using namespace std;

int main(){

    int M=0;
    int N=0;

    cin >> N;
    cin >> M;


    if (N<=40 || M <=40)
    {
        cout << N-M << endl;

    }
    else
    {
        cout<< "valor invalido";
    }

    return 0;
}
