#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,1,4,9,0,8,6};
    int l = (sizeof(arr)/sizeof (int)), temp;

    for(int i = 0; i<l; i++){
        for(int j = 0; j<(l-1); j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // ausgabe:
    for(int k = 0; k<l; k++){
        cout << arr[k] << " ";
    }
}
