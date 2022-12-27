#include<iostream>
using namespace std;

int binarySearch(int n){

    long long int start = 0;
    long long int end = n;

    long long int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){

        int square = mid*mid;

        if(square==n)

            return mid;

        
        if(square<n){

            ans=mid;
            start = mid+1;
            
        }

        else{
            
            end = mid - 1;
        }

        mid = start + (end-start)/2;
        
    }


    return ans;
}
double morePrecision(int n, int precicion, int tempsol){

    double factor =1;
    double ans = tempsol;
    for(double i=0; i<precicion; i++){
        factor = factor/10;
        for(int j=0; j*j<n; j= j+factor){
            ans = j;
        }
    }

    return ans;
}


int main(){

    int n;

    cout<<"Enter the number" << endl;
    cin>>n;

    int tempsol=binarySearch(n);
    cout<<" Answer is "<< morePrecision(n, 3, tempsol);

    return 0;


}