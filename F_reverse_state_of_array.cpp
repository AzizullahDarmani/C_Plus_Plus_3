#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;
int main() {
//	int a;
//	cin>>a; 
//	int c[a+1]; 
//	for(int i=1; i<=a; i++){
//	cin>> c[i]; 
//	}
// 	for (int i=a ; i>=1; i--){
//		cout << c[i] << " "; 
//	 }

//	int a;
//	cin>>a; 
//	int c[a]; 
//	for (int i=1; i<=a; i++){
//		cin>> c[i]; 
//	}
//	for (int i=a; i>=1; i--) {
//		cout<< c[i] << " " ; 
//	}


	// int a; 
	// cin>>a; 
	// int c[a]; 
	// for(int i=1; i<=a; i++){
	// 	cin>> c[i]; 
	// }
	// for (int i=a; i>=1; i--){
	// 	cout <<"This is the final result"<< c[i] << endl; 
	// }
	
	
		
	
	// 	return 0; 



	///using vector for reversing the array: 
	/// int this case it is needed to include the algorithm header file and vectro header file: 
	// int a; 
	// cin>> a; 
	// vector<int> arr(a); 
	// for(int i=0; i<a; i++){
	// 	cin>> arr[i]; 
	// }
	// cout<< "reversed array is as following: "<< endl ;
	// reverse(arr.begin(), arr.end()); 
	// for(int i=0; i<a; i++){
	// 	cout<< arr[i] << " "; 
	// }
	// return 0; 



	int a; 
	cin>> a; 
	int arr[a] ;
	for(int i=1; i<=a; i++){
		cin>> arr[i]; 
	}
	for(int i=a; i>=1; i--){
		cout<< arr[i] << " " ; 
	}
	return 0 ; 

}
