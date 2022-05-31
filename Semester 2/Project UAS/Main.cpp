#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
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

            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 2)
        {

            cout << "\nKembali ke Menu Awal? (y/n) ";
            cin >> menuAwal;
            system("cls");
        }
        else if (pilihMenuAwal == 3)
        {
            do
            {
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

                        cout << "\nKembali ke Menu Sequential Search? (y/n) ";
                        cin >> menuSequentialSearch;
                        system("cls");
                    } while (menuSequentialSearch == "y");
                }
                else if (menuSearching2 == 2)
                {
                    do
                    {

                        cout << "\nKembali ke Menu Binary Search? (y/n) ";
                        cin >> menuBinarySearch;
                        system("cls");
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

                        cout<<"Ulangi Pengurutan? (y/n) ";
                        cin>>menuBubbleSort;
                    } while (menuBubbleSort == "y");
                }
                else if (menuSorting2 == 2)
                {
                    do
                    {

                        cout<<"Ulangi Pengurutan? (y/n) ";
                        cin>>menuSelectionSort;
                    } while (menuSelectionSort == "y");
                }
                else if (menuSorting2 == 3)
                {
                    do
                    {
                        cout<<"Ulangi Pengurutan? (y/n) ";
                        cin>>menuInsertionSort;
                    } while (menuInsertionSort == "y");
                }
                else if (menuSorting2 == 4)
                {
                    do
                    {

                        cout<<"Ulangi Pengurutan? (y/n) ";
                        cin>>menuShellSort;
                    } while (menuShellSort == "y");
                }
                else if (menuSorting2 == 5)
                {
                    do
                    {

                        cout<<"Ulangi Pengurutan? (y/n) ";
                        cin>>menuQuickSort;
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
                cout<<"Transaksi"<<endl;
                cout<<"1. Merging Sambung"<<endl;
                cout<<"2. Updating"<<endl;
                cout<<"Pilih Menu: ";
                cin>>menuTransaksi2;
                system("cls");
                if(menuTransaksi2==1)
                {
                    do{
                    cout<<"Ulangi? (y/n) ";
                    cin>>menuMergingSambung;
                    }while(menuMergingSambung=="y");
                }
                else if(menuTransaksi2==2)
                {
                    do{
                    cout<<"Ulangi? (y/n) ";
                    cin>>menuUpdating;
                    }while(menuUpdating=="y");
                }
                else
                {
                    cout<<"Pilihan tidak ada"<<endl;
                }
                cout<<"\nKembali ke Menu Transaksi? (y/n) ";
                cin>>menuTransaksi;
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