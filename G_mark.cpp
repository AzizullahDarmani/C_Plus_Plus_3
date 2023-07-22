#include<iostream>
using namespace std;
int main() {
//	int a, max=-1e9, min= 1e9; 
//	cin>>a; 
//	int c[a+1]; 
//	for (int i=1; i<=a; i++){
//	cin>> c[i]; 
//	if (c[i]>max) max= c[i];
//	if (c[i]<min) min = c[i]; 
//	}
//	for (int i=1; i<=a; i++) {
//		if (c[i]==max) 
//		cout<< min << " "; 
//		else 
//		cout << c[i] << " "; 
// 
//		
//	}

//	int a, max=-1e9, min= 1e9; 
//	cin>>a; 
//	int c[a]; 
//	for(int i=1; i<=a; i++){
//		cin>>c[i]; 
//	
//	if (c[i]>max) max= c[i]; 
//	if (c[i]< min) min = c[i]; 
//	}
//for(int i=1; i<=a; i++) {
//	if (c[i]== max)
//	cout<< min << " "; 
//	else 
//	cout<< c[i]<< " "; 
//}



	// int a, max=-1e9, min= 1e9; 
	// cin>>a; 
	// int c[a]; 
	// for(int i=1; i<=a; i++){
	// 	cin>> c[i]; 
	// if (c[i]>max) max= c[i]; 
	// if (c[i]<min) min= c[i]; 
	// }
	// for (int i=1; i<=a; i++){
	// 	if (c[i]==max)
	// 	cout<< min << " "; 
	// 	else 
	// 	cout<< c[i] << " "; 
	// }




    // int a;
    // cin >> a;
    // int max = -1e9;
    // int min = 1e9;
    // int arr[a];

    // for (int i = 0; i < a; i++) {
    //     cin >> arr[i];
    //     if (arr[i] > max) {
    //         max = arr[i];
    //     }
    //     if (arr[i] < min) {
    //         min = arr[i];
    //     }
    // }

    // for (int i = 0; i < a; i++) {
    //     if (arr[i] == max) {
    //         arr[i] = min;
    //     }
    // }

    // cout << "The array is: ";
    // for (int i = 0; i < a; i++) {
    //     cout << arr[i] << " ";
    // }

    // return 0;



    int max = -1e9, min = 1e9 ; 
    int a; 
    int max_1, min_1 ; 
    cin>> a; 
    int arr[a] ; 
    for(int i=0; i<a; i++){
        cin>> arr[i ] ; 
        if (arr[i]>max)
        max = arr[i] ; 
    }
    for(int i=0; i<a; i++){
        if (arr[i]<min)
        min = arr[i] ; 
    }
    for(int i=0; i<a; i++){
        if (arr[i]==max){
            arr[i] = min ;
        }
    }
    cout<< "the new array is : \n"; 
    for(int i=0; i<a; i++){

    
    cout<< arr[i] << "  " ; 
    }
    return 0; 

 


}


