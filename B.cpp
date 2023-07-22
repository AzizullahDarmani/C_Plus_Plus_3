#include<iostream>
using namespace std; 
int main(){
//	int a,b=0;
//	cin>>a; 
//	int c[a+1] ;
//	for(int i=1; i<=a; i++){
//	cin>>c[i];
//		if(c[i]>0) b++; 
//	}
//		
//	
//	cout<< b; 

//	int a,b=0; 
//	int c[a]; 
//	cin>>a; 
//	for(int i=0; i<a; i++){
//		cin>> c[i]; 
//		if (c[i]>0)
//		b++; 
//	}
//		cout<< b << " " ; 
//	return 0; 

	
//	int a, b=0; 
//	cin>>a; 
//	int c[a]; 
//	for(int i=0; i<a; i++){
//		cin>> c[i]; 
//		if(c[i]>0)
//		b++; 
//		
//	}
//	cout<< "this is the result of even numbers : "<< b << endl; 

// int a,b=0; 
// cin>>a; 
// int c[a]; 
// for(int i=0; i<a; i++){
// 	cin>> c[i]; 
// 	if (c[i]>0)
// 	b++ ; 
// }
// cout<< "please consider the even numbers: " << b << endl; 




int a; 
cin>> a; 
int arr[a]; 
int cnt = 0; 
for(int i=0; i<a; i++){
	cin>> arr[i] ; 
	if (arr[i]>0)
	cnt++; 
}
cout<< " count of positive numbers in array: "<< cnt<< endl; 


}
