#include<iostream>
using namespace std;

int main(){
	int berapa;
	
	cout<<"\t\t == KONVERSI NILAI RATA RATA UAS =="<<endl;
	cout<<"\t APABILA NILAI DIBAWAH 70 ATAU TERBACA 'B' MAKA SISWA REMEDI!! "<<endl<<endl;
	
	cout<<"masukkan jumlah siswa = ";
	cin>>berapa;
	
	string nama[berapa];
	float ipa[berapa];
	float ips[berapa];
	float petruk[berapa];
	float mtk[berapa];
	float total2[berapa];
	string grade[berapa];
	
	for(int i=0;i<berapa;i++){
		cout<<"NAMA SISWA KE "<<i+1<<" = ";
		cin>>nama[i];

		cout<<"MASUKKAN NILAI IPA : ";
		cin>>ipa[i];
		
		cout<<"MASUKKAN NILAI IPS : ";
		cin>>ips[i];
		
		cout<<"MASUKKAN NILAI PETRUK : ";
		cin>>petruk[i];
		
		cout<<"MASUKKAN NILAI MTK : ";
		cin>>mtk[i];
		
		cout<<"=================================="<<endl;
}
	system("cls");
	
	
	for(int i=0;i<berapa;i++){
		
		//perhitungan rata"
			total2[i] = (ipa[i]+ips[i]+petruk[i]+mtk[i]) / 4;
		//tampilan output rata"
		cout<<endl;
		cout<<"RATA-RATA NILAI ( "<<nama[i]<<" ) SISWA KE "<<i+1<<" ADALAH = ";
		printf(" %0.f \n",total2[i]);
				
			//jika nilai total/rata" yang dimasukkan lebih dari 100 maka akan langsung keluar tampilan dalam else.
		if(total2[i]<=100){
			//mengkonversi nilai menjadi huruf	
				if (total2[i]<=100 && total2[i]>=91) {
				//apabila rata-rata nilai lebih dari sama dengan 91 sampai kurang dari sama dengan 100.
					grade[i]="terbaca huruf : A+";
					
				}
			
				else if (total2[i]<=90 && total2[i]>=81) {
				//apabila rata-rata nilai lebih dari sama dengan 81 sampai kurang dari sama dengan 90.
					grade[i]="terbaca huruf : A";
					
				}
			
				else if (total2[i]<=80 && total2[i]>=70){
				//apabila rata-rata nilai lebih dari sama dengan 70 sampai kurang dari sama dengan 80.
					grade[i]="terbaca huruf : B+";
					
				}
			
				else if (total2[i]<=69 && total2[i]>=60){
				//apabila rata-rata nilai lebih dari sama dengan 60 sampai kurang dari sama dengan 69.
					grade[i]="terbaca huruf : B";
						
				}
			
				else if (total2[i]<=59 && total2[i]>=50){
				//apabila rata-rata nilai lebih dari sama dengan 50 sampai kurang dari sama dengan 69.
					grade[i]="terbaca huruf : C+";
						
				}
			
				else if (total2[i]<=49 && total2[i]>=40){
				//apabila rata-rata nilai lebih dari sama dengan 40 sampai kurang dari sama dengan 49.
					grade[i]="terbaca huruf : C";
						
				}
			
				else if (total2[i]<=39 && total2[i]>=30){
				//apabila rata-rata nilai lebih dari sama dengan 30 sampai kurang dari sama dengan 39.
					grade[i]="terbaca huruf : D+";
						
				}
			
				else if (total2[i]<=29 && total2[i]>=20){
				//apabila rata-rata nilai lebih dari sama dengan 20 sampai kurang dari sama dengan 29.
					grade[i]="terbaca huruf : D";
						
				}
			
				else if (total2[i]<=19 && total2[i]>=10){
				//apabila rata-rata nilai lebih dari sama dengan 10 sampai kurang dari sama dengan 19.
					grade[i]="terbaca huruf : E+";
						
				}
			
				else if (total2[i]<=9 && total2[i]>=0){
				//apabila rata-rata nilai lebih dari sama dengan 0 sampai kurang dari sama dengan 9.
					grade[i]="terbaca huruf : E+";	
				}
			
			//konversi nilai mahasiswanya.
			cout<<grade[i]<<endl;
			
				//kondisi ketidak remedian mahasiswa
				if(total2[i]>=70){
					cout<<"SISWA/SISWI DINYATAKAN tidak remedi"<<endl;
				}
				else{
					cout<<"SISWA/SISWI DINYATAKAN remedi"<<endl;
				}
				cout<<"=================================="<<endl;
			}
		else{
			cout<<"NILAI MAHASISWA TIDAK TERDETEKSI"<<endl;
			cout<<"masukkan nilai dengan benar,nilai rata-rata harus kurang dari sama dengan 100 agar dapat terbaca!!"<<endl;
			cout<<"====================================="<<endl;
			}
	}
	
}
