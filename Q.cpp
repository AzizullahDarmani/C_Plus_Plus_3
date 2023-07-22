#include<iostream>
#include<cmath>
using namespace std;
int main() {
	
// 	int x; 
// 	cin>>x; 
// 	for (int i=2; i<x; i++){
// 		if (x%i==0) {
// 			cout<< "No";
// 			return 0; 
		
// 	}
// }
// 	cout<< "Yes"; 






	int a; 
	cin>> a; 
	for(int i=2; i<a; i++){
		if (a%i==0){
			cout<< "no" ; 
			return 0; 
		}
	}
	cout<< "yes"; 
	return 0; 
}
