#include <iostream>
#include <fstream>

using namespace std;

class licz{
	public:
		
		int a,b,c;
		int dlugosc_ciagu;
		int max=0;
		ifstream plik1;
		
		void policz();
};

void licz::policz(){
	
	plik1.open("trojki.txt");
	
	while(!plik1.eof()){
		plik1>>a;
		plik1>>b;
		plik1>>c;
		
		if(a+b>c && a+c>b && b+c>a){
			dlugosc_ciagu++;
				if(dlugosc_ciagu>max){
					max=dlugosc_ciagu;
				}
		}else{
			dlugosc_ciagu=0;
		}
	}
	cout<<max;
}
int main(int argc, char** argv) {
	
	licz l;
	l.policz();
	return 0;
}
