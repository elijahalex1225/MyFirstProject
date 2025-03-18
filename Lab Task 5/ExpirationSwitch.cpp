#include <iostream>
using namespace std;
#include <random>

int main (){

    int daysUntilExpiration = rand() % 10+1;

    switch (daysUntilExpiration){
        case 0 : 
        cout <<"Your subscription has expired.  "<<endl;
        break;
       
       
       
        case 1 : 
        cout <<"Your subscription expires within a day! "<<endl;
        cout << "Renew now and save 20%!" <<endl;
        break;

        case  3: 
        cout <<"Your subscription expires within a day! "<<endl;
        cout << "Renew now and save 20%!" <<endl;
    }
}