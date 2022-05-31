#include <iostream>
#include <iomanip>

using namespace std;
int main (){
	float c,f,r,k;
	cout<<"Program Konversi Suhu"<<endl;
	cout<<"\nSilakan masukkan besar suhu dalam Celcius = ";
	cin>>c;
	
	f = (9*c)/5 + 32;
	r = (4*c)/5;
	k = 273 + c;
	cout<<setfill('=')<<setw(93)<<"="<<endl;
	
	cout<<setfill(' ')<<setiosflags(ios::left)<<setw(21)<<"Celcius";
	cout<<"|\t";
	cout<<setw(21)<<"Fahrenheit";
	cout<<"|\t";
	cout<<setw(21)<<"Reamur";
	cout<<"|\t";
	cout<<setw(21)<<"Kelvin"<<endl;
	
	cout<<setfill('=')<<setw(93)<<"="<<endl;
	
	cout<<setfill(' ')<<setiosflags(ios::left)<<setw(21)<<c;
	cout<<"|\t";
	cout<<setw(21)<<f;
	cout<<"|\t";
	cout<<setw(21)<<r;
	cout<<"|\t";
	cout<<setw(21)<<k<<endl;
	
	cout<<setfill('=')<<setw(93)<<"="<<endl;
	
	cout<<"\nTerima Kasih^^"<<endl;
	
	return 0;
}
