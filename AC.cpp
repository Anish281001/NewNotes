#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <climits>
using namespace std;
// #define INT_MAX 2147483647

// binary search
// int main()
// {
//     int i;
//     int n;
//     cout<<"enter the number of elements";
//     cin>>n;
//     int A[n];
//     cout<<"enter the elements of array ";

//     for(i=1;i<=n;i++)
//     {
//         cin>>A[i];
//     }
//     int low = 1;
//     int high = n;
//     int key;
//     cout << "enter the key ";
//     cin>>key;
//     while(low<=high)
//     {
//     int mid = (low + high)/2;
//         if(key == A[mid])
//         {
//             cout<< " key found at position "<< mid;
//             return 0;
//         }
//         else if(key< A[mid])
//         {
//             high = mid-1;
//         }
//         else if(key> A[mid])
//         {
//             low = mid + 1;
//         }
//     }

//     cout<< " key not found";
//     return 0;
// }

// selection sort
// int main()
// {
//     int i,j,n;
//     cout<<"enter no. of elements in array";
//     cin>>n;
//     int A[n];
//     cout<<"enter the array elements";

//     for(i=0;i<n;i++)
//     {
//         cin>>A[i];
//     }
//     for(i=0; i<n-1;i++)
//     {
//         for( j =i+1;j<n;j++)
//         {
//            if(A[j]<A[i])
//            {
//                int temp = A[j];
//                A[j]= A[i];
//                A[i]= temp;
//            }

//         }
//     }

//     for(i=0;i<n;i++)
//     {
//         cout<<A[i];
//     }

//       return 0;

// }

// binary sort                                                                                    -----------

// int main()
// {
//     int i, j, n;
//     cout << "enter no. of elements in array";
//     cin >> n;
//     int A[n];
//     cout << "enter the array elements";

//     for (i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     int counter = 1;

//     while (counter < n)
//     {
//         for (i = 0; i < n - counter; i++)
//         {
//             if (A[i] > A[i + 1])
//             {
//                 int temp = A[i];
//                 A[i] = A[i + 1];
//                 A[i + 1] = temp;
//             }
//         }
//         counter++;
//     }

//     for(i=0;i<n;i++)
//     {
//         cout<< A[i];
//     }
//     return 0;
// }

// insertion sort                                                                                ----------------

// samajh nhi aaya

// int main()
// {
//         int i, j, n;
//     cout << "enter no. of elements in array";
//     cin >> n;
//     int arr[n];
//     cout << "enter the array elements";

//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for(int i = 1 ; i<n ; i++)
//     {
//         int current = arr[i];
//         int j = i-1;
//         while(arr[j]> current && j>=0)
//         {
//             arr[j+1] = arr[j];
//             j-- ;
//         }
//         arr[j+1] = current;
//     }

//     for(int i= 0 ; i<n ; i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
//     return  0;

// }

// chocolate and wrapper question  jo ki global variable declare karne par chala hai                  ------------

// int ans=0;  // global variable

// void sum(int n,int k)
// {
//       if(n==0 && k<3)
//       return ;
//        ans+=n;
//       int wrap=n;
//     //   ans+=c;
//       int k1=wrap+k;
//       int c=(k1)/3;
//       k1=(k1)%3;
//        sum(c,k1);
//        return;
// }    

// int main()
// {
//     int n;
//     cin>>n;
//    sum(n,0);
//     cout<<ans;

// }
// horse and race wala questions . yeh work nhi kar rha hai.                                          ---------------
// int func(int hos , int minhos)
// {
//     int rac , remhos ;
//     if(hos < minhos)
//     {
//       rac = 1;
//       remhos= 0;
//       return rac;
//     } 
//     else{
//     rac = hos/minhos;
//     remhos = hos%minhos;
//     }
//     hos = rac+ remhos;
//    return rac + func(hos , minhos);

// }

// int main()
// {
//     int hos , race  , minhos;
//     cout<<"enter the no. of horses";
//     cin>>hos;
//     cout<<"enter the value of minhos";
//     cin>>minhos;
//     race = func(hos , minhos);
//     cout<<race;
//     return 0;

// }

// sum of all subarrays that can be formed.

// int main()
// {
//     int n;
//     int i, j;
//     cout<<"enter the no. of elements";
//     cin >> n;
//     int A[n];
//     cout<<"enter the elements of array ";
//     for (i = 0; i < n; i++)
//     {                
//         cin >> A[i];
//     }

//     for (i = 0; i < n; i++)
//     {
//         int current = 0;
//         for (j = i; j < n; j++)
//         {
//             current = current + A[j];
//             cout<<current<<endl;
//         }
//     }
//     return 0;
// }

// length of maximum subarray in which the difference between the consecutive number is same;

// int main()
// {
//     int n;
//     int i;
//     cout << "enter the no. of elements";
//     cin >> n;
//     int A[n];
//     cout << "enter the elements of array ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     int pd = A[1] - A[0];
//     int cur = 2;
//     int j = 2;
//     int ans = 2;

//     while (j < n)
//     {
//         if (A[j] - A[j - 1] == pd)
//         {
//             cur++;
//         }
//         else
//         {
//             pd = A[j] - A[j - 1];
//             cur = 2;
//         }
//         ans = max(ans, cur);
//         j++;
//     }
//     cout << ans;
//     return 0;
// }

// first repeatimg element                                                 -------------------

// int main()
// {
//     int i, j, n;
//     cout<<"enter no. of elements";
//     cin>>n;
//     int A[n];
//     cout<<" enter elements of array ";
//     for(i = 0; i < n; i++)
//     {
//         cin>>A[i];
//     }
//     const int N = 20;  // yaha iss N ki jitni jyada value lena chaho le sakte hai.
//     int idx[N];
//     for(i=0;i<N;i++)
//     {
//         idx[i] = -1;
//     }
//     int minidx = 2147483647;

//     for(i=0;i<n;i++)
//     {
//         if( idx[A[i]] != -1)
//         {
//             minidx = min(minidx , idx[A[i]]);
//         }
//         else
//         {
//           idx[A[i]] = i;
//         }
//     }

//       if(minidx == 2147483647 )
//       {
//           cout<< "-1"<<endl;
//       }
//       else {
//         cout<<minidx+1<<endl;
//       }
//     return 0;
// }

// subarray with given sum

// int main()
// {
// int n;
// cout << "enter the no. of elements";
// cin >> n;

// int s;
// cout << " enter the value of sum of subarray";
// cin >> s;

// int A[n];
// cout << "enter the elements of array ";
// for (int i = 0; i < n; i++)
// {
//     cin >> A[i];
// }
//     int i=0;

//     int  j = 0, st = -1, en = -1, sum = 0;

//     while (j < n && sum + A[j] <= s)
//     {
//         sum +=A[j];
//         j++;
//     }

//     if (sum == s)
//     {
//         cout << i+1<<" " << j << endl;
//         return 0;
//     }

//     while (j < n)
//     {
//         sum += A[j];

//         while (sum > s)
//         {
//             sum -= A[i];
//             i++;
//         }

//         if (sum == s)
//         {
//             st = i+1 ;
//             en = j +1;
//             break;
//         }
//         j++;
//     }

//     cout << st << " " << en;
//     return 0;
// }

