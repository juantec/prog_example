#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    float hora;
    cout<<"Este programa muestra un saludo dependiendo de la hora del dia"<<endl;
    cout<<"introduce la hora  en la siguiente forma: 12.00 / 13.20"<<endl;
    cin>>hora;
    if (hora<12.00) {
        cout<<"buenos dias"<<endl;
    } else {
        if (hora>12.00&&hora<14.00) {
            cout<<"buen medio dia "<<endl;
        } else {
            if (hora>12.00) {
                cout<<"buenas tardes"<<endl;
            }
        }
    }
    _getch();
}
