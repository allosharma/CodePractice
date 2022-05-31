#include<iostream>
// #include<climits>
using namespace std;


int pairSum(int n, int k, int arr[]) {
    int low=0, high=k-1, currSum = 0;
    int result = 0;
    while(low<high){
        cout << "low: " << low << " " << "High: " << high << endl;
        if(arr[low] + arr[high] == n) {
            result = 1;
            break;
        } 
        else if(arr[low] + arr[high] > n) high--;
        else if(arr[low] + arr[high] < n) low++;
    }
    if(result == 1) return result;
    else return 0;
}

int main() {
    int n = 23;
    int k = 10;
    int arr[k] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};

    cout << pairSum(n, k, arr) << endl;

    return 0;
}
