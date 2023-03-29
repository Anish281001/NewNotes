
#include <bits/stdc++.h>

using namespace std;

int lower_bound(vector<int> &v, int key)
    {
        int lo = 0, hi = v.size() - 1;
        int mid;

        while ((hi - lo) > 1)
        {
            
            mid = (hi+lo)/2;
            if (v[mid] < key)
            {

                lo = mid + 1;
            }
            else
            {
                hi = mid;
            }
        }
      
            if (v[lo] >= key)
            {
                return lo;
            }
            else if(v[hi] >= key)
            {
                return hi;
            }
            else
            return -1;
        
    }
int upper_bound(vector<int> &v, int key)
    {
        int lo = 0, hi = v.size() - 1;
        int mid;

        while ((hi - lo) > 1)
        {
            
            mid = (hi+lo)/2;
            if (v[mid] <= key)
            {

                lo = mid + 1;
            }
            else
            {
                hi = mid;
            }
        }
      
            if (v[lo] > key)
            {
                return lo;
            }
            else if(v[hi] > key)
            {
                return hi;
            }
            else
            return -1;
        
    }


int main()
{ 
    int n;

    cout << "enter the length of the vector" << endl;
    cin >> n;

    vector<int> v(n);
    
    cout<<"enter the elements of the vector "<<endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    cout<<"enter the key"<<endl;
    int key;
    cin >> key;

    int lb = upper_bound(v , key);
    cout<<"Answer is " << v[lb]<<endl;
   
    // Normal binary search 

    //  int lo = 0 , hi = n-1;
    //  int mid;

    //  while(hi-lo>1)
    //  {
    //     int mid = (hi+lo)/2;
    //     if(v[mid]< key)
    //     {
    //         lo = mid+1;
    //     }
    //     else{
    //         hi = mid;
    //     }
    //  }

    //  if(v[lo] == key)
    //  {
    //     cout<<lo<<endl;
    //  }

    //  else if(v[hi] == key){
    //     cout<<hi<<endl;
    //  }
    //  else{
    //     cout<<"not found"<<endl;
    //  }

    return 0;
}