#include <iostream>
#include <iomanip>
#include <fstream>
#include <iomanip>
using namespace std;

struct dataPenduduk
{
    string nama;
    int nomorKtp;
    string status;
    string golonganDarah;
};

string replaceSpasi(string str);
string replaceUnderscore(string str);
void inputData(dataPenduduk data[]);
void outputData(dataPenduduk data[]);
void sequentialSearch(dataPenduduk data[], string file);

int main()
{
    dataPenduduk penduduk[100], tempPenduduk[100];
    string menuAwal, menuSearching, menuSorting, menuTransaksi;
    string menuSequentialSearch, menuBinarySearch;
    string menuBubbleSort, menuSelectionSort, menuInsertionSort, menuShellSort, menuQuickSort;
    string menuMergingSambung, menuUpdating;
    int pilihMenuAwal, menuSearching2, menuSorting2, menuTransaksi2;

    do
    {
        cout << "Tugas Project Algo Lanjut 2022" << endl;
        cout << "1. Input Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Searching Data" << endl;
        cout << "4. Sorting Data" << endl;
        cout << "5. Transaksi" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih Menu: ";
        cin >> pilihMenuAwal;
        system("cls");

        if (pilihMenuAwal == 1)
        {
            inputData(penduduk);
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 2)
        {
            outputData(tempPenduduk);
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 3)
        {
            do
            {
                system("cls");
                cout << "Cari Data Kependudukan" << endl;
                cout << "1. Sequential" << endl;
                cout << "2. Binary" << endl;
                cout << "Pilih Menu: ";
                cin >> menuSearching2;
                system("cls");
                if (menuSearching2 == 1)
                {
                    do
                    {
                        system("cls");
                        int i = 0;
                        string namaFile;
                        cout << "Masukkan Nama File : ";
                        cin >> namaFile;
                        ifstream ifs(namaFile);
                        if (ifs.is_open())
                        {
                            sequentialSearch(tempPenduduk, namaFile);
                        }
                        else
                        {
                            cout << "File tidak ditemukan" << endl;
                        }
                        cout << "\nKembali ke Menu Sequential Search? (y/n) ";
                        cin >> menuSequentialSearch;
                    } while (menuSequentialSearch == "y");
                }
                else if (menuSearching2 == 2)
                {
                    do
                    {
                        system("cls");

                        cout << "\nKembali ke Menu Binary Search? (y/n) ";
                        cin >> menuBinarySearch;
                    } while (menuBinarySearch == "y");
                }
                else
                {
                    cout << "Pilihan tidak ada" << endl;
                }
                cout << "\nKembali ke Menu Searching? (y/n) ";
                cin >> menuSearching;

            } while (menuSearching == "y");
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 4)
        {
            do
            {
                system("cls");
                cout << "Pengurutan Data Penduduk" << endl;
                cout << "1. Bubble Sort" << endl;
                cout << "2. Selection Sort" << endl;
                cout << "3. Insertion Sort" << endl;
                cout << "4. Shell Sort" << endl;
                cout << "5. Quick Sort" << endl;
                cout << "Pilih Menu: ";
                cin >> menuSorting2;
                if (menuSorting2 == 1)
                {
                    do
                    {
                        system("cls");

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuBubbleSort;
                    } while (menuBubbleSort == "y");
                }
                else if (menuSorting2 == 2)
                {
                    do
                    {
                        system("cls");

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuSelectionSort;
                    } while (menuSelectionSort == "y");
                }
                else if (menuSorting2 == 3)
                {
                    do
                    {
                        system("cls");

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuInsertionSort;
                    } while (menuInsertionSort == "y");
                }
                else if (menuSorting2 == 4)
                {
                    do
                    {
                        system("cls");

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuShellSort;
                    } while (menuShellSort == "y");
                }
                else if (menuSorting2 == 5)
                {
                    do
                    {
                        system("cls");

                        cout << "Ulangi Pengurutan? (y/n) ";
                        cin >> menuQuickSort;
                    } while (menuQuickSort == "y");
                }
                else
                {
                    cout << "Pilihan tidak ada" << endl;
                }
                cout << "\nKembali ke Menu Sorting? (y/n) ";
                cin >> menuSorting;
            } while (menuSorting == "y");
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 5)
        {
            do
            {
                system("cls");
                cout << "Transaksi" << endl;
                cout << "1. Merging Sambung" << endl;
                cout << "2. Updating" << endl;
                cout << "Pilih Menu: ";
                cin >> menuTransaksi2;
                system("cls");
                if (menuTransaksi2 == 1)
                {
                    do
                    {
                        system("cls");

                        cout << "Ulangi? (y/n) ";
                        cin >> menuMergingSambung;
                    } while (menuMergingSambung == "y");
                }
                else if (menuTransaksi2 == 2)
                {
                    do
                    {
                        system("cls");

                        cout << "Ulangi? (y/n) ";
                        cin >> menuUpdating;
                    } while (menuUpdating == "y");
                }
                else
                {
                    cout << "Pilihan tidak ada" << endl;
                }
                cout << "\nKembali ke Menu Transaksi? (y/n) ";
                cin >> menuTransaksi;
            } while (menuTransaksi == "y");
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 6)
        {
            cout << "Terima kasih telah menggunakan program ini" << endl;
            return 0;
        }
        else
        {
            cout << "Pilihan tidak ada" << endl;
            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }

    } while (menuAwal == "y");
}
string replaceSpasi(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '_';
        }
    }
    return str;
}
string replaceUnderscore(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '_')
        {
            str[i] = ' ';
        }
    }
    return str;
}
void inputData(dataPenduduk data[])
{
    string namaFile;
    int banyakData = 0;

    cout << "========================" << endl;
    cout << "INPUT DATA KEPENDUDUKAN" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Nama File : ";
    cin >> namaFile;
    cout << "Banyaknya Data\t: ";
    cin >> banyakData;

    for (int i = 0; i < banyakData; i++)
    {
        cout << "\t Nomor KTP\t: ";
        cin >> data[i].nomorKtp;
        cin.ignore();
        cout << "\t Nama\t\t: ";
        getline(cin, data[i].nama);
        cout << "\t Status\t\t: ";
        cin >> data[i].status;
        cout << "\t Golongan Darah\t: ";
        cin >> data[i].golonganDarah;
        cout << "\n";
    }
    for (int i = 0; i < banyakData; i++)
        data[i].nama = replaceSpasi(data[i].nama);

    ofstream ofs(namaFile, ios::app);
    if (ofs.is_open())
    {
        for (int i = 0; i < banyakData; i++)
        {
            ofs << data[i].nomorKtp << " "
                << data[i].nama << " "
                << data[i].status << " "
                << data[i].golonganDarah << " "
                << endl;
        }
        ofs.close();
    }
}
void outputData(dataPenduduk data[])
{
    int i = 0;
    int jumlahData = 0;
    string namaFile;
    cout << "========================" << endl;
    cout << "OUTPUT DATA KEPENDUDUKAN" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Nama File : ";
    cin >> namaFile;
    ifstream ifs(namaFile);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    jumlahData += i - 1;
    cout << setfill('-') << setw(85) << "-" << endl;
    cout << left << "|" << setfill(' ') << setw(16) << " Nomor KTP"
         << "|" << setfill(' ') << setw(23);
    cout << " Nama"
         << "|" << setfill(' ') << setw(19) << " Status"
         << "|" << setfill(' ') << setw(19);
    cout << " Golongan Darah"
         << "|" << endl;
    cout << setfill('-') << setw(85) << "-" << endl;
    for (int i = 0; i < jumlahData; i++)
    {
        cout << "| " << setfill(' ') << setw(15) << data[i].nomorKtp << "| " << setfill(' ') << setw(22) << replaceUnderscore(data[i].nama);
        cout << "| " << setfill(' ') << setw(18) << data[i].status << "| " << setfill(' ') << setw(18) << data[i].golonganDarah;
        cout << "| " << endl;
    }
    cout << setfill('-') << setw(85) << "-" << endl;
}
void sequentialSearch(dataPenduduk data[], string file)
{
    system("cls");
    cout << "============================" << endl;
    cout << "Pencarian Dengan Sequential" << endl;
    cout << "============================" << endl;
    cout << "1. NIK" << endl;
    cout << "2. Nama" << endl;
    cout << "3. Status" << endl;
    cout << "4. Golongan Darah" << endl;
    cout << "Pilih : ";
    int pilih, i = 0, banyakData = 0;
    cin >> pilih;
    ifstream ifs(file);
    while (!ifs.eof())
    {
        ifs >> data[i].nomorKtp;
        ifs >> data[i].nama;
        ifs >> data[i].status;
        ifs >> data[i].golonganDarah;
        i++;
    }
    ifs.close();
    banyakData += i - 1;

    if (pilih == 1)
    {
        int nik;
        cout << "Masukkan Nomor KTP : ";
        cin >> nik;
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (data[i].nomorKtp == nik)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[i].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[i].nama) << endl;
            cout << "Status\t\t: " << data[i].status << endl;
            cout << "Golongan Darah\t: " << data[i].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 2)
    {
        string nama;
        cout << "Masukkan Nama : ";
        cin.ignore();
        getline(cin, nama);
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (replaceSpasi(data[i].nama) == replaceSpasi(nama))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[i].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[i].nama) << endl;
            cout << "Status\t\t: " << data[i].status << endl;
            cout << "Golongan Darah\t: " << data[i].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 3)
    {
        string status;
        cout << "Masukkan Status : ";
        cin.ignore();
        getline(cin, status);
        bool found = false;
        for (i = 0; i < banyakData; i++)
        {
            if (replaceSpasi(data[i].status) == replaceSpasi(status))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[i].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[i].nama) << endl;
            cout << "Status\t\t: " << data[i].status << endl;
            cout << "Golongan Darah\t: " << data[i].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else if (pilih == 4)
    {
        string golonganDarah;
        cout << "Masukkan Golongan Darah : ";
        cin.ignore();
        getline(cin, golonganDarah);
        bool found = false;
        for (int i = 0; i < banyakData; i++)
        {
            if (replaceSpasi(data[i].golonganDarah) == replaceSpasi(golonganDarah))
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "\nNomor KTP\t: " << data[i].nomorKtp << endl;
            cout << "Nama\t\t: " << replaceUnderscore(data[i].nama) << endl;
            cout << "Status\t\t: " << data[i].status << endl;
            cout << "Golongan Darah\t: " << data[i].golonganDarah << endl;
        }
        else
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
    else
    {
        cout << "Pilihan tidak ada" << endl;
    }
}