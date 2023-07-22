#include<iostream>
using namespace std;
int main() {
//	int a,b;
//	int c[a+1]; 
//	cin>>a; 
//	for(int i=0; i<a; i++){
//	cin>> c[i];
//	}
//	b=c[0]; 
//	for(int i=0; i<a; i++) {
//	if (b<c[i]){
//	b=c[i]; 
//	}
//	}
//	cout<< b ;

//	int a,b;
//	cin>>a; 
//	int c[a]; 
//	for(int i=0; i<a; i++){
//		cin>>c[i]; 
//	b=c[0]; 
//	if(b<c[i]){
//		b=c[i];
//	}
//	}
//	cout<<b; 


//	int a,b; 
//	int c[a]; 
//	cin>>a; 
//	for(int i=0; i<a; i++){
//		cin>>c[i]; 
//		b=c[0]; 
//		if(b<c[i]){
//		b=c[i]; 
//		}
//	}
//	cout<< b << endl; 



//	int a,b; 
//	int c[a]; 
//	cin>>a; 
//	for(int i=0; i<a; i++) {
//		cin>>c[i]; 
//		if (b<c[i]){
//			b=c[i]; 
//		}
//	}
//	cout<< b << endl ;
//	return 0; 



//	int a,b; 
//	int c[a]; 
//	cin>>a; 
//	for(int i=0; i<a; i++){
//		cin>> c[i];  
//		if (c[i]>b){
//			b=c[i]; 
//		}
//		
//	}
//	cout<< "this is yours my boi"<< b; 


	// int a,b; 
	// cin>> a; 
	// int c[a]; 
	// for(int i=0; i<a; i++){
	// 	cin>> c[i]; 
	// 	if (c[i]>b){
	// 		b=c[i]; 
	// 	}
	// }
	// cout<< "this is the result: " << b << endl; 

	int a, b; 
	cin>> a; 
	int arr[a] ; 
	for(int i=0; i<a; i++){
		cin>> arr[i] ; 
		b = arr[0] ; 
		if (arr[i]>b)
		b = arr[i] ; 
	}
	cout<< "maximum integer in this array is: "<< b << endl; 



}