// smallest positive missing number
//  int main()
//  {
//     int n;
//     cout << "enter the no. of elements";
//     cin >> n;

//     int A[n];
//     cout << "enter the elements of array ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//      const int N = 200;  // yeh maximum size ki array leni hai .

//     bool check[N];
//     for( int i=0;i<N ; i++)
//     {
//         check[i]= false;
//     }

//     for(int j=0; j<n ; j++)
//     {
//           if(A[j] >= 0)
//           {
//              check[A[j]]= true;
//           }
//         else{
//             continue;
//         }
//     }

//     for( int i=0;i<N;i++)
//     {
//         if(check[i]== false)
//         {
//             cout<<i;
//             return 0;
//         }
//         else{
//             continue ;
//         }
//     }
//     return 0;

//  }

// maximum subarray sum(cumulative approach) thoda kam samaj aya

// int main()
// {
//         int n;
//     cout << "enter the no. of elements";
//     cin >> n;

//     int A[n];
//     cout << "enter the elements of array ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     int currsum[n+1] ;
//     currsum[0]= 0;
//     for(int i=1; i<=n ; i++)
//     {
//       currsum[i] = currsum[i-1] + A[i-1];
//     }
//     for( int i= 0 ; i<n+1 ; i++)
//     {
//       cout<< " " <<currsum[i];

//     }
//     cout<< endl;

//     int maxsum = INT_MIN;

//     for(int i=1; i<=n;i++)
//     {
//          int sum = 0;
//          for(int j=0; j<i;j++){
//              sum = currsum[i]-currsum[j];
//              maxsum = max(sum , maxsum);
//          }
//     }
//     cout<<maxsum;
//     return 0;
// }

// kadens theorem for (maximum subarray sum)

// int main()
// {
//     int n;
//     cout << "enter the no. of elements";
//     cin >> n;

//     int A[n];
//     cout << "enter the elements of array ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }
// int cursum = 0;
// int maxsum = INT_MIN;
//  for( int i =0 ; i<n ; i++)
//  {
//      cursum+=A[i];
//      if(cursum<0)
//      {
//          cursum =0;
//      }
//      maxsum= max(maxsum , cursum);
//  }
//        cout<< maxsum;
//        return 0;

// }

// maximum circular subarray sum

//  int kadane( int A[]  , int n )
//  {
//          int cursum = 0;
//     int maxsum = INT_MIN;
//      for( int i =0 ; i<n ; i++)
//      {
//          cursum+=A[i];
//          if(cursum<0)
//          {
//              cursum =0;
//          }
//          maxsum= max(maxsum , cursum);
//      }
//      return maxsum;
//  }
// int main()
// {
//     int n;
// cout << "enter the no. of elements";
// cin >> n;

// int A[n];
// cout << "enter the elements of array ";
// for (int i = 0; i < n; i++)
// {
//     cin >> A[i];
// }
//     int totalsum = 0;
//      for(int i=0;i<n;i++)
//      {
//           totalsum = totalsum + A[i];
//      }
//       int wrapsum ;
//       int nonwrapsum;
//       nonwrapsum = kadane(A , n);

//     for( int i=0 ; i<n ; i++)
//     {
//         A[i] = -A[i];
//     }
//       wrapsum = totalsum + kadane(A , n);
//      cout<< max(wrapsum , nonwrapsum) << endl;
//      return 0;
// }

// pair sum problem

//  bool pairsumproblem(int A[] , int k, int n)
// {
//     int low = 0;
//     int high = n-1;

//     while(low< high )
//     {
//         if(A[low]+ A[high] == k)
//         {
//             cout<< low << " "<< high <<endl;
//             return true;
//         }
//         if(A[low]+ A[high] < k)
//         {
//             low++;
//         }
//         if(A[low]+ A[high] > k)
//         {
//             high--;
//         }
//     }
//     return false;
// }

// int main()
// {
//        int n;
//     cout << "enter the no. of elements";
//     cin >> n;

//     int A[n];
//     cout << "enter the elements of array ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }
//     int k =31;
//     cout<< pairsumproblem(A,k, n)<<endl;
//     return 0;
// }

// spiral matrix problem

// int main()
// {
//     int n, m;
//     cout << "enter the no. of rows and column ";
//     cin >> n >> m;
//     // int i =0 ; j=0;

//     int A[n][m];
//     cout << "enter the elements of";

//         for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> A[i][j];
//         }
//     }

//     int row_start = 0;
//     int row_end = n-1;
//     int column_start = 0;
//     int column_end = m-1;

//     while (row_start <= row_end && column_start <= column_end)
//     {
//         //    for row_start
//         for (int col = column_start; col <= column_end; col++)
//         {
//             cout << A[row_start][col] << " ";
//         }
//         row_start++;

//         for (int row = row_start; row <= row_end; row++)
//         {
//             cout << A[row][column_end] << " ";
//         }
//         column_end--;

//         for (int col = column_end; col >= column_start; col--)
//         {
//             cout << A[row_end][col] << " ";
//         }
//         row_end--;

//         for (int row = row_end; row >= row_start; row--)
//         {
//             cout << A[row][column_start] << " ";
//         }
//         column_start++;
//     }
//     return 0;
// }

// matrix multiplication problem

// int main()
// {
//     int n1, n2, n3;
//     cout << "enter the value n1 , n2 , n3";
//     cin >> n1 >> n2 >> n3;

//     int A[n1][n2];
//     int B[n2][n3];

//     cout << "enter the elements of first matrix" << endl;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin >> A[i][j];
//         }
//     }

//     cout << "enter the elements of second matrix" << endl;
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin >> B[i][j];
//         }
//     }

//     int C[n1][n3];

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             C[i][j] = 0;
//         }
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 C[i][j] += A[i][k] *B[k][j];
//             }
//         }
//     }

//     cout << " the elements of Answer matrix are " << endl;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;

// }

// matrix search

// int main()
// {

//     int n, m, target;
//     cout << " enter row , column , target ";
//     cin >> n >> m >> target;

//     int A[n][m];
//     cout << "enter the elements of matrix" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> A[i][j];
//         }
//     }

//     int r = 0, c = m - 1;
//     while (r < n && c > 0)
//     {
//         if (A[r][c] == target)
//         {
//             cout << " element found at row equal to " << r << "and column equal to" << c << endl;
//             return 0;
//         }
//         if (target > A[r][c])
//         {
//             r++;
//         }
//         if (target < A[r][c])
//         {
//             c--;
//         }
//     }

//     cout << "element not found"<<endl;
//     return 0;
// }

// checking palindrome

// int main()
// {
//     int n;
//     cout<<"enter no. of elements in character array";
//     cin>>n;
//     cout<<"enter array  ";
//     char arr[n+1];
//     cin>> arr;

//     bool check =1 ;
//     for(int i= 0; i<n ;i++)
//     {
//         if(arr[i] != arr[n-1-i])
//         {
//             check = 0;
//             break;
//         }
//     }
//     if(check == true)
//     {
//         cout<< " array is palindrome";
//     }
//     else{
//          cout<< " array is  not a palindrome";
//     }
//     return 0;

// }

// finding  word and length of word with a maximum wordlenghth  in array of sentence

// int main()
// {
//     int n;
//     cout<<"enter no. of elements in array ";
//     cin>>n;
//     cin.ignore();
//     char arr[n+1];

