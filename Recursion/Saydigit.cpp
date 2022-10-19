#include<iostream>
using namespace std;

void saydigit(int n,string arr[]){
    //Base Case
    if (n == 0)
        return;
    
    //Processing
    int digit = n % 10;
    n = n / 10;
    
    //Recursive 
    saydigit(n, arr);

    cout << arr[digit] << " ";
    
}
int main(){
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n;
    cin >> n;

    saydigit(n,arr);
}