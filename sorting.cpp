// selection sort
// get the minimum element from the unsorted array and swap it with the first element of the unsorted array and repeat this process until the array is sorted


// #include <bits/stdc++.h>
// using namespace std;

// void selection_Sort(int arr[], int n){
//     for(int i=0; i<n-2; i++){
//         int mini = i;

//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[mini]){
//                 mini = j;
//             }
//         }

//         int temp = arr[mini];
//         arr[mini] = arr[i];
//         arr[i] = temp;
//     }
// }

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     selection_Sort(arr, n);

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// bubble sort
// compare the adjacent elements and swap them if they are in the wrong order and repeat this process until the array is sorted

// #include <bits/stdc++.h>
// using namespace std;
// void bubble_Sort(int arr[],int n){
//         for(int i=0; i<n-1; i++){
//             for(int j=0; j<n-i-1; j++){
//                 if(arr[j] > arr[j+1]){
//                     int temp = arr[j];
//                     arr[j] = arr[j+1];
//                     arr[j+1] = temp;
//                 }
//             }
//         }
// }
//  int main(){
//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     bubble_Sort(arr, n);

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// insertion sort
// divide the array into sorted and unsorted array and insert the elements of the unsorted array into the sorted array at the correct position and repeat this process until the array is sorted

// #include <bits/stdc++.h>
// using namespace std;
// void insertion_Sort(int arr[], int n){
//     for(int i=1; i<n; i++){
//         int key = arr[i];
//         int j = i-1;

//         while(j>=0 && arr[j] > key){
//             arr[j+1] = arr[j];
//             j--;
//         }

//         arr[j+1] = key;
//     }
// }
// int main(){
//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }

//     insertion_Sort(arr, n);

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// merge sort
// divide the array into two halves and sort them recursively and then merge the two halves