//     cout<<"enter the array ";
//     cin.getline(arr , n);
//     cin.ignore();

//     int i = 0;
//     int currlen = 0, maxlen =0;
//     int st = 0 , maxst = 0;
//      while(1)
//      {
//         if(arr[i] == ' ' || arr[i] == '\0')
//         {
//             if(currlen > maxlen)
//             {
//                 maxlen = currlen;
//                  maxst = st;
//             }
//             currlen = 0;
//             st = i+1;
//         }
//         else
//         currlen++;
//         if(arr[i]=='\0')
//            break;
//          i++;
//      }
//      cout<< maxlen << endl;
//      for(i =0 ;i<maxlen ; i++ )
//      {
//           cout<< arr[i+maxst];
//      }
//     return 0;
// }

// pointers

// int main()
// {
//     int a=20;
//     int *aptr;
//     aptr = &a;
//     cout<< a<<endl;
//     cout<<&a<<endl;  // it is the address of a
//     cout<<aptr<<endl;  // it stores the address of a ;
//     cout<<*aptr<<endl;  // it stores the value of a;
//     *aptr = 30;       // by this method we can change the value of a by using pointer of a without using the variable of a;
//     cout<<a<<endl;
//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int *aptr = &a;
//     cout<< aptr<<endl;
//     aptr++;
//     cout<< aptr<<endl;  // here after increamenting the aptr if we print it's value then adding +4 the value of aptr will print  because this integer is a pointer and integer takes 4 bytes ;
//     return 0;

// }

// pointer on arrays

// int main()
// {
//     int arr[]= {10 ,20 ,30};
//     cout<< *arr<<endl; // by only putting * before the variable arr we get the value of first element stored in array arr because here * is acting as a pointer .
//     cout<< arr <<endl;
//      int *ptr= arr;  // here there is no requirement of putting & before arr because here arr is already storing the address of elements.
//      cout<<"//////"<<endl;
//      for(int i=0;i<3;i++)  // method 1 for printing the elements of array through pointer.

//      {
//          cout<<*ptr<<endl;
//          ptr++;
//      }
//      cout<<"//////"<< endl;

//      for(int i=0;i<3;i++) // method 2 for printing the elemnts of array
//      {
//          cout<<*(arr+i)<<endl;
//      }
//      return 0;
// }

// pointer to pointer

// int main()
// {
//     int a =10;
//     int *p;
//     p = &a;
//     cout<<*p<<endl;
//     int **q = &p;
//     cout<<*q<<endl; //here one time dereferencing so value of p will print.
//     cout<<**q<<endl; // here second time dereferencing so value of a will print.
//     cout<<"///////"<<endl;
//     int ***r= &q;
//     cout<< *r<<endl;  //here one time dereferencing so value of  q will print.
//     cout<< **r<<endl;//here two time dereferencing so value of p will print.
//     cout<< ***r<<endl;//here third time dereferencing so value of a will print.
//     return 0;
// }

// passing pointers to function method 1

// void swap(int *a , int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;

// }

// int main()
// {
//     int a = 10 ;
//     int b= 20;

//     int *aptr = &a;
//     int *bptr = &b;

//     swap(aptr , bptr);
//     cout << a << b;
//     return 0;
// }

// passing pointers to function method 2

// void swap(int *aptr , int *bptr)
// {
//     int temp = *aptr;
//     *aptr = *bptr;
//     *bptr = temp;

// }

// int main()
// {
//     int a = 10 ;
//     int b= 20;

//     int *aptr = &a;
//     int *bptr = &b;

//     swap(aptr , bptr);
//     cout << a << b;
//     return 0;
// }

// passing pointers to function method 3

// void swap(int *aptr , int *bptr)
// {
//     int temp = *aptr;
//     *aptr = *bptr;
//     *bptr = temp;

// }

// int main()
// {
//     int a = 10 ;
//     int b= 20;

//     int *aptr = &a;
//     int *bptr = &b;

//     swap(&a , &b);
//     cout << a << b;
//     return 0;
// }

//    stack and heap

// int main()
// {
//     int a= 10; // stored in stack
//     int *p = new int() ; // allocating memory in heap
//     *p =10;  // here p is a pointer which is in stack and it is pointing to a location where 10 is stored which is located in heap;
//     delete(p); // deallocating memory
//     p= new int[4]; // again allocating an memory of ann array of size 4 and this time there is no need of again declaring a pointer ;
//     delete[]p;  // deleting pointer
//     p = NULL;
//     return 0;

// }

// strings

// int main()
// {
//     string str = "asdfghjkl";
//     // convert into upper case

//     for(int i=0;i<str.size();i++)
//     {
//         if(str[i]>='a' && str[i]<='z')
//         {
//             str[i]-=32;
//         }
//     }
//     cout<<str<<endl;
//     // cout<<'a'-32<<endl; //doubt in this line;

//     // convert into lower case

//      string st = "ASDFGHJKL";
//     for(int i=0;i<st.size();i++)
//     {
//         if(st[i]>='A' && st[i]<='z')
//         {
//             st[i]+=32;
//         }
//     }
//     cout<<st<<endl;
// }

// DIRECT METHOD TO UPERCASE OR LOWERCASE

// int main()
// {
//     string s= "asdfghjkl";
//     transform(s.begin() , s.end(), s.begin(), ::toupper );
//      cout<< s << endl;

//     string s1= "ASDFGHJKL";
//     transform(s1.begin() , s1.end(), s1.begin(), ::tolower );
//      cout<< s1 << endl;
// }

// making largest no. from numeric string ;

// int main()
// {
//     string s = " 498773348977";
//     sort(s.begin(), s.end(),greater<int>());
//     cout<<s<<endl;
//     return 0;
// }

// finding character with maximum frequency in string

// int main()
// {
//       string s = "iwhidhwihdwueefweiufefiwefijfuieb";
//       int freq[26];

//       for(int i=0;i<26;i++)
//       {
//             freq[i]=0;
//       }
//       for(int i=0;i<s.size();i++)
//       {
//           freq[s[i]-'a']++;
//       }

//       char ans = 'a';
//       int maxf = 0 ;

//       for(int i =0 ;i<26;i++)
//       {
//           if(freq[i] > maxf)
//           {
//               maxf = freq[i];
//               ans = i + 'a';
//           }
//       }

//       cout<<maxf<< " "<<ans<<endl;
//       return 0;
// }

// bit manipulation

// int getbit(int n , int pos)
// {
//  if ((n & (1<<pos))!= 0)
//  return 1;
//  else
//  return 0;
// }

// int setbit(int n , int pos){
//     return (n |(1<<pos));
// }

// int clearbit(int n , int pos)
// {
//     int mask = ~(1<<pos);
//     return(n & mask);
// }

// int updatebit(int n , int pos , int value)
// {
//     int mask = ~(1<<pos);
//     n = n & mask;
//     return (n | (value<<pos));
// }

// int main()
// {
// cout<<getbit(5 ,0)<<endl;
// cout<< setbit(5,1)<<endl;
//     cout<<clearbit(5 ,2)<<endl;
//     cout<<updatebit(5,1,1)<<endl;
//     return 0;
// }

// checking a number is it a power of 2

