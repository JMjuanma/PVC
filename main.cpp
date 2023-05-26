#include <bits/stdc++.h>
#define ffor(i, o, n) for(int i = o; i < n; i ++)
#define RAYA cout << "-------------------------" << endl;
using namespace std;
unsigned long long int fact[20];
void psimples(){
    int e;
    cout<<"Cuantos elementos existen"<<endl;
    cin>>e;
    cout<<fact[e]<<endl;
}
void circulares(){
    int e;
    cout<<"Cuantos elementos existen"<<endl;
    cin>>e;
    cout<<fact[max(0,e-1)]<<endl;
}
void prepeticion(){
    int e, s=0, t, n;
    unsigned long long int f=1;
    cout<<"Cuantos tipos de elementos existen y la cantidad de elementos de cada uno"<<endl;
    cin>>t;
    ffor(i, 0, t) {
        cin>>n;
        s+=n;
        f*=fact[n];
    }
    cout<<fact[s]/f<<endl;
}
void vsimples(){
    int a, b;
    cout<<"Cuantos elementos hay?"<<endl;
    cin >> a;
    cout << "Y grupos de cuantos elementos vamos a formar?" << endl;
    cin >> b;
    cout << (fact[a] / (fact[min(0, a - b)])) << endl;
}

unsigned long long elevar(unsigned long long a, long long b)
{
    long long x=1;
    for( int i=1; i<=b; i++)
    {
        x*=a;
    }
    return x;
}

void vrepeticion(){
    int t, c;
    unsigned long long int f=1;
    cout<<"Cuantos elementos existen"<<endl;
    cin>>t;
    cout<<"Y grupos de cuantos elementos vamos a formar?";
    cin>>c;
    cout<<elevar(t, c)<<endl;
}
void crepeticion(){
    int t, c;
    unsigned long long int f=1;
    cout<<"Cuantos elementos existen"<<endl;
    cin >> t;
    cout << "Y grupos de cuantos elementos vamos a formar?";
    cin >> c;
    cout << (fact[t + c + 1] / (fact[c] * fact[max(0, t - 1)])) << endl;
}
void csimples(){
    int t, c;
    unsigned long long int f=1;
    cout<<"Cuantos elementos existen"<<endl;
    cin >> t;
    cout << "Y grupos de cuantos elementos vamos a formar?";
    cin >> c;
    cout << (fact[t] / (fact[c] * fact[max(0, t - c)])) << endl;
}

void permutacion()
{
    int n;
    cout<<"1.- Simples"<<endl;
    cout<<"2.- Circulares"<<endl;
    cout<<"3.- Repeticion"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
            psimples();
            break;
        case 2:
            circulares();
            break;
        case 3:
            prepeticion();
            break;
    }

}

void variacion()
{ int n;
    cout<<"1.- Simples"<<endl;
    cout<<"2.- Repeticion"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
            vsimples();
            break;
        case 2:
            vrepeticion();
            break;
    }

}

void combinacion()
{ int n;
    cout<<"1.- Simples"<<endl;
    cout<<"2.- Repeticion"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
            csimples();
            break;
        case 2:
            crepeticion();
            break;
    }

}

void factInit()
{
    unsigned long long int x = 1;
    fact[0]=1;
    for(unsigned long long int i = 1; i < 19; i ++)
    {
        x *= i;
        fact[i] = x;
        cout << "SDD = " << x << endl;
    }
    ffor(i, 0, 19)
    {
        cout << fact[i] << endl;
    }
}

int main() {
    factInit();
    int n;
    while(1)
    {
        RAYA;
        cout<<"---Menu--"<<endl;
        RAYA;
        cout<<"1.-Permutacion"<<endl;
        cout<<"2.-Variacion"<<endl;
        cout<<"3.-Combinacion"<<endl;
        cin>>n;
        switch(n)
        {
            case 1:
                permutacion();
                break;
            case 2:
                variacion();
                break;
            case 3:
                combinacion();
                break;
        }
    }
    return 0;
}
