#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    float score;
};

vector<Student> students;

void add_student() {
    Student s;
    cout << "Masukkan nama siswa: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Masukkan nilai siswa: ";
    cin >> s.score;
    students.push_back(s);
    cout << "Data siswa berhasil ditambahkan!" << endl;
}

int main() {
    int choice;
    do {
        cout << "1. Tambah Data Siswa\n";
        cout << "2. Keluar\n";
        cout << "Pilih menu: ";
        cin >> choice;
        switch (choice) {
            case 1: add_student(); break;
            case 2: cout << "Program selesai\n"; break;
            default: cout << "Pilihan salah\n";
        }
    } while (choice != 2);
    return 0;
}
