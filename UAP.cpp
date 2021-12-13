#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
using namespace std;

void gotoxy(int x, int y){

    COORD batas = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), batas);
}
void box(){
	for(int i=25;i<=95;i++){//atas
		gotoxy(i,0);
	    cout<<"_";
	}
	for(int i=25;i<=95;i++){//bawah
		gotoxy(i,25);
	    cout<<"_";
	}
	for(int i=1 ;i<=25;i++){//kanan
		gotoxy(25,i);
		cout<<"|";
	}
	for(int i=1; i<= 25;i++){//kiri
		gotoxy(95,i);
		cout<<"|";
	}
}
void loading(){
		 for(int a=0; a<2; a++){
	 	box();
	 	gotoxy(52,12);
        cout<< "Harap Tunggu.";
        Sleep(400);
     	gotoxy(52,12);
        cout<< "Harap Tunggu..";
        Sleep(400);
        gotoxy(52,12);
        cout<< "Harap Tunggu...";
        Sleep(400);
        system("cls");
        gotoxy(52,12);
        cout<< "Harap Tunggu....";
        Sleep(50);
        system("cls");
        box();
	}
}
void box1(){
	for(int i=0;i<=50;i++){//atas
		gotoxy(i,0);
	    cout<<"_";
	}
	for(int i=0;i<=50;i++){//bawah
		gotoxy(i,25);
	    cout<<"_";
	}
	for(int i=1 ;i<=25;i++){//kanan
		gotoxy(0,i);
		cout<<"|";
	}
	for(int i=1; i<= 25;i++){//kiri
		gotoxy(50,i);
		cout<<"|";
	}
}
void loading1(){
		 for(int a=0; a<2; a++){
	 	box1();
	 	gotoxy(17,12);
        cout<< "Harap Tunggu.";
        Sleep(400);
     	gotoxy(17,12);
        cout<< "Harap Tunggu..";
        Sleep(400);
        gotoxy(17,12);
        cout<< "Harap Tunggu...";
        Sleep(400);
        system("cls");
        gotoxy(17,12);
        cout<< "Harap Tunggu....";
        Sleep(50);
        system("cls");
        box1();
	}
}
void aksi(){
	for(int a=0; a<2; a++){
	 	box1();
	 	gotoxy(22,12);
        cout<< "GAJAH";
        Sleep(500);
     	gotoxy(22,12);
        cout<< "SEMUT";
        Sleep(400);
        gotoxy(22,12);
        cout<< "ORANG";
        Sleep(100);
        system("cls");
        box1();
	}
}
void aturan(){
	box();
		gotoxy(28,8);
		cout << "*** INSTRUKSI ***";
		gotoxy(28,9);
		cout << "=================================================================";
		gotoxy(28,10);
		cout << "Saat permainan dimulai, akan ditampilkan sejumlah kombinasi kata";
		gotoxy(28,11);
		cout << "secara acak antara : kanan/kiri/atas/bawah. Kombinasi kata akan";
		gotoxy(28,12);
		cout << "ditampilkan selama waktu yang singkat, kemudian layar akan ";
		gotoxy(28,13);
		cout << "berganti. Kemudian anda akan diberikan kolom jawaban. Tugas anda";
		gotoxy(28,14);
		cout << "adalah memasukkan kebalikan dari kombinasi tersebut (atas=bawah ;";
		gotoxy(28,15);
		cout << "bawah=atas ; kanan=kiri ; kiri=kanan). Jawaban diketik dalam";
		gotoxy(28,16);
		cout << "huruf kecil dan setiap kata dipisahkan oleh garis miring(/)";
		gotoxy(28,18);
		cout << "=================================================================";
		gotoxy(28,19);
		system("pause");
		system("cls");
}
void testmemori(){
	int acak_soal;
	char pil;
	string jawaban;	
	srand(time(NULL));
	acak_soal = rand() % 7 + 1;
	if(acak_soal==1){
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "kanan/kiri/kiri/atas/bawah/kanan/kanan";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cin >> jawaban;
			if(jawaban=="kiri/kanan/kanan/bawah/atas/kiri/kiri")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				testmemori();
			}else{
			   	system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,13);
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	aturan();
		        	testmemori();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
				}
			}		
		}else if(acak_soal==2){
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "kiri/atas/bawah/kiri/kanan/kanan/kiri";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cin >> jawaban;
			if(jawaban=="kanan/bawah/atas/kanan/kiri/kiri/kanan"){
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				testmemori();
			}else{
		    	system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,13);
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	aturan();
		        	testmemori();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
				}
			}	
		}else if(acak_soal==3){
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "bawah/atas/bawah/kanan/bawah/kiri/atas";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cin >> jawaban;
			if(jawaban=="atas/bawah/atas/kiri/atas/kanan/bawah"){
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				testmemori();
			}else{
		    	system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,13);
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	aturan();
		        	testmemori();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
				}
			}
		}else if(acak_soal==4){
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "atas/kiri/bawah/kanan/bawah/atas/bawah";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cin >> jawaban;
			if(jawaban=="bawah/kanan/atas/kiri/atas/bawah/atas"){
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				testmemori();
			}else{
		    	system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,13);
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	aturan();
		        	testmemori();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
				}
			}
		}else if(acak_soal==5){
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "kanan/kiri/bawah/kanan/atas/kanan/kiri";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cin >> jawaban;
			if(jawaban=="kiri/kanan/atas/kiri/bawah/kiri/kanan"){
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				testmemori();
			}else{
		    	system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,13);
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	aturan();
		        	testmemori();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
				}
			}
		}else if(acak_soal==6){
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "atas/kanan/kiri/kanan/atas/bawah/kiri";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cin >> jawaban;
			if(jawaban=="bawah/kiri/kanan/kiri/bawah/atas/kanan")
			{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				testmemori();
			}else{
		    	system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,13);
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	aturan();
		        	testmemori();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
				}
			}
		}else if(acak_soal==7)
		{
			system("cls");
			box();
			gotoxy(26,10);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,14);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(27,12);
			cout << "kiri/kanan/atas/kanan/bawah/kiri/atas";
			Sleep(5000);
			system("cls");
			box();
			gotoxy(26,6);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(26,12);
			for(int a=30 ; a<=97 ; a++)
			{cout << "=";}
			gotoxy(30,8);
			cout << "Masukkan jawaban anda : ";
			gotoxy(30,10);
			cin >> jawaban;
			if(jawaban=="kanan/kiri/bawah/kiri/atas/kanan/bawah"){
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda benar!";
				gotoxy(30,12);
				cout << "Lanjut ke soal berikutnya dalam beberapa detik";
				Sleep(3000);
				system("cls");
				testmemori();
			}else{
				system("cls");
				box();
				gotoxy(30,10);
				cout << "Jawaban anda salah!";
				gotoxy(30,12);
		        cout << "Apakah anda ingin bermain lagi? Ketik y untuk lanjut";
		        gotoxy(30,13);
		        cin >> pil;
		        if(pil=='y')
				{
					system("cls");
					loading();
		        	system("cls");
		        	aturan();
		        	testmemori();
				}else
				{
					system("cls");
					box();
					gotoxy(30,13);
					system("pause");
				}	
	       }
		} 
	}
