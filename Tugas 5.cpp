#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	string user,nama="tidak ada",menu="kosong";
	int pass,pil,banyak=0,harga=0,tunai=0,kembali;
	char login;
	
	loginpage:
	cout<<"masukkan username: "<<endl;
	cin>>user;
if(user=="admin"){
		cout<<"masukkan password: ";
		cin>>pass;
	switch(pass){
		case 12345:
			system("cls");
			cout<<"====================================================================="<<endl;
			cout<<"|                         Ini Halaman Admin                         |"<<endl;
			cout<<"====================================================================="<<endl;
			nama="Admin Anto";
			break;
		default:
		system("cls");
		cout<<"Salah password"<<endl;
		cout<<"Tekan Enter Untuk Login Kembali"<<endl;
		getch();
		system("cls");
		goto loginpage;
}
			cout<<"---------------------------------------------------------------------"<<endl;	
			cout<<"|                         Silahkan Pilih Menu                       |"<<endl;
			cout<<"---------------------------------------------------------------------"<<endl;
			cout<<"|            Menu               |               Harga               |"<<endl;
			cout<<"| [1] Ayam Goreng               |            Rp. 25000              |"<<endl;
			cout<<"| [2] Nasi Goreng               |            Rp. 18000              |"<<endl;
			cout<<"| [3] Bebek Goreng              |            Rp. 35000              |"<<endl;
			cout<<"---------------------------------------------------------------------"<<endl;
			cout<<"masukkan pilihan: ";
	cin>>pil;
	switch(pil){
	case 1 :
		harga=25000;
		menu="Ayam Goreng";
		cout<<"Anda Pilih Ayam Goreng "<<endl;
		cout<<"Harga: Rp."<<harga<<endl;
		cout<<"Berapa Banyak: ";
		cin>>banyak;
		break;
	case 2 :
		harga=18000;
		menu="Nasi Goreng";
		cout<<"Anda Pilih Nasi Goreng "<<endl;
		cout<<"Harga: Rp. "<<harga<<endl;
		cout<<"Berapa Banyak: ";
		cin>>banyak;
		break;
	case 3 :
		harga=35000;
		menu="Bebek Goreng";
		cout<<"Anda Pilih Bebek Goreng "<<endl;
		cout<<"Harga: Rp."<<harga<<endl;
		cout<<"Berapa Banyak: ";
		cin>>banyak;
		break;
	default:
		cout<<"Tidak ada di menu"<<endl;
		getch(); 
} 
}else{
	cout<<"Salah User"<<endl;
	cout<<"Apakah ingin login kembali? (Y/N)"<<endl;
	cin>>login;
	if(login=='Y' | login=='y'){
	system("cls");
	goto loginpage;
	}
	else{
		return 0;
	}
}	harga=harga*banyak;
	system("cls");
	cout<<"Yang Login:  "<<nama<<endl;
	cout<<"Anda Membeli:  "<<menu<<endl;
	cout<<"sebanyak: "<<banyak<<endl;
	cout<<"Total Harga: Rp."<<harga<<endl;	
	cout<<"Masukkan uang anda: Rp. ";
	cin>>tunai;
	system("cls");
	kembali=tunai-harga;
	cout<<"-------------------------------------"<<endl;
	cout<<"            Struk Pembelian          "<<endl;		
	cout<<"-------------------------------------"<<endl;
	cout<<"Anda Membeli:  "<<menu<<endl;
	cout<<"sebanyak: "<<banyak<<endl;
	cout<<"Total Harga: Rp."<<harga<<endl;	
	cout<<"Tunai Rp. "<<tunai<<endl;
	cout<<"Kembali Rp. "<<kembali<<endl;

}
