#include <iostream>
using namespace std;
int main(){
	string tingkat_sekolah, penerima;
	int jumlah_siswa,jumlah_pengajar;
	int jumlah_giga_paud, jumlah_giga_sd, jumlah_giga_smp, jumlah_giga_sma, jumlah_giga_univ;
	int total_harga_paud, total_harga_sd, total_harga_smp, total_harga_sma, total_harga_univ;
	int harga_kuota = 6000;
	
	cout<<"Program untuk Menentukan Total Biaya untuk Bantuan Kuota"<<endl;
	cout<<"\nTingkat Sekolah\t: ";
	cin>>tingkat_sekolah;
	cout<<"Jumlah Siswa\t: ";
	cin>>jumlah_siswa;
	cout<<"Jumlah Pengajar\t: ";
	cin>>jumlah_pengajar;
	
	
	jumlah_giga_paud	=	(jumlah_siswa*20);
	jumlah_giga_sd		=	(jumlah_pengajar*42) + (jumlah_siswa*35);
	jumlah_giga_smp		=	(jumlah_pengajar*42) + (jumlah_siswa*35);
	jumlah_giga_sma		=	(jumlah_pengajar*42) + (jumlah_siswa*35);
	jumlah_giga_univ	=	(jumlah_pengajar*50) + (jumlah_siswa*50);
	
	total_harga_paud	=	jumlah_giga_paud*harga_kuota;
	total_harga_sd		=	jumlah_giga_sd*harga_kuota;
	total_harga_smp		=	jumlah_giga_smp*harga_kuota;
	total_harga_sma		=	jumlah_giga_sma*harga_kuota;
	total_harga_univ	=	jumlah_giga_univ*harga_kuota;
	
	if ( tingkat_sekolah == "paud" )
	{
		cout<<"\nBiaya yang harus dikeluarkan pemerintah\t= Rp"<<total_harga_paud;
	}
	else if ( tingkat_sekolah == "sd" )
	{
		cout<<"\nBiaya yang harus dikeluarkan pemerintah\t= Rp"<<total_harga_sd;
	}
	else if ( tingkat_sekolah == "smp" )
	{
		cout<<"\nBiaya yang harus dikeluarkan pemerintah\t= Rp"<<total_harga_smp;
	}
	else if ( tingkat_sekolah == "sma" )
	{
		cout<<"\nBiaya yang harus dikeluarkan pemerintah\t= Rp"<<total_harga_sma;
	}
	else if ( tingkat_sekolah == "universitas" )
	{
		cout<<"\nBiaya yang harus dikeluarkan pemerintah\t= Rp"<<total_harga_univ;
	}
	
	return 0;
	
	}
