#include <iostream>
using namespace std;

int main(){
//    int a, b, c = 0; 
//	cin >> a >> b;
//    int d[a + 1];
//
//    for(int i = 1; i <= a; i++){
//        cin >> d[i];
//        if(d[i] <= b) c++;
//    }
//    cout << c;


//	int a,b, c=0; 
//	cin>> a >> b; 
//	int d[a]; 
//	for (int i=1; i<=a; i++){
//		cin>> d[i]; 
//		if (d[i]<= b) 
//		c++; 
//		
//	}
//	cout<< "this is the sum, result : " << c << endl; 


	// int a,b,c=0; 
	// cin>> a >> b; 
	// int d[a]; 
	// for(int i=1; i<=a; i++){
	// 	cin >> d[i]; 
	// 	if (d[i]<=b)
	// 	c++; 
		
	// }
	// cout<< "this is result " << c << endl; 

	int a, b; 
	int cnt = 0;  
	cin>> a >> b; 
	int arr[a] ; 
	for(int i=0; i<a; i++){
		cin>> arr[i ]; 
		if (arr[i]<=b)
		cnt++; 
		 
	}
	cout<< "the postion of " << b << " is: "<< cnt << endl ; 


	
	

}
