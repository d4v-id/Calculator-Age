#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main(){
	// Deklarasi
	int lahir,tahun,umur;
	char keluar;
	// start
	setcolor (2); cout<< "\t-------------------"<<endl;
	setcolor (7); cout<< "\t    // UMUR //"<< endl;
	setcolor (2); cout<< "\t-------------------"<<endl;
	setcolor (7);
	// Inner
	setcolor(11);cout<< "\n>";
	setcolor(7);cout<<" Cari umur hanya dengan tahun tanggal lahirmu..." << endl;
	setcolor(11);cout<< ">";
	setcolor(7);cout<<" Pilih tahun:"<<endl;
	setcolor(6);cout<< "	- Tahun "; setcolor(2);cout<< "2020"<<endl;
	setcolor(6);cout<< "	- Tahun "; setcolor(2);cout<< "2021"<<endl;
	setcolor(6);cout<< "	- Tahun "; setcolor(2);cout<< "2022"<<endl;
	setcolor(6);cout<< "	- Tahun "; setcolor(2);cout<< "2023"<<endl;
	setcolor(6);cout<< "	- Tahun "; setcolor(2);cout<< "2024"<<endl;
	setcolor(6);cout<< "	- Tahun "; setcolor(2);cout<< "2025"<<endl;
	setcolor(6);cout<< "	- dan lain-lain"<<endl;
	setcolor(11);cout<< "\n>";
	setcolor(4);cout<< " /*";
	setcolor(8);cout<<" Tahun harus berupa 4 angka/digit ";
	setcolor(4);cout<<"*/"<<endl;
	setcolor(2);cout<< "#";
	setcolor(7);cout<<" Pilih tahun / tahun yang anda inginkan ";
	setcolor(11);cout<<"(";
	setcolor(7);cout<<"4 digit";setcolor(11);cout<<") : ";
	 
	setcolor (2); // tahun
	while (!(cin>>tahun) || tahun<1000 || tahun>=10000){
		 setcolor (4);
	 	cout<< "\n> !! Maaf tahun harus berupa 4 angka/digit"<< endl;
	 	setcolor(7);cout<<" Pilih tahun / tahun yang anda inginkan ";
		setcolor(11);cout<<"(";
		setcolor(7);cout<<"4 digit";setcolor(11);cout<<") : ";
	 	setcolor (2); cin.clear();
	 	cin.ignore(123, '\n');
	 }
	 
	setcolor(2); cout<<endl<< "#";
	setcolor(7);cout<< " Masukkan tahun lahir ";
	setcolor(11);cout<<"(";
	setcolor(7);cout<<"4 digit";setcolor(11);cout<<") : "; 
	
	setcolor (2); // lahir
	while (!(cin>>lahir) || lahir<1000 || lahir>=10000){
		 setcolor (4);
	 	cout<< "\n> !! Maaf tahun lahir harus berupa 4 angka/digit"<< endl;
	 	setcolor (7); cout<< "# Masukkan tahun lahir kamu (4 digit): ";
	 	setcolor(11); cout<<"(";
		setcolor(7); cout<<"4 digit"; setcolor(11);cout<<") : ";
	 	setcolor (2); cin.clear();
	 	cin.ignore(123, '\n');
	 }
	umur = tahun - lahir;
	// Wrong&exit
	if (tahun<lahir){
		setcolor(4);cout<< "\n!!";
		setcolor(7);cout<<" Tahun yang kamu pilih anda belum lahir ";
		setcolor(4);cout<<"!!";
		cout<<"\t...Silahkan coba kembali...";
		exit(0);
	}
	
	setcolor(11);cout<<">"; 
	setcolor(7);cout<<" Umur anda pada Tahun "; setcolor(11);cout<<"(";
	setcolor(2);cout<< tahun;
	setcolor(11);cout<<")"; setcolor(7);cout<<" adalah ";
	setcolor(2);cout<< umur; setcolor(7);cout<< " tahun."; 
	//end
	setcolor(11);cout<<"\n> Exit (";setcolor(7); cout<<"y";setcolor(11); cout<<") ?:";
	setcolor(2); cin>>keluar;
	if(keluar=='Y'){
		exit(0);
	}
	else{
		exit(0);
	}

return 0;
}