// bool ispowerof2(int n)
// {
//     return (n && !(n & n-1));  // yaha yeh (n &&) wala part samaj nhi aaya jo ki if n=0 hai to kaam aata hai .
// }

// int main()
// {
//     cout<< ispowerof2(0)<<endl;
//     return 0;
// }

// how many one's in the binary representation

// int numberofones(int n)
// {
//     int count =0;
//     while(n)
//     {
//         n = n & (n-1);
//         count ++;
//     }
//     return count ;
// }

// int main()
// {
//    cout<<numberofones(19)<<endl;
//    return 0;
// }

// program to generate al possible subsets of a set . // yeh kam samajh aaya

// void subsets(int arr[] , int n)
// {
//     for(int i=0 ; i<(1<<n);i++)
//     {
//         for(int j=0;j<n;j++){
//             if(i & (1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }cout<<endl;
//     }
// }

// int main()
// {
//   int arr[4] = {1,2,3};
//   subsets(arr,3);
//   return 0;
// }

// program to find a unique number in an array where all number except one are twice.

// int unique(int arr[], int n)
// {
//     int xorsum=0;
//     for(int i=0;i<n;i++)
//     {
//         xorsum= xorsum^arr[i];
//     }
//     return xorsum;
// }

// int main()
// {
//     int arr[] = {2, 4, 6, 3, 4, 6, 2};
//     int n = 7;
//     cout<< unique(arr, n)<<endl;
//     return 0;
// }

// program to find the two unique numbers in an array where all number except these two  are occuring  twice.

// int setBit(int n, int pos)
// {
//     return ((n & (1<<pos)) != 0);
// }

// void unique(int arr[], int n)
// {
//     int xorsum = 0;
//     for (int i=0; i<n; i++)
//     {
//         xorsum = xorsum^arr[i];
//     }
//     int tempxor = xorsum;
//     int setbit = 0;
//     int pos = 0;
//     while (setbit != 1)
//     {
//         setbit = xorsum & 1;
//         pos++;
//          xorsum = xorsum>>1;
//     }

//     int newxor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (setBit(arr[i], pos - 1))
//         {
//             newxor = newxor^arr[i];
//         }
//     }

//     cout << newxor << endl;
//     cout << (tempxor^newxor);

// }

// int main()
// {
//     int arr[] = {1, 2, 3, 1, 2, 3, 5, 7};
//     int n = 8;
//     unique(arr, n);
//     return 0;
// }

// finding a unique number in all the numbers which occured three times but this number is occuring only once .

// bool getBit(int n, int pos)
// {
//      if((n & (1<<pos))!= 0){
//      return 1;
//      }
//      else{
//      return 0;
//      }
// }

// int setBit(int n, int pos)
// {
//     return (n | (1<<pos));
// }

// int unique(int arr[] , int n)
// {
//     int result = 0;

//     for (int i=0; i<64; i++)
//     {
//         int sum = 0;
//         for (int j=0; j<n; j++)
//         {
//             if (getBit(arr[j], i))
//             {
//                 sum++;
//             }
//         }

//         if (sum%3 != 0)
//         {
//             result = setBit(result, i);
//         }
//     }

//     return result;

// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
//     cout<<unique(arr, 10)<<endl;
//     return 0;
// }

// BIT MANIPULATION ENDED

// seive of eratosthenes
// it is used to find the prime numbers from 0 to given number n.

// void primeseive(int n)
// {
//     int prime[100];

//     for(int i=0 ;i<100;i++)
//     {
//        prime[i]=0;
//     }

//     for (int i=2; i<=n; i++)
//     {
//         if (prime[i]==0)
//         {
//             for (int j=i*i; j<=n; j+=i)
//             {
//                 prime[j]=1;
//             }
//         }
//     }

//     for (int i=2; i<=n; i++)
//     {
//         if(prime[i]==0)
//         {
//             cout<<i<< " ";
//         }
//     }

// }

// int main()
// {
//     int n;
//     cout << "enter  the number";
//     cin >> n;
//     primeseive(n);
//     return 0;
// }

// finding smallest prime factor of a given number

// void primefactor( int n)
// {
//     int spf[100]={0};
//     for(int i=2;i<=n;i++)
//     {
//         spf[i] = i;
//     }

//     for(int i= 2; i<=n;i++){
//         if(spf[i]==i){
//             for(int j=i*i ;j<=n;j+=i)
//             {
//                 if(spf[j]==j)
//                 {
//                     spf[j]=i;
//                 }
//             }

//         }
//     }

//       while(n!=1){
//           cout<<spf[n]<<" ";
//           n=n/spf[n];
//       }
// }

// int main()
// {
// int n;
// cin>>n;
// primefactor(n);
// return 0;
// }

// euclid algorithm for {(hcf or gcd)both same } of two numbers.

// int hcf( int a ,int b){
//     while(b != 0)
//     {
//         int rem = a%b;
//         a=b;
//         b=rem;
//     }
//     return a;
// }

// int main()
// {
//    int a , b;
//    cout<<"enter the numbers"<<endl;
//    cin>>a>>" ">> b;
//    hcf(a , b);
//    return 0;
// }

// RECURSION

// print nth fibonaaci number

// int fib(int n){
//     if(n== 0 || n==1)
//     {
//         return n;
//     }

//     return fib(n-1) + fib(n-2);
// }

// int main()
// {
//    int n ;
//    cout<<"enter the value of n ";
//    cin>> n;

//    cout<< fib(n);
//    return 0;
// }

// check if array is sorted or not with help of recursion

// bool sorted(int arr[] , int n){
//     if(n==1)
//     {
//         return true;
//     }
//  bool restarray = sorted(arr+1 , n-1);
//  return (arr[0]<arr[1] && restarray );
// }

// int main()
// {
//     int arr[] = {1,2,6,4,5};
//     cout<<sorted(arr, 5)<<endl;
//     return 0;

// }

// first occurence and last occurence of array

// int firstocc(int arr[] , int n , int i, int key )
// {
//     if(i==n)
//     {
//         return -1;

//     }

//     if(arr[i] == key)
//     {
//         return i;
//     }

//     return firstocc( arr , n , i+1 , key );
// }

// int lastocc(int arr[], int n , int i, int key)
// {
//     if(i==n){
//         return -1;
//     }

//     int restarray = lastocc(arr , n , i+1 , key);
//     if(restarray!= -1)
//     {
//         return restarray;
//     }

//     if(arr[i] == key)
//     {
//         return i;
//     }
//     return -1;
// }

// int main()
// {
// int arr[] = { 4,2,1,2,5,2,7};
// cout<<firstocc(arr , 7 , 0 , 2)<<endl;
// cout<<lastocc(arr , 7, 0 , 2)<<endl;
// return 0;
// }

// reverse a string using recursion

// void reverse(string s )
// {
//     if(s.length() == 0)
//     {
//         return ;
//     }
//     string ros = s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }
// int main()
// {
//     string  str = "binod";
//     reverse( str);
//     return 0;
// }

// replacing pi with 3.14 in a given string using recursion

// void replacepi(string s)
// {
//     if(s.length() == 0)
//     {
//         return;
//     }

//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacepi(s.substr(2));
//      }
//      else
//      {
//          cout<<s[0];
//          replacepi(s.substr(1));
//      }
// }