void suit(){
	box1();
	gotoxy(14,3); 
	cout<<"Suit Gajah Orang Semut";
	gotoxy(9,20);
	system("pause");
	system("cls");
	
	loading1();
	int uang,uanglawan,uangtot,g,o,s;
	char opsi,pilihan, y,n;
	box1();
	do {
	box1();
	gotoxy(9,8);
	cout<<"Permainan dilakukan oleh 2 pemain";
	gotoxy(13,9);
	cout<<"Gajah(g),Orang(o),Semut(s)";
	gotoxy(10,10);
	cout<<"Gajah akan MENANG melawan Orang";
	gotoxy(10,11);
	cout<<"Orang akan MENANG melawan Semut";
	gotoxy(10,12);
	cout<<"Semut akan MENANG melawan Gajah";
	gotoxy(6,13);
    cout<<"Pemain Memasang Uang Untuk Dipertaruhkan";
    gotoxy(5,14);
	cout<<"yang menang mendapatkan semua uang Taruhan";
	gotoxy(9,22);
    system("pause");
    system("cls");
	
    loading1();
    gotoxy(3,12);
    cout<<"Masukkan Jumlah Uang : Rp.";
    cin>>uang;
    srand(time(NULL)); // me random angka uang musuh
    uanglawan= rand()% uang + 1;
     system("cls");
     
    loading1();
    gotoxy(4,12);
    cout<<"Uang Anda :Rp."<<uang;
    gotoxy(4,13);
    cout<<"Uang Lawan :Rp."<<uanglawan;
    uangtot=uang+uanglawan;
    gotoxy(9,22);
    system("pause");
    system("cls");
    loading1();
    gotoxy(4,12);
    cout<<"Total Uang Taruhan :Rp."<<uangtot;
    gotoxy(4,13);
    cout<<"Masukkan Pilihan Anda g/o/s :";
    cin>>opsi;
    system("cls");
    loading1();
    
    switch(opsi){
   	case 'g':
    	srand(time(NULL)); // merandom angka yang akan digunakan sebagai g/o/s
        g = rand() % 3 + 1; // 1 = gunting, 2 = orang, 3 = semut
        if(g==1){
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Gajah";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan: Gajah";
        	Sleep(1000);
        	system("cls");	
        	loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "SEIMBANG!!";
        	gotoxy(4,13);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,15);
            cout <<"y :yes n :no :";
            cin>>pilihan;
            system("cls");
            
        }else if(g==2){
        	
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Gajah";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan : Orang";
        	Sleep(1000);
        	system("cls");
            loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "MENANG!!";
        	gotoxy(4,13);
        	cout<<"Selamat anda mendapatkan uang sebesar Rp."<< uangtot;
        	gotoxy(4,15);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,16);
            cout<<"y :yes n :no :";
            cin>>pilihan;
            system("cls");
        	
		 }else {
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Gajah";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan: Semut";
        	Sleep(1000);
        	system("cls");
        	loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "Yah Anda Kalah";
        	gotoxy(4,13);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,14);
            cout<<"y :yes n :no :";
            cin>>pilihan;
            system("cls");
		}break;
	case'o':
		srand(time(NULL)); // merandom angka yang akan digunakan sebagai g/o/s
        o = rand() % 3 + 1; // 1 = gunting, 2 = orang, 3 = semut
		if(o==1){
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Orang";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan: Orang";
        	Sleep(1000);
        	system("cls");
        	loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "SEIMBANG!!";
        	gotoxy(4,13);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,16);
            cout<<"y :yes n :no :";
            cin>>pilihan;
            system("cls");
            
		
        }else if(o==2){
        	
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Orang";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan : Semut";
        	Sleep(1000);
        	system("cls");
        	loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "MENANG!!";
        	gotoxy(4,13);
        	cout<<"Selamat anda mendapatkan uang sebesar Rp."<< uangtot;
        	gotoxy(4,15);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,16);
            cout<<"y :yes n :no :";
            cin>>pilihan;
            system("cls");
        	
		 }else {
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Orang";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan: Gajah";
        	Sleep(1000);
        	system("cls");
        	loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "Yah Anda Kalah";
        	gotoxy(4,13);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,14);
            cout<<"y :yes n :no :";
            cin>>pilihan;
            system("cls");
		}break;
	case's':
		srand(time(NULL)); // merandom angka yang akan digunakan sebagai g/o/s
        s = rand() % 3 + 1; // 1 = gunting, 2 = orang, 3 = semut
		if(o==1){
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Semut";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan: Semut";
        	Sleep(1000);
        	system("cls");
        	loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "SEIMBANG!!";
        	gotoxy(4,13);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,14);
            cout<<"y :yes n :no :" ;
            cin>>pilihan;
            system("cls");
		
        }else if(o==2){
        	
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Semut";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan : Gajah";
        	Sleep(1000);
        	system("cls");
        	loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "MENANG!!";
        	gotoxy(4,13);
        	cout<<"Selamat anda mendapatkan uang sebesar Rp."<< uangtot;
        	gotoxy(4,15);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,16);
            cout<<"y :yes n :no :";
            cin>>pilihan;
            system("cls");
        	
		 }else {
        	aksi();
        	gotoxy(4,12);
        	cout<<"Pilihan Anda : Semut";
        	gotoxy(4,13);
        	cout<<"Pilihan Lawan: Orang";
        	Sleep(1000);
        	system("cls");
        	loading1();
        	
        	box1();
        	gotoxy(4,12);
        	cout << "Yah Anda Kalah";
        	gotoxy(4,13);
            cout<<"Apakah Anda ingin bermain lagi?";
            gotoxy(4,14);
            cout<<"y :yes n :no :";
            cin>>pilihan;
            system("cls");
         }break; 
	}              	
}while (pilihan == 'y');

}
int main(){
	int po;
	box1();
	gotoxy(19,3); 
	cout<<"Games Arcade";
	gotoxy(9,20);
	system("pause");
	system("cls");
	loading1();
	
	gotoxy(11,11);
	cout << "Daftar Game Yang Dapat dimainkan";
	gotoxy(10,12);
	cout << "1.Memori games";
	gotoxy(10,13);
	cout << "2.Suit gajah/orang/semut";
	gotoxy(10,14);
	cout << "Pilih game yang ingin dimainkan :";
	cin >> po;
	system("cls");
	
	if (po == 1){
		aturan();
		testmemori();
	}else if(po== 2){
		suit();
	}else{
		box1();
		gotoxy(11,12);
		cout << "Maaf Inputan anda salah";
		gotoxy(11,13);
	    system("pause");
	    system("cls");
	    main();
	}
	
}

