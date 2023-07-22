#include<iostream>
using namespace std;
int main(){
//	int a; 
//	cin>>a; 
//	long long b=0; 
//	int c[a+1]; 
//	for(int i=0; i<a; i++) {
//	cin>>c[i]; 
//	b+= c[i]; 
//	}
//	cout<< b << endl; 

//	int a,b=0; 
//	cin>>a; 
//	int c[a]; 
//	for(int i=0; i<a; i++){
//		cin>> c[i]; 
//		b+=c[i]; 
//		
//	}
//	cout<< b << endl; 



//	int a,b=0; 
//	cin>>a; 
//	int c[a]; 
//	for(int i=0; i<a; i++){
//		cin>>c[i]; 
//		b+=c[i]; 
//	}
//	cout<< b << endl; 
//	return 0; 

	
	// int a,b=0; 
	// cin>> a; 
	// int c[a]; 
	// for(int i=0; i<a; i++){
	// 	cin>> c[i]; 
	// 	b+= c[i]; 
		
		
	// }
	// cout << b << endl ;

	int a ; 
	cin>> a; 
	int sum = 0; 
	int arr[a] ; 
	for(int i=0; i<a; i++){
		cin>> arr[i] ; 
		sum+= arr[i]; 
	}
	cout<<"sum of integers in array: " << sum << endl ; 

}
