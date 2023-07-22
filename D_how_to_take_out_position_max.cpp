#include<iostream>
using namespace std; 
int main(){
//	int a,max=-1e9, b=0; 
//	cin>>a; 
//	int c[a+1]; 
//	for(int i=1; i<=a; i++ ) {
//		cin>> c[i]; 
//		if (c[i]>max)
//		max=c[i]; 
//	}
//	for (int i=1; i<=a; i++) {
//		b++; 
//		if (c[i]==max){
//		cout<< b; 
//		break; 
//		}
//	}




//	int a, max=-1e9, b=0; 
//	cin>>a; 
//	int c[a]; 
//	for(int i=0; i<a; i++){
//	cin>>c[i]; 
//	if (c[i]>max)
//	max=c[i]; 
//	
//	}
//	for(int i=0; i<a; i++){
//		b++; 
//		if(c[i]==max){
//			cout<<b; 
//			break ; 
//		}
//	}





	// int a, max=-1e9, b=0 ;
	// int c[a]; 
	// cin>>a; 
	// for(int i=0; i<a; i++){
	// 	cin>> c[i]; 
	// 	if (c[i]>max) 
	// 	max=c[i]; 
	// }
	// for (int i=0; i<a; i++){
	// 	b++; 
	// 	if (c[i]==max){
	// 		cout<< b; 
	// 		break; 
	// 	}
	// }






	// int a; 
	// cin>> a; 
	// int pos = 0; 
	// int arr[a]; 
	// int max = -1e9; 
	// for(int i=0; i<a; i++){
	// 	cin>> arr[i]; 
	// 	if (arr[i]>max)
	// 	max = arr[i]; 
		
	// }
	// for(int i=0; i<a; i++){
	// 	pos++; 
	// 	if (max == arr[i])
	// 	break; 
	
	// }
	// cout<< "the position of maximum integer in an array: "<< pos << endl;


//After incrementing the value of b with b++, the code 
//checks if the current element in the array is equal to 
//the maximum value using the if (c[i] == max) statement. 
//If the condition is true, the code prints the position of 
//the element using cout<< b << endl;.
//So, the b++ statement is used to keep track of the position 
//of the elements in the array, and it is placed before the 
//if condition to ensure that the correct position is 
//printed when the maximum value is found.


	int a; 
	int max = -1e9; 
	int cnt = 0; 
	cin>> a ; 
	int arr[a] ;
	for(int i=1; i<=a; i++){
		cin>> arr[i]  ; 
		if (arr[i]>max)
		max = arr[i] ; 
		
	}
	for(int i=1; i<=a; i++){
		cnt++; 
		if (arr[i]==max)
		break; 
	
	}
	cout<< "position of maximum integer in this array: "<< cnt << endl; 
	cout<< cnt << endl; 
}