// int main()
// {
//     string str = " pippippippiiipi";
//     cout<<str<< endl;
//     replacepi(str);
//     return 0.;
// }

// tower of hanoi // yeh samjh nhi aaya

// void towerofhanoi(int n , char src , char dest , char help )
// {
//     if(n==0)
//     {
//         return ;
//     }

//     towerofhanoi(n-1, src, help , dest);
//     cout<<" move from"<< src<< " to "<< dest<<endl;
//     towerofhanoi(n-1 , help, dest, src);
// }

//   int main()
//   {
//       towerofhanoi( 3 , 'A' , 'C' , 'B');
//       return 0;
//   }

//  remove duplicates from string

//   string removedup(string s)
//   {
//         if(s.length() == 0)
//         {
//             return "";
//         }
//         char ch = s[0];
//         string ans = removedup(s.substr(1));

//         if(ch == ans[0])
//         {
//             return  ans;
//         }

//         return (ch+ans);
//   }

// int main()
// {
//     cout<<removedup("aaaabbbeeecaaadddd")<<endl;
//     return 0;

// }

// moveallx

// string moveallx(string s)
// {
//     if(s.length() == 0)
//     {
//         return "";
//     }
//      char ch = s[0];
//     string ans = moveallx(s.substr(1));
//     if(ch == 'x')
//     {
//         return ans+ch;
//     }
//     return ch+ans;
// }
// int main()
// {
//    cout<<moveallx("axxbdxcefxhix");
//    return  0;
// }

// generate all substrings of strings

// yeh video 40 se mein jo diagram btayay h usse acha samaj aa jaayega

// void subseq(string s , string ans )
// {
//     if(s.length()==0)
//     {
//         cout<< ans<<endl;
//         return;
//     }

//     char ch = s[0];
//     string ros = s.substr(1);

//     subseq(ros , ans);
//     subseq(ros , ans + ch);
// }
// int main()
// {
//     subseq("ABC" , " ");
//     cout<<endl;
//     return 0;
// }

//  generate all substrings of strings with asciii code

// void subseq(string s , string ans)
// {
//     if(s.length() == 0)
//     {
//         cout<<ans<<endl;
//         return ;
//     }

//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);

//     subseq(ros ,ans);
//     subseq(ros , ans + ch);
//     subseq(ros ,ans + to_string(code));

// }

// int main()
// {
//     subseq("AB" , "");
//     return 0;
// }

// print all possible words from phone digits video 40(last que)

// kam samajh aaya

// string keypadarr[] = { "" ,"" , "./" , "abc", "def", "ghi","jkl","mno","pqrs", "tuv", "wxyz"};

// void keypad(string s , string ans)
// {
//     if(s.length()== 0)
//     {
//         cout<<ans<<endl;
//         return ;
//     }

//     char ch = s[0];
//     string code = keypadarr[ch-'0'];
//     string ros = s.substr(1);

//     for(int i =0 ; i<code.length() ; i++ )
//     {
//         keypad(ros , ans + code[i]);
//     }

// }

// int main()
// {
//     keypad("23" , "");
//     return 0;
// }

//  bahut advanced recursion question

// permutations of string

// void permutations(string s , string ans )
// {
//     if(s.length() == 0){
//         cout<<ans<<endl;
//         return ;
//     }

//     for( int i= 0 ;i<s.length() ; i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0 , i) + s.substr(i+1);

//         permutations(ros , ans + ch);
//     }

// }
// int main()
// {
//     permutations("ABC" ,"");
//     return 0;
// }

// count path and  we are travelling with a dice

// int countpath(int s , int e)
// {
//     if(s==e)
//     {
//         return 1;
//     }

//     if(s>e)
//     {
//         return 0;
//     }

//     int count = 0 ;
//     for(int i=1;i<=6;i++)
//     {
//         count+=countpath(s+i,e);
//     }
//     return count ;
// }

// int main()
// {
//     cout<<countpath(0,3)<<endl;
//     return 0;
// }

// counting path in a maze
// samajh  nhi aaya

// int countpathmaze(int n , int i , int j)
// {
//     if(i==n-1 && j==n-1)
//     {
//         return 1;
//     }
//     if(i>=n || j>=n)
//     {
//         return 0;
//     }

//     return countpathmaze(n , i+1 , j) + countpathmaze(n,i,j+1);

// }

// int main()
// {
//     cout<< countpathmaze(3 , 0 , 0)<<endl;
//     return 0;
// }
// OOPS

// class student{
//     string name;

//     public:

//     int age ;
//     bool gender ;

// void printinfo()
// {
//      cout<<"Name = ";
//     cout<<name<<endl;

//     cout<<" Age = ";
//      cout<<age<<endl;

//     cout<<" gender = ";
//     cout<<gender<<endl;
// }

//     void setname(string s)
//     {
//         name = s;
//     }

//     void getname(){
//         cout<<name<<endl;
//     }
// };

// int main()
// {
//     student arr[3];

//     for( int i= 0 ; i<3;i++)
//     {
//         string s;
//         cout<<" Name =";
//         cin>>s;
//         arr[i].setname(s);

//         cout<<" Age = ";
//         cin>>arr[i].age;

//         cout<<" gender = ";
//         cin>> arr[i].gender;
//     }

//     for(int i = 0 ; i<3; i++)
//     {
//         arr[i].printinfo();
//     }
//     return 0;
// }

// class student{
//     string name;

//     public:

//     int age ;
//     bool gender ;
//     // below is new than previous program

//     student(){
//         cout<<" default constructor"<<endl;
//     }  // default constructor

//     student(string s , int a, int g)
//     {
//         cout<<" parametrised constructor"<<endl;
//         name = s;
//         age = a;
//         gender = g;
//     }   // parameterised constructor

//     student(student &a){
//         cout<<"Copy constructor"<<endl;
//         name = a.name ;
//         age = a.age ;
//         gender = a.gender;
//     }  // copy constructor

//     ~student()
//     {
//         cout<<" destructor called"<< endl;
//     }

//     void getname(){
//         cout<<name<<endl;
//     }

//     void printinfo()
//     {
//          cout<<"Name = ";
//         cout<<name<<endl;

//         cout<<" Age = ";
//          cout<<age<<endl;

//         cout<<" gender = ";
//         cout<<gender<<endl;
//     }

//     bool operator == (student &a){
//         if(name == a.name && age == a.age && gender ==a.gender){
//             return true;
//         }
//         return false;
//     }
//          // operator overloading

// };

// int main()
// {
//     student a("urvi" , 20 , 1);
//     a.printinfo(); // here parametrised constructor is used
//     student b;  // here default constructor is used
//     student c(a); // here copy constructor is used
//     c.printinfo();

//     if(c==a)
//     {
//         cout<<"same "<<endl;
//     }
//     else{
//         cout<<"not same ";
//     }
//     return 0;
// }

// polymorphism

// function overloading

// class apnacollege
// {
// public:
//     void func()
//     {
//         cout << " i am a function with no arguement" << endl;
//     } //  function overloading

//     void func(int x)
//     {
//         cout << " i am a function with int  arguement" << endl;
//      }//  function overloading

//     void func(double x)
//     {
//         cout << " i am a function with double arguement" << endl;
//     } //  function overloading
// };

