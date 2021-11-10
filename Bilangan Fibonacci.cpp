#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, Term = 0, n;

 	    cout<<"================================"<<endl;
	    cout<<"|                              |"<<endl;
	    cout<<"|  Program Bilangan Fibonacci  |"<<endl;
	    cout<<"|                              |"<<endl;
	    cout<<"| Nama    : Alam Wahyu Hutomo  |"<<endl;
	    cout<<"| Perihal : Skill Test SQA     |"<<endl;
	    cout<<"================================"<<endl;

    cout << "Masukan bilangan Positif : ";
    cin >> n;

    // Menampilkan bilangan pertama Fibonacci (0 dan 1)
    // cout << "Bilangan Fibonacci : " << t1 << ", " << t2 << ", ";

    Term = t1 + t2;

    while(Term < n) {
        t1 = t2;
        t2 = Term;
        Term = t1 + t2;
        // Menampilkan semua bilangan fibonacci
        // cout << Term << ", ";
    }
        
	    if (Term == n)
	    	cout << "\nHasil : (TRUE) " << n << " merupakan bilangan Fibonacci";
	    else
	    	cout << "\nHasil : (FALSE) " << n << " BUKAN merupakan bilangan Fibonacci";
    
    
    return 0;
}
