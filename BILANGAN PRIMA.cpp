#include<iostream>
using namespace std;
int main(){

 int i=0, cek, bil=2,n;
 
 	    cout<<"================================"<<endl;
	    cout<<"|                              |"<<endl;
	    cout<<"|    Program Bilangan Prima    |"<<endl;
	    cout<<"|                              |"<<endl;
	    cout<<"| Nama    : Alam Wahyu Hutomo  |"<<endl;
	    cout<<"| Perihal : Skill Test SQA     |"<<endl;
	    cout<<"================================"<<endl;
 	  
      cout<<"Masukan jumlah bilangan prima : ";cin>>n;
      while(i<n){
            cek=0;
            for(int j=2;j<=bil;j++){
                  if(bil%j==0){
                   cek++; 
                  }
            }
            if(cek == 1){
              cout<<bil; 
                  if(i < n-1){ 
                       cout<<", ";
                  }else {
                    cout<<'.'; 
                  }
               i++;
            }
          bil++;
       }
 }
