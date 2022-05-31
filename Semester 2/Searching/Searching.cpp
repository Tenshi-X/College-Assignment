#include <iostream>
using namespace std;

typedef struct
{
    int nim;
    string namaMahasiswa;
}data;

void menu();
void tambahData(data dataMahasiswa[],int jumlahData);
void cariData(data dataMahasiswa[],int jumlahData);
void lihatData(data dataMahasiswa[],int jumlahData);


int main(){    
    data mahasiswa[100];
    int jumlahData,pilihMenu;
    string kembaliMenu;

    do{
        system("CLS");
    menu();
    cin>>pilihMenu;
    if(pilihMenu == 1){
        system("CLS");
        cout<<"Masukkan Jumlah Data = ";
        cin>>jumlahData;
        tambahData(mahasiswa,jumlahData);
        cin >> kembaliMenu;
    }
    else if(pilihMenu == 2){
        system("CLS");
        lihatData(mahasiswa,jumlahData);
        cin >> kembaliMenu;
    }
    else if(pilihMenu == 3){
        system("CLS");
        cariData(mahasiswa,jumlahData);
        cin >> kembaliMenu;
    }
    else if(pilihMenu == 4){
        return 0;
    }
    else{

    }
    }while(kembaliMenu == "Y" || kembaliMenu == "y");
}
void menu(){
    cout<<"Silakan Pilih Menu"<<endl;
    cout<<"1. Input"<<endl;
    cout<<"2. Output"<<endl;
    cout<<"3. Searching"<<endl;
    cout<<"4. Keluar Program"<<endl;
    cout<<"Pilih Menu = ";
}
void tambahData(data dataMahasiswa[],int jumlahData){
    for(int i = 0;i < jumlahData;i++){
        cout<<"Data ke -"<< i+1 <<endl;
        cout<<"NIM\t= ";
        cin >> dataMahasiswa[i].nim;
        cout<<"Nama\t= ";
        cin.ignore();
        getline(cin,dataMahasiswa[i].namaMahasiswa);
        cout<<endl;
    }
    cout<<"Kembali ke menu?(y/Y)";
}
void cariData(data dataMahasiswa[], int jumlahData){
    int i = 0,nimMahasiswa;
    bool cari = false;
    cout<<"Masukkan NIM Mahasiswa yang ingin dicari = ";
    cin >> nimMahasiswa;
    while(i < jumlahData && !cari ){
    if(nimMahasiswa == dataMahasiswa[i].nim){
        cari = true;
    }
    else{
        i++;
    }
    }
    if(cari){
        cout<<endl;
        cout<<"Data Ditemukan di index ke-"<<i<<endl;
        cout<<"NIM\t= "<<dataMahasiswa[i].nim<<endl;
        cout<<"Nama\t= "<<dataMahasiswa[i].namaMahasiswa<<endl;
    }
    else{
        cout<<endl;
        cout<<"Data Tidak Ditemukan"<<endl;
    }
    cout<<"\nKembali ke menu?(y/Y)";
}
void lihatData(data dataMahasiswa[],int jumlahData){

    for(int i = 0;i < jumlahData;i++){
        cout<<"Data Mahasiswa ke -"<<i+1<<endl;
        cout<<"NIM\t= "<<dataMahasiswa[i].nim<<endl;
        cout<<"Nama\t= "<<dataMahasiswa[i].namaMahasiswa<<endl;
        cout<<endl;
    }
    cout<<"Kembali ke menu?(y/Y)";
}