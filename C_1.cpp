
#include <iostream>
using namespace std;

int main(){
//     int n, max = -1e9; 
// 	cin >> n;
//     int arr[n];

//     for(int i = 1; i <= n; i++){
//         cin >> arr[i];
//         if(arr[i] > max) max = arr[i];
//     }
//     cout << arr[n];
// 	return 0;


    int a; 
    cin>> a ;
    int arr[a] ; 
    int max= -1e9; 
    for(int i=0; i<a; i++){
        cin>> arr[i] ; 
        if (arr[i]>max)
        max = arr[i]; 
    }
    cout<< " the maximum integer in array is: "<< max << endl; 


}
