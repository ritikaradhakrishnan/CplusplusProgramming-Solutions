#include <vector>
#include <iostream>
using namespace std;


int main() {
   int m, num;
   cin >> m;
   vector<int> v;
   for (int i=0; i<m; i++){
       cin >> num;
       v.push_back(num);
   }
   int n, val;
   cin >> n;
   for (int i=0; i<n; i++){
       cin >> val;
       auto it = lower_bound(v.begin(),v.end(),val);
       if(v[it-v.begin()]==val)
            cout<<"Yes "<<(it-v.begin()+1)<<endl;
        else
            cout<<"No "<<(it-v.begin()+1)<<endl;
   }
    return 0;
}