// int main()
// {
//     apnacollege obj;
//     obj.func();
//     obj.func(4);
//     obj.func(6.2);
//     return 0;
// }

// operator overloading

// class Complex
// {
// private:
//        int real, imag ;

// public:
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }

//     Complex operator + (Complex const &obj)
//     {
//         Complex res;
//         res.imag = imag + obj.imag;
//         res.real = real + obj.real;
//         return res;
//     }

//     void display()
//     {
//         cout << real << " + i" << imag << endl;
//     }
// };

// int main()
// {
//     Complex c1(12, 7) ;
//     Complex c2(6, 7);
//     Complex c3;
//     c3 = c1 + c2;
//     c3.display();
//     return 0;
// }

// run time virtual functions

// class base
// {
//     public:
//      virtual void print()
//     {
//         cout<<" this is the base class's print function" << endl;

//     }
//     void display()
//     {
//         cout<< " this is the base class's display function "<<endl;

//     }
// };

// class derived: public base
// {
//     public :
//     void print()
//     {
//         cout<<" this is the derived class's print function" << endl;

//     }
//     void display()
//     {
//         cout<< " this is the derived class's display function "<<endl;

//     }

// };

// int main()
// {
//     base *baseptr;
//     derived d;
//     baseptr = &d;
//     baseptr -> print();  // this function is dynamically binded
//     baseptr -> display();   // this function is dynamically binded
//     return 0;
// }

//   singly linked list

// class node {
//     public:
//     int data ;
//     node *next;
//     node(int val)
//     {
//         data = val;
//         next = NULL;

//     }

// };

// void insertathead(node* &head  , int val)
// {
//     node* n = new node(val);

//     // if(head == NULL)
//     // {
//     //     head = n ;
//     //     return ;
//     // }

//     n->next = head;
//     head = n;

// }

// void insertattail( node* &head , int val)
// {
//     node* n = new node(val);

//     if(head == NULL)
//     {
//         head = n;
//         return ;
//     }

//     node* temp = head;
//     while(temp->next!=NULL)
//     {
//         temp = temp->next;

//     }
//     temp->next= n ;
// }

// void display(node *head)
// {
//     node* temp = head;
//     while(temp != NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// // MY METHOD for deletion

// void deletenode(node* &head , int key)
// {
//     node* temp ;
//     node* prev;

//     if(head == NULL)
//     {
//         cout<<" list is empty";
//         return ;
//     }

//     if(head-> next == NULL)
//     {
//         delete(head);
//         return;
//     }

//     if(head->data == key )
//     {
//         node *todelete = head;
//         head = head->next;
//         delete todelete;
//     }

//     temp = head ;
//     while(temp != NULL)
//     {
//         if(temp->data == key)
//         {
//              prev->next = temp->next;
//              delete(temp);
//              return;
//         }
//         prev = temp;
//         temp = temp->next;
//     }
// }

// // apna college method for deletion

// void deleteathead(node* &head){
//     node* todelete= head;
//     head= head->next;
//     delete todelete;
// }

// void deletion(node* &head , int val )
// {
//      if(head == NULL)
//     {
//         cout<<" list is empty";
//         return ;
//     }
//     node* temp = head;
//     while(temp->next->data!=val)
//     {
//         temp= temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next= temp->next->next;
//     delete todelete;
// }

// // reversing a string by iterative way

// node* reverse(node* head)
// {
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;

//     while(currptr!= NULL)
//     {
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     return prevptr;
// }

// // reversing a string by recursion  ( yeh samajh nhi aaya )

// node* reverserecursive(node* &head)
// {
//     if(head==NULL || head->next == NULL)
//     {
//         return head;
//     }

//     node* newhead = reverserecursive(head->next);
//     head->next->next = head;
//     head->next = NULL;

//     return newhead;
// }

// // reversing k nodes by recursion   ( yeh samajh nhi aaya )

// node* reversek(node* &head , int k)
// {
//    node* prevptr = NULL;
//    node* currptr = head;
//    node* nextptr ;

//    int count = 0;
//    while(currptr!=NULL && count<k)
//    {
//        nextptr = currptr->next;
//        currptr->next = prevptr;
//        prevptr = currptr;
//        currptr = nextptr;
//        count ++;
//    }

//    if(nextptr!= NULL)
//    {
//        head->next = reversek(nextptr , k);
//    }

//    return prevptr;
// }
// bool search(node* head , int key)
// {
//      node* temp;
//      temp = head ;

//      while(temp!=NULL)
//      {
//          if(temp->data == key)
//          {
//              return true;
//          }
//          temp = temp->next;
//      }
//       return false;
// }

// void makecycle(node* &head , int pos )
// {
//     node* temp = head ;
//     node* startnode;

//     int count=1;

//     while(temp->next != NULL)
//     {
//         if(count == pos)
//         {
//             startnode = temp;
//         }

//         temp = temp->next;
//         count++;
//     }
//     temp->next = startnode;
// }

// bool detectcycle(node* &head)
// {
//     node* slow = head;
//     node* fast = head;

//     while( fast != NULL && fast->next != NULL) // yeh condition thoda kam samajh aaya
//     {
//        slow = slow->next;
//        fast = fast->next->next;

//        if(fast == slow)
//        {
//            return true;
//        }

//     }
//     return false ;
// }

// void removecycle(node* &head)
// {
//       node* slow = head;
//       node* fast = head;

//     do{
//         slow = slow->next;
//         fast= fast->next->next;
//     } while(slow!= fast);
//     fast = head;
//     while(slow->next!= fast->next)
//     {
//          slow = slow->next;
//         fast= fast->next;
//     }
//     slow->next = NULL;
// }
// int main()
// {
//     node* head = NULL;
// insertathead(head , 4);
// insertattail(head , 1);
// insertattail(head , 2);
// insertattail(head , 3);
// // display(head);

//     // deletenode(head , 4);
//     // display(head);
//     // deletenode(head , 2);

//     // display(head);
//     // deleteathead(head);
//     // display(head);
//     // deletion(head , 2);
//     // display(head);

//     // display(head);
//     // node* newhead = reverserecursive(head);
//     // display(newhead);

//     //  display(head);
//     //  int k = 2;
//     //  node* newhead = reversek(head , k);
//     //  display(newhead);

//     display(head);
//      makecycle(head , 3);
//     //  display(head);
//     cout<<detectcycle(head)<<endl;
//     removecycle(head);
//     display(head);
//      return 0;
// }

// doubly linked list

// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//         prev = NULL;
//     }
// };

// void insertathead(node *&head, int val)
// {
//     node *n = new node(val);
//     n->next = head;
//     if (head != NULL)
//     {
//         head->prev = n;
//     }
//     head = n;
// }

// void insertattail(node *&head, int val)
// {
//     if (head == NULL)
//     {
//         insertathead(head, val);
//         return;
//     }
//     node *n = new node(val);
//     node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->prev = temp;
// }
// void deleteathead(node *&head)
// {
//     node *todelete = head;
//     head = head->next;
//     head->prev = NULL;
//     delete todelete;
// }
// void deletion(node *&head, int pos)
// {
//     if (pos == 1)
//     {
//         deleteathead(head);
//         return;
//     }
//     node *temp = head;
//     int count = 1;
//     while (temp != NULL && count != pos)
//     {
//         temp = temp->next;
//         count++;
//     }
//     temp->prev->next = temp->next;
//     if (temp->next != NULL)
//     {
//         temp->next->prev = temp->prev;
//     }
//     delete temp;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
//     return;
// }

