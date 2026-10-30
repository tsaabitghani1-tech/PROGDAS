#include <iostream>
#include <vector>
#include <string>
using namespace std;

// int main() {
//     vector<string> buah = {"mangga", "jeruk"};

//     cout << buah[0] << endl;

//     buah.insert(buah.begin() + 0, "apel");
//     buah.insert(buah.begin() + 2, "semangka");
//     buah.push_back("pisang");
//     cout << "Setelah ditambah: ";
//     for (string item : buah) {
//         cout << item << " ";
//     }
//     cout << endl;

//     buah.erase(buah.begin());
//     buah.erase(buah.begin() + 1);
//     buah.pop_back();
//     cout << "Setelah dihapus: ";
//     for (string item : buah) {
//         cout << item << " ";
//     }
//     cout << endl;

//     return 0;
// }


// int main() {
//     vector<string> orang = {"budi", "siti"};

//     cout << orang[0] << endl;

//     orang.insert(orang.begin(), "roni"); 
//     orang.push_back("dewi"); 
//     orang.erase(orang.begin()); 
//     cout << "hasil akhir: ";
//     for (string item: orang) {
//         cout << item << " ";
//     }
//     cout << endl;

//     return 0;
// }

// int main() {
//     vector<string> daftarlagu = {"ini abadi", "monokrom"};
//     daftarlagu.insert(daftarlagu.begin() + 1, "everthing u are");
//     daftarlagu.push_back("aitakatta");
//     daftarlagu.erase(daftarlagu.begin());
//     cout << "hasil akhir: ";
//     for (string lagu : daftarlagu) {
//         cout << "" << lagu << " ";
//     }
//     return 0;
// }


int main() {
    vector<string> tas = {"pedang Kayu", "perisai Besi"};
    tas.insert(tas.begin(), "Potion Darah");       
    tas.insert(tas.begin() + 2, "Busur Panah");   
    tas.pop_back();                               
    cout << "hasil akhir: ";
    for (string item : tas) {
        cout << "" << item << " ";
    }
    cout << endl;
    return 0;
}


    