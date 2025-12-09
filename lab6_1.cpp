#include<iostream>
using namespace std;

int main(){
    int Even = 0 ,Odd = 0 , number;
    while (1){
        cout << "Enter an integer: ";
        cin >> number;
        if(number==0){
            break;
        }
            if(number%2==0){
                Even = Even+1;
            }else{
                Odd = Odd+1;
            }

    }
    cout << "#Even numbers = "<<Even;
    cout << "\n#Odd numbers = "<<Odd;
    return 0;
}