// // finding lenth of linked list

// int length(node* head)
// {
//     int l=0;
//     node* temp = head;
//     while(temp!=NULL)
//     {
//         l++;
//         temp = temp->next;
//     }
//     return l;
// }

// // append last k nodes  in linked list

// void kappend(node *&head, int k)
// {
//     node *temp;
//     temp = head ;
//     int n = length(head);
//     while(temp->next != NULL)
//     {
//        temp = temp->next;
//     }
//     temp->next = head;
//     head->prev = temp;

//     node *start;
//     start = head;
//     int count = 1;
//     while(count!= n-k)
//     {
//        start = start->next;
//        count++;
//     }
//      head = start->next;
//      start->next = NULL;

// }
// // intersecting a linked list(intersection kara rahe hai)

// void intersect(node* &head1 , node* &head2 , int pos)
// {
//     node* temp1 = head1;
//     pos--;   // jab bhi iska revision karo to ek baar traversing kar lene se samajh aa jaaayega ki pos-- kyu kar rakha hai loop ke pehle bhi .
//     while(pos--){
//         temp1 = temp1->next;
//     }
//     node* temp2 = head2;
//     while(temp2->next != NULL)
//     {
//         temp2 = temp2->next;
//     }
//     temp2->next = temp1;
// }

// // finding intersection of linkedlist

// int intersection(node* &head1 , node* &head2)
// int intersection(node* &head1 , node* &head2)
// {
//     int l1 = length(head1);
//     int l2 = length(head2);

//     int d= 0;
//     node *ptr1;
//     node *ptr2;
//     if(l1>l2)
//     {
//       d= l1-l2;
//       ptr1 = head1;
//       ptr2 = head2;
//     }
//     //  here we are pointing ptr1 to longer linked list

//     else{
//         d = l2-l1;
//         ptr1 = head2;
//         ptr2 = head1;
//     }

//     while(d){
//         ptr1 = ptr1->next;
//         if(ptr1== NULL) // iss condition ka kya matlab hai ? kyunki d to alwaya ptr1 ki length se kam hi hoga to ptr1 null bhi nahi hoga iss loop mein.
//         {
//             return -1;
//         }
//         d--;
//     }

//     while(ptr1!=NULL && ptr2 != NULL)
//     {
//         if(ptr1 == ptr2)
//         {
//             return ptr1->data;
//         }
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }

//     return -1;

// }
// // merging two linkedlist(apna college through iterative way)

// node* merge1(node* &head1 , node* &head2)
// {
//     node* p1 = head1;
//     node* p2 = head2;
//     node* dummynode = new node(-1); // iss line mein ek node create kiya hai
//     node* p3 = dummynode;     // aur iss line mein created node par pointer banaya hai .

//     while(p1 != NULL && p2 != NULL)
//     {
//         if(p1->data<p2->data)
//         {
//             p3->next = p1;
//             p1 =p1->next;
//         }

//         else{
//             p3->next = p2;
//             p2 = p2->next;
//         }
//         p3=p3->next;
//     }
//       while(p1 != NULL)
//       {
//           p3->next = p1;
//           p1 = p1->next;
//           p3  = p3->next;
//       }

//       while(p2 != NULL)
//       {
//           p3->next = p2;
//           p2 = p2->next;
//           p3  = p3->next;
//       }
//         return dummynode->next;
// }

// // merging two linkedlist(apna college through recursive way)

// node* mergerecursive(node* head1 , node* head2)
// {
//     if(head1 == NULL)
//     {
//         return head2;
//     }
//     if(head2 == NULL)
//     {
//         return head1;
//     }

//     node* result;
//     if(head1->data <head2->data)
//     {
//         result = head1;
//         result->next = mergerecursive(head1->next , head2);
//     }

//     else{
//        result = head2;
//         result->next = mergerecursive(head1 , head2->next);
//     }
//  return result;
// }

// int main()
// {
//     node *head1 = NULL;
//     node *head2 = NULL;
//     insertattail(head1, 1);
//     insertattail(head1, 4);
//     insertattail(head1, 5);
//     insertattail(head1, 7);
//     insertattail(head2, 2);
//     insertattail(head2, 3);
//     insertattail(head2, 6);
//     display(head1);
//     display(head2);
//     node* newhead = mergerecursive(head1 , head2);
//     display(newhead);
//     return 0;
// }

// circular linked list

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertathead(node *&head, int val)
// {
//     node *n = new node(val);

//     if (head == NULL)
//     {
//         n->next = n;
//         head = n;
//         return;
//     }

//     node *temp = head;

//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }

//     temp->next = n;
//     n->next = head;
//     head = n;
// }

// void insertattail(node *&head, int val)
// {

//     if (head == NULL)
//     {
//         insertathead(head, val);
//         return;
//     }

//     node *n = new node(val);
//     node *temp = head;

//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
//     n->next = head;
// }

// void deleteathead(node *&head) // my method
// {
//     node *temp = head;
//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
//     delete (head);
//     head = temp->next;
// }

// void deletion(node *&head, int pos)
// {
//     if (pos == 1)
//     {
//         deleteathead(head);
//         return;
//     }
//     node *temp = head;
//     int count = 1;
//     while (count != pos - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     temp->next = temp->next->next;
// }

// void display1(node* &head) // my method
// {
//     node *temp = head;
//     while (temp->next != head)
//     {
//         cout << temp->data;
//         temp = temp->next;
//     }
//     cout << temp->data << endl;
// }

// void display2(node* &head) // apna college method
// {
//     node *temp = head;
//     do
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != head);
//     cout << endl;
// }

// // question  Video no. 66

// void evenafterodd(node* &head)   // yeh program nhi chal rha hai 
// {
//     node* odd = head;
//     node* even = head->next;
//     node* evenstart = even;
//     while (odd->next != NULL && even->next != NULL)
//     {
//         odd->next = even->next;
//         odd = odd->next;
//         even->next = odd->next;
//         even = even->next;
//     }

//     odd->next = evenstart;
//     if (odd->next != NULL)
//     {
//         even->next = NULL;
//     }

// }

// int main()
// {
    // node *head = NULL;
    // insertattail(head, 1);
    // insertattail(head, 2);
    // insertattail(head, 3);
    // insertattail(head, 4);
    // display1(head);
    // insertathead(head, 5);
    // insertathead(head, 10);
    // insertathead(head, 11);
    // display1(head);
    // deleteathead(head);
    // display1(head);
    // deleteathead(head);
    // display1(head);
    // return 0;

    // node* head = NULL;
    // int arr[] = {1, 2, 3, 4, 5, 6};
    // for (int i = 0; i < 6; i++)
    // {
    //     insertattail(head, arr[i]);
    // }
    // display2(head);
    // cout<<"hjh";
    // evenafterodd(head);
    // cout<< "nkn";
    // display2(head);
    // return 0;
    // }


// ----------------------------------------

// #include <iostream>
// using namespace std;
// #define n 100

// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << " stack overflow " << endl;
//             return;
//         }

//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << " stack underflow " << endl;
//             return;
//         }

//         // delete arr[top--];  // what's  the  problem  here
//         top--;
//     }

//     int Top()
//     {
//         if (top == -1)
//         {
//             cout << " no element in stack  " << endl;
//             return -1;
//         }

//         return arr[top];
//     }

//     bool empty()
//     {
//         return top == -1;
//     }

//     void display()
//     {
//         if (top == -1)
//         {
//             cout << " stack underflow " << endl;
//             return;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << endl;
//         }
//     }
// };

// int main()
// {
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.Top()<<endl;
//     st.pop();
//     cout<<st.Top()<<endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout<<st.empty()<<endl;
//     return 0;

// }

// reversing a sentence *************

// #include <iostream>
// #include <stack>
// using namespace std;
// void reverseSentence(string s)
// {
//     stack<string> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         string word = "";
//         while (s[i] !=' ' && i < s.length())
//         {
//             word += s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while (!st.empty())
//     {
//         cout<<st.top()<< " ";
//         st.pop();
//     }
//     cout<<endl;
// }

// int main()
// {
//     string s = " hey , how are you doing?";
//     reverseSentence(s);
//     return 0 ;

// }

// reversing a stack *****************

// #include<iostream>
// #include<stack>
// using namespace std ;

// void insertatbottom(stack<int> &st , int ele )  // yeh function trace karna hai
// {
//     if(st.empty())
//     {
//         st.push(ele);
//         return ;

//     }
//     int topele = st.top();
//     st.pop();
//     insertatbottom(st , ele);
//     st.push(topele);
// }

// void reverse(stack<int> &st)
// {
//     if(st.empty())
//     {
//         return ;
//     }

//     int ele = st.top();
//     st.pop();
//     reverse(st);
//     insertatbottom(st , ele);
// }

// int main()
// {
//     stack<int> st ;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     reverse(st);
//     while(!st.empty())
//     {
//         cout<<st.top()<<endl;
//         st.pop();
//     }
//     cout<<endl;
// }

// #include <bits/stdc++.h>
// #include <stack>
// using namespace std;

// int preeva(string s)
// {
//     stack<int> st;
//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             st.push(s[i] - '0');
//         }
//         else
//         {
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();

//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1 + op2);
//                 break;
//             case '-':
//                 st.push(op1 - op2);
//                 break;
//             case '*':
//                 st.push(op1 * op2);
//                 break;
//             case '/':
//                 st.push(op1 / op2);
//                 break;
//             case '^':
//                 st.push(pow(op1, op2));
//                 break;
//             }
//         }
//     }
//     return st.top();
// }

// int main()
// {
//     string s;
//     cout << "enter s";
//     cin >> s;
//     int ans;
//     ans = preeva(s);
//     cout << ans << endl;
//     return 0;
// }

// balanced paranthesis

// #include <bits/stdc++.h>
// #include <stack>
// using namespace std;

// bool isvalid(string s )
// {
//     stack<int> st ;

//     for(int i =0 ; i<s.length();i++)
//     {
//         if(s[i] == '{' || s[i] == '(' || s[i] == '[')
//         {
//             st.push(s[i]);
//         }
//         else if( s[i] == '}')
//         {
//             if(st.top()== '{' )
//             {
//                 st.pop();
//             }
//             else{
//                 return false;
//             }
//         }
//         else if( s[i] == ')')
//         {
//             if(st.top()== '(' )
//             {
//                 st.pop();
//             }
//             else{
//                 return false;
//             }
//         }
//         else if( s[i] == ']')
//         {
//             if(st.top()== '[' )
//             {
//                 st.pop();
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     if(st.empty())
//     {
//         return true ;
//     }
// }

// int main()
// {
//     string s;
//     cout<<"enter s ";
//     cin>>s;
//      isvalid(s);
//     if( isvalid(s) )
//     {
//         cout<<"valid string ";
//     }
//     else
//     {
//         cout<<"Invalid string ";
//     }
//     return 0 ;
// }

// queue starts from here

// #include <iostream>
// using namespace std;
// #define n 20

// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int x)
//     {
//         if (back == n-1)
//         {
//             cout << " queue is full";
//             return;
//         }
//         else
//         {
//             back++;
//             arr[back]=x;
//         }
//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "queue is empty ";
//             return;
//         }
//         front++;
//     }

//     int peek()
//     {
//         if (front == -1 ||  front > back)
//         {
//             cout << "queue is empty ";
//             return 0;
//         }

//         return arr[front];
//     }

//     bool empty()
//     {
//         if(front == -1 || front > back )
//         {
//             return true ;
//         }
//         return false ;
//     }
// };

// int main()
// {
//     queue q ;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();

//    cout<<q.empty();
//    return 0 ;
// }

// linked list implementation of queues

// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//         back = NULL;
//     }
//     void push(int x)
//     {
//         node *n = new node(x);
//         if (front == NULL)
//         {
//             back = n;
//             front = n;
//             return;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {
//         if (front == NULL)
//         {
//             cout << " queue is empty ";
//             return;
//         }
//         node *todelete = front;
//         front = front->next;
//         delete todelete;
//     }

//     int peek()
//     {
//         if(front == NULL)
//         {
//             cout<<"queue is empty "<<endl;
//             return 0 ;
//         }

//         return front->data;
//     }

//     bool empty()
//     {
//         if(front == NULL)
//         {
//             return true;
//         }

//       else {
//           return false ;
//       }

//     }
// };

// int main()
// {
//     queue q ;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);

//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;
//     q.pop();

//    cout<<q.empty()<<endl;
//    return 0 ;

// }

// video 81-90 not seen

// tree starts from here

//    strts from video 91

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// void preorder(struct Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data ;
//     preorder(root->left);
//     preorder(root->right);
// }
// void postorder(struct Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data;
// }
// void inorder(struct Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data ;
//     inorder(root->right);
// }
//   int search(int inorder[] , int start , int end , int cur)
//   {
//       for(int i = start ; i<= end ;i++)
//       {
//           if(inorder[i] == cur)
//           {
//               return i ;
//           }
          
//       }
//       return -1 ; 
//   }

// Node* buildtree(int preorder[] ,int inorder[] ,  int start , int end )
// {
//    static int idx = 0;
//     if(start>end)
//     {
//         return NULL;
//     }
//    int cur = preorder[idx]; 
//    idx++;
//    Node* node = new Node(cur);
//    if(start == end )
//    {
//        return node ;
//    }
//    int pos = search(inorder,start ,end ,cur); 
//    node->left = buildtree( preorder ,inorder , start , pos-1);
//    node->right = buildtree( preorder , inorder,  pos+1 , end);
//    return node ;
// }
//  void inorderprint( Node* root )
//     {
//         if(root != NULL)
//         {
            
//         inorderprint(root->left);
//         cout<<root->data;
//         inorderprint(root->right);
//         }
//     }



    
// int main()
// {
//    int preorder1[]= {1,2,4,3,5};
//    int inorder1[] = {4,2,1,5,3};
    
//    Node* root = buildtree(preorder1 , inorder1 , 0 , 4);
//    inorderprint(root);
//    cout<<endl;
//    inorder(root);
//    return 0;
// }


https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/


