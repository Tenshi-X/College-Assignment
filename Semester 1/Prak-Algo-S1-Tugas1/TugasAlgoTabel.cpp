#include <iostream>
#include <iomanip>

using namespace std;
int main (){
	char nama[30],plug[30];
	int nim;
	
	cout<<"Masukkan :"<<endl;
	cout<<"Nama\t: ";
	cin.getline(nama,sizeof(nama));
	
	cout<<"NIM\t: ";
	cin>>nim;
	
	cout<<"Plug\t: ";
	cin.ignore();
	cin.getline(plug,sizeof(plug));
	
	cout<<"\nInilah data Anda :"<<endl;
	
	cout<<"Nama \t: "<<nama<<endl;
	cout<<"NIM \t: "<<nim<<endl;
	cout<<"Plug \t: "<<plug<<endl;
	
	cout<<"\nDalam bentuk Tabel :"<<endl;
	cout<<setfill('=')<<setw(70)<<"="<<endl;
	cout<<setfill(' ')<<setiosflags(ios::left)<<setw(21)<<"NIM";
	cout<<"| ";
	cout<<setw(21)<<"Nama";
	cout<<"| ";
	cout<<setw(21)<<"Plug"<<endl;
	
	cout<<setfill('=')<<setw(70)<<"="<<endl;
	
	cout<<setfill(' ')<<setiosflags(ios::left)<<setw(21)<<nim;
	cout<<"| ";
	cout<<setw(21)<<nama;
	cout<<"| ";
	cout<<setfill(' ')<<setw(21)<<plug<<endl;
	
	cout<<setfill('=')<<setw(70)<<"="<<endl;
	return 0;
	
	}
