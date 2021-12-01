#include <iostream>
#include <cstdio>
using namespace std;

int main (){
	int x;
	cout<<"Banyaknya Rumah Griya Asri: ";
	cin>>x;
	cin.ignore(512,'\n');
	
	string a[x],p[x],q[x],r[x]; 
	
	if(x%2==0){
		for (int i=0; i<x; i++){
			cout<<"Masukan nama pemilik rumah: ";
			getline (cin,a[i]);
			
			cout<<"Masukan alamat rumah: ";
			getline (cin,p[i]);
		}
	}else{
		for (int i=0; i<x; i++){
			cout<<"Masukan nama pemilik rumah yang ingin dicek: ";
			getline (cin,a[i]);
			
			cout<<"Masukan alamat rumah yang ingin dicek: ";
			getline (cin,p[i]);	
		}	
	}
	for(int i=0; i<1; i++){
		cout<<"Masukan nama pemilik rumah yang ingin dicek: ";
		getline (cin,q[i]);
		cout<<"Masukan alamat pemilik rumah yang ingin dicek: ";
		getline (cin,r[i]);
		
	}
	if(x%2==0){
		if (q[0]==a[0] && r[0]==p[0] || q[0]==a[1] && r[0]== p[1]) {
			cout<<"Rumah ditemukan";
	}
		else {
		cout<<"Rumah tidak ditemukan";
	}
}
	
	else if (x%2!=0){
		if (q[0]==a[0] && r[0]==p[0] || q[0]==a[1] && r[0]== p[1] || q[0]==a[2] && r[0]==p[2]){
		cout<<"Rumah ditemukan ";
	}else {
		cout<<"Rumah tidak ditemukan";
	}
	
	}
	 return 0;
	 
}
