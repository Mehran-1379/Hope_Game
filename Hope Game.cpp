#include <iostream>

using namespace std;


int i,S,m;

string n;


int main(){
	
	S = 3;
	
	cout << "Score:" << S << "\n";
	
	for(i = 1 ; S >= 1 ; i = i + 2){
		
	cin >> n;
	 
	
	if(i % 5 != 0 && (m = stoi(n))== i){
		
		if((i+1) % 5 == 0)	cout << "Hope!" << "\n";
		
		else
	
	cout << i+1 << "\n";
	
	}
	
	else {
	
	if(i % 5 == 0 && n == "Hope!") cout << i+1 << "\n";
	
	else {
		
		S = S - 1;
		
	cout << "Wrong!" << "\n" << "Score:" << S << "\n" << i+1 << "\n";

			}
			
		}

	}

	if (S == 0) cout << "Game Over!";
		
}