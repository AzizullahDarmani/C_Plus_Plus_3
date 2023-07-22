#include<iostream>
using namespace std;
int main (){
//	int n,l,r; 
//	cin>> n >> l >> r;
//	What does long long mean in C++?
//A size modifier specifies the width in bits of the integer representation used. 
//The language supports short , long , and long long modifiers. 
//A short type must be at least 16 bits wide. A long type must be at least 32 bits wide.
// A long long type must be at least 64 bits wide
//	long long sum=0; 
//	int c[n+1]; 
//	for(int i=1; i<=n; i++){
//	cin>> c[i]; 
//	if (i>=l and i<= r)
//	sum+= c[i];
//	}
//	
//	cout<< sum; 

	
//	int n,l,r; 
//	cin>> n>>l >>r; 
//	long sum=0; 
//	int c[n]; 
//	for(int i=1; i<=n; i++){
//		cin>> c[i]; 
//	if (i>=l&& i<=r)
//	sum+= c[i]; 
//	}
//	
//	cout<< sum << endl; 



//	int a,b,c; 
//	int sum=0; 
//	cin>> a>>b>>c; 
//	
//	int d[a]; 
//	for(int i=1; i<=a; i++){
//		cin>> d[i]; 
//		
//		if (i>=b && i<=c)
//		sum+=d[i]; 
//		
//	}
//	cout<< sum << endl; 


	// int a,b,c, sum=0; 
	// cin>> a >> b >>c; 
	// int d[a]; 
	// for(int i=1; i<=a; i++){
	// 	cin>> d[i]; 
	// 	if (i>=b && i<=c)
	// 	sum+=d[i]; 
	// }
	// cout<< "this is the final sum of the integers in an arrow: "<< sum << endl; 
	

	int a ,b ,c; 
	cin>> a >> b >> c; 
	int cnt; 
	int arr[a] ; 
	for(int i=1; i<=a; i++){
		cin>> arr[i] ; 
		if (i>=b && i<=c)
			cnt+=arr[i] ; 
	}
	cout<< "sum of integer in a specific interval: "<< cnt ; 
	
	 
	
	
	
	
	
	
}
