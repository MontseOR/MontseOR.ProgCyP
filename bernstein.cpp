#include <iostream>
#include <thread>

using namespace std;

int a, x, y;
int v, w, t, z, q;

void S1(){
    v = a + x;
    cout << "S1 -> v = " << v << endl;
}

void S2(){
    w = v + y - 1;
    cout << "S2 -> w = " << w << endl;
}

void S3(){
    t = x - w;
    cout << "S3 -> t = " << t << endl;
}

void S4(){
    z = v + w + t - 1;
    cout << "S4 -> z = " << z << endl;
}

void S5(){
    q = t + z;
    cout << "S5 -> q = " << q << endl;
}

int main(){

    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese y: ";
    cin >> y;

    thread h1(S1);
    h1.join();

    thread h2(S2);
    h2.join();

    thread h3(S3);
    h3.join();

    thread h4(S4);
    h4.join();

    thread h5(S5);
    h5.join();

    cout << "\nResultados finales:\n";
    cout << "v = " << v << endl;
    cout << "w = " << w << endl;
    cout << "t = " << t << endl;
    cout << "z = " << z << endl;
    cout << "q = " << q << endl;

    return 0;
}

