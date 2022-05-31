#include <iostream>
using namespace std;
int main (){
	string minggu_1, minggu_2, odp, kematian, peningkatan;
	
	cout<<"Program untuk Mengetahui Zona Covid"<<endl;
	cout<<"\nApakah di daerah tersebut terdapat kasus positif covid di minggu pertama?(ada/tidak)"<<endl;
	cout<<"Jawab\t: ";
	cin>>minggu_1;
	if ( minggu_1 == "ada" )
	{
		if ( minggu_1 == "ada" )
		cout<<"Apakah di daerah tersebut terdapat kasus positif covid di minggu kedua?(ada/tidak)"<<endl<<"Jawab\t: ";
		cin>>minggu_2;
		if ( minggu_2 == "ada" )
		cout<<"Apakah ada peningkatan kasus dari minggu pertama ke minggu kedua?(ada/tidak)"<<endl<<"Jawab\t: ";
		cin>>peningkatan;
		if ( peningkatan == "ada" )
		cout<<"Apakah ada kasus kematian akibat dari covid-19?(ada/tidak)"<<endl<<"Jawab\t: ";
		cin>>kematian;
		if ( kematian == "ada" )
		cout<<"Apakah ada ODP di daerah tersebut?(ada/tidak)"<<endl<<"Jawab\t: ";
		else if ( kematian == "tidak" )	
		cout<<"Apakah ada ODP di daerah tersebut?(ada/tidak)"<<endl<<"Jawab\t: ";
		cin>>odp;
		if ( odp == "ada" && kematian == "ada" )
		cout<<"\nDaerah tersebut termasuk ke dalam ZONA HITAM"<<endl;
		if ( odp == "ada" && kematian == "tidak" )
		cout<<"\nDaerah tersebut termasuk ke dalam ZONA MERAH"<<endl;
	}
	
	else if ( minggu_1 == "tidak" )
	{
		if ( minggu_1 == "tidak" )
		cout<<"Apakah di daerah tersebut terdapat kasus positif covid di minggu kedua?(ada/tidak)"<<endl<<"Jawab\t: ";
		cin>>minggu_2;
		if ( minggu_2 == "tidak" )
		cout<<"Apakah ada kasus kematian akibat dari covid-19?(ada/tidak)"<<endl<<"Jawab\t: ";
		cin>>kematian;
		if ( kematian == "tidak" )	
		cout<<"Apakah ada ODP di daerah tersebut?(ada/tidak)"<<endl<<"Jawab\t: ";
		cin>>odp;
		if ( odp == "ada" )
		cout<<"\nDaerah tersebut termasuk ke dalam ZONA ORANYE"<<endl;
		else if ( odp == "tidak" )
		cout<<"\nDaerah tersebut termasuk ke dalam ZONA HIJAU"<<endl;
		
	}
}
