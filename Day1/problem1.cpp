/*
Problem statement ->
Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.
*/

pair<long long, long long> getMinMax(long long a[], int n) {
    long long int ma = -9999999;
    long long int mi = 9999999999;
    for(int i=0;i<n;i++){
        if(a[i] > ma){
            ma = a[i];
        }
        if(a[i] <  mi){
            mi = a[i];
        }
    }
    pair<long long, long long> p(mi,ma);
    return p;
}
