#include <iostream>
#include <vector>
#include <string>


using std::cout;
using std::cin;
using std::endl;



int main(int argc, char* argv[])
{
    
    cout<< "Benvenuto nel Tool delle Tabelline \n";
    cout<< "Imparare le tabelline non e' mai stato cosi semplice \n";
    cout<< "Seleziona la tabelline che vuoi visualizzare: [1/10] \n";
    
    int select;
    cin>>select;

    switch (select)
    {
        
    case 1: 
        cout<< "Tabellina del 1 \n";
        cout<< "1 x 1 = 1"<<endl;
        cout<< "1 x 2 = 2"<<endl;
        cout<< "1 x 3 = 3"<<endl;
        cout<< "1 x 4 = 4"<<endl;
        cout<< "1 x 5 = 5"<<endl;
        cout<< "1 x 6 = 6"<<endl;
        cout<< "1 x 7 = 7"<<endl;
        cout<< "1 x 8 = 8"<<endl;
        cout<< "1 x 9 = 9"<<endl;
        cout<< "1 x 10 = 10"<<endl;
        break;
    
    case 2:
        cout<< "Tabellina del 2 \n";
        cout<< "2 x 1 = 2"<<endl;
        cout<< "2 x 2 = 4"<<endl;
        cout<< "2 x 3 = 6"<<endl;
        cout<< "2 x 4 = 8"<<endl;
        cout<< "2 x 5 = 10"<<endl;
        cout<< "2 x 6 = 12"<<endl;
        cout<< "2 x 7 = 14"<<endl;
        cout<< "2 x 8 = 16"<<endl;
        cout<< "2 x 9 = 18"<<endl;
        cout<< "2 x 10 = 20"<<endl;
        break;
        
    case 3:
        cout<< "Tabellina del 3 \n";
        cout<< "3 x 1 = 3"<<endl;
        cout<< "3 x 2 = 6"<<endl;
        cout<< "3 x 3 = 9"<<endl;
        cout<< "3 x 4 = 12"<<endl;
        cout<< "3 x 5 = 15"<<endl;
        cout<< "3 x 6 = 18"<<endl;
        cout<< "3 x 7 = 21"<<endl;
        cout<< "3 x 8 = 24"<<endl;
        cout<< "3 x 9 = 27"<<endl;
        cout<< "3 x 10 = 30"<<endl;
        break;
        
    case 4: 
        cout<< "Tabellina del 4 \n";
        cout<< "4 x 1 = 4"<<endl;
        cout<< "4 x 2 = 8"<<endl;
        cout<< "4 x 3 = 12"<<endl;
        cout<< "4 x 4 = 16"<<endl;
        cout<< "4 x 5 = 20"<<endl;
        cout<< "4 x 6 = 24"<<endl;
        cout<< "4 x 7 = 28"<<endl;
        cout<< "4 x 8 = 32"<<endl;
        cout<< "4 x 9 = 36"<<endl;
        cout<< "4 x 10 = 40"<<endl;
        break;
        
    case 5: 
        cout<< "Tabellina del 5 \n";
        cout<< "5 x 1 = 5"<<endl;
        cout<< "5 x 2 = 10"<<endl;
        cout<< "5 x 3 = 15"<<endl;
        cout<< "5 x 4 = 20"<<endl;
        cout<< "5 x 5 = 25"<<endl;
        cout<< "5 x 6 = 30"<<endl;
        cout<< "5 x 7 = 35"<<endl;
        cout<< "5 x 8 = 40"<<endl;
        cout<< "5 x 9 = 45"<<endl;
        cout<< "5 x 10 = 50"<<endl;
        break;
        
    case 6:
        cout<< "Tabellina del 6 \n";
        cout<< "6 x 1 = 6"<<endl;
        cout<< "6 x 2 = 12"<<endl;
        cout<< "6 x 3 = 18"<<endl;
        cout<< "6 x 4 = 24"<<endl;
        cout<< "6 x 5 = 30"<<endl;
        cout<< "6 x 6 = 36"<<endl;
        cout<< "6 x 7 = 42"<<endl;
        cout<< "6 x 8 = 48"<<endl;
        cout<< "6 x 9 = 54"<<endl;
        cout<< "6 x 10 = 60"<<endl;
        break;
        
    case 7:
        cout<< "Tabellina del 7 \n";
        cout<< "7 x 1 = 7"<<endl;
        cout<< "7 x 2 = 14"<<endl;
        cout<< "7 x 3 = 21"<<endl;
        cout<< "7 x 4 = 28"<<endl;
        cout<< "7 x 5 = 35"<<endl;
        cout<< "7 x 6 = 42"<<endl;
        cout<< "7 x 7 = 49"<<endl;
        cout<< "7 x 8 = 56"<<endl;
        cout<< "7 x 9 = 63"<<endl;
        cout<< "7 x 10 = 70"<<endl;
        break;
        
    case 8:
        cout<< "Tabellina del 8 \n";
        cout<< "8 x 1 = 8"<<endl;
        cout<< "8 x 2 = 16"<<endl;
        cout<< "8 x 3 = 24"<<endl;
        cout<< "8 x 4 = 32"<<endl;
        cout<< "8 x 5 = 40"<<endl;
        cout<< "8 x 6 = 48"<<endl;
        cout<< "8 x 7 = 56"<<endl;
        cout<< "8 x 8 = 64"<<endl;
        cout<< "8 x 9 = 72"<<endl;
        cout<< "8 x 10 = 80"<<endl;
        break;
        
    case 9:
        cout<< "Tabellina del 9 \n";
        cout<< "9 x 1 = 9"<<endl;
        cout<< "9 x 2 = 18"<<endl;
        cout<< "9 x 3 = 27"<<endl;
        cout<< "9 x 4 = 36"<<endl;
        cout<< "9 x 5 = 45"<<endl;
        cout<< "9 x 6 = 54"<<endl;
        cout<< "9 x 7 = 63"<<endl;
        cout<< "9 x 8 = 72"<<endl;
        cout<< "9 x 9 = 81"<<endl;
        cout<< "9 x 10 = 90"<<endl;
        break;
        
    case 10: 
        cout<< "Tabellina del 10 \n";
        cout<< "10 x 1 = 10"<<endl;
        cout<< "10 x 2 = 20"<<endl;
        cout<< "10 x 3 = 30"<<endl;
        cout<< "10 x 4 = 40"<<endl;
        cout<< "10 x 5 = 50"<<endl;
        cout<< "10 x 6 = 60"<<endl;
        cout<< "10 x 7 = 70"<<endl;
        cout<< "10 x 8 = 80"<<endl;
        cout<< "10 x 9 = 90"<<endl;
        cout<< "10 x 10 = 100"<<endl;
        break;
        
     default:
        cout<< "Mi dispiace, ma nel mio DB ho soltanto le tabelline da 1 a 10 :( \n";
    }
    
    
    
    return 0;
}
