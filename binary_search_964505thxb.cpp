// Auto-generated: 2026-05-11 11:59:24
// Topic: Binary Search & Linear Search
#include <iostream>
#include <vector>
#include <algorithm>

namespace search_964505thxb {
    int binary(const std::vector<int>& a, int t) {
        int lo=0,hi=(int)a.size()-1;
        while(lo<=hi){ int m=lo+(hi-lo)/2; if(a[m]==t) return m; else if(a[m]<t) lo=m+1; else hi=m-1; }
        return -1;
    }
    int linear(const std::vector<int>& a, int t) {
        for(int i=0;i<(int)a.size();++i) if(a[i]==t) return i; return -1;
    }
}

int main() {
    std::vector<int> arr = { 42, 46, 70, 18, 39, 11, 81, 64 };
    std::sort(arr.begin(),arr.end());
    int t=arr[arr.size()/2];
    std::cout<<"Sorted: "; for(int x:arr) std::cout<<x<<" "; std::cout<<"\n";
    std::cout<<"Search "<<t<<": index "<<search_964505thxb::binary(arr,t)<<"\n";
    return 0;
}
