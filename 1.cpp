// #include <iostream>
// using namespace std;
// int main() {
//     string name;
//     int n;
//     getline(cin,name);
//     // cin>>name;
//     cin>>n;
//     cout<<name<<endl;
//     cout<<n<<endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     cout<<"Enter name"<<endl;
//     string name;
//     string name1;
//     // getline(cin,name);
//     cin>>name;
//     cin>>name1;
//     cout<<name<<endl;
//     cout<<name1<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     cout<<"Enter name"<<endl;
//     int n;
//     string name1;
//     cin>>n;
//     getline(cin,name1);
//     cout<<n<<endl;
//     cout<<name1<<endl;
//     return 0;
// }


// // 1
// #include <iostream>
// using namespace std;
// int main() {
//     cout<<"Enter word"<<endl;
//     string name1;
//     getline(cin,name1);
//     name1+="a student";
//     cout<<name1<<endl;
//     return 0;
// }

// // 2
// #include <iostream>
// using namespace std;
// int main() {
//     cout<<"Enter num"<<endl;
//     int n;
//     cin>>n;
//     cout<<n+3<<endl;
//     return 0;
// }

// // 3
// #include <iostream>
// using namespace std;
// int main() {
//     string s1,s2,s3;
//     cout<<"Enter name"<<endl;
//     cin>>s1;
//     cout<<"Enter age"<<endl;
//     cin>>s2;
//     cout<<"Enter roll"<<endl;
//     cin>>s3;
//     cout<<s1<<" "<<s2<<" "<<s3<<endl;
//     return 0;
// }

// 4
// #include <iostream>
// using namespace std;
// int main() {
//     int 
//     cout<<"Enter name"<<endl;
//     cin>>s1;
//     cout<<"Enter age"<<endl;
//     cin>>s2;
//     cout<<"Enter roll"<<endl;
//     cin>>s3;
//     cout<<s1<<" "<<s2<<" "<<s3<<endl;
//     return 0;
// }

// 6 float divided
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int num1,res;
//     cin>>num1;
//     res=num1/2;
//     cout<<setprecision(2)<<res;
//     return 0;
// }

// 7
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter inputs"<<endl;
//     int a,b,c;
//     cin>>a>>b>>c;
//     if((a*1.0+b)/2>c)
//         cout<<"Yes"<<endl;
//     else
//         cout<<"No"<<endl;
//     return 0;
// }

// 8
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter inputs"<<endl;
//     int n,x;
//     cin>>n>>x;
//     if(n*x>=10000 && n*x<100000)
//         cout<<"Yes"<<endl;
//     else
//         cout<<"No"<<endl;
//     return 0;
// }



// 10
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter inputs"<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"sum1="<<a[0]+a[1]<<endl;
//     cout<<"sum2="<<a[n-1]+a[n-2]<<endl;
//     return 0;
// }

// 11
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter inputs"<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int od=0;
//     int ev=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]%2==0)
//         ev++;
//         else
//         od++;
//     }
//     if(ev==od)
//     cout<<"Tie"<<endl;
//     else if(ev>od)
//     cout<<"Even"<<endl;
//     else
//     cout<<"Odd"<<endl;
//     return 0;
// }

// 12
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs"<<endl;
//     int n;
//     cin>>n;
//     cout<<"enter inputs"<<endl;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int sum=accumulate(a,a+n,0);
//     cout<<sum<<endl;
// }

// 12
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs"<<endl;
//     int n;
//     cin>>n;
//     while(n--){
//         int m;
//         cin>>m;
//         int a[m];
//         for(int i=0;i<m;i++)
//         {
//             cin>>a[i];
//         }
//         cout<<accumulate(a,a+m,0)<<endl;
//     }
// }

// 12
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs"<<endl;
//     int n;
//     cin>>n;
//     while(n--){
//         int m;
//         cin>>m;
//         int a[m];
//         for(int i=0;i<m;i++)
//         {
//             cin>>a[i];
//         }
//         cout<<accumulate(a,a+m,0)<<" ";
//         cout<<(accumulate(a,a+m,0)*1.0)/m<<" ";
//         cout<<*max_element(a,a+m)<<" ";
//         cout<<*min_element(a,a+m)<<" ";
//     }
// }


// 12
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs"<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     sort(a,a+n,greater<int>());
//     cout<<accumulate(a+n-5,a+n,0)<<endl;
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
// }


// 13
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs"<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"Enter Key"<<endl;
//     int key;
//     cin>>key;
//     int freq=count(a,a+n,key);
//     cout<<freq<<endl;
//     int b[]={};
//     return 0;
// }


// 18
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs in both array"<<endl;
//     int n,m;
//     cin>>n>>m;
//     int a[n];
//     int b[m];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<m;i++){
//         cin>>b[i];
//     }
//     for(int i=0;i<m;i++)
//     {
//         int cnt=0;
//         for(int j=0;j<n;j++)
//         {
//             if(b[i]<a[j])
//             cnt++;
//         }
//         cout<<cnt<<" ";
//     }
//     return 0;
// }



// 19
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs in both array"<<endl;
//     int n,k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(k==a[i]+a[j])
//             {
//                 cout<<a[i]<<" "<<a[j]<<endl;
//             }
//         }
//     }
//     return 0;
// }


// // 20
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs in both array"<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int max=0;
//     for(int i=n-1;i>=0;i--)
//     {
//         if(max<a[i]){
//             max=a[i];
//         }
//         if(max>a[i])
//         {
//             cout<<max<<" ";
//         }
//         else
//         {
//             cout<<0<<" ";
//         }
//     }
//     return 0;
// }



// 21
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs in both array"<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxP=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             maxP=max(maxP,a[j]-a[i]);
//         }
//     }
//     cout<<maxP<<endl;
//     return 0;
// }

// 22
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs in both array"<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int subSum=0;
//     for(int i=0;i<n;i++)
//     {
//         int sum=a[i];
//         for(int j=i+1;j<n;j++)
//         {
//             sum+=a[j];
//             subSum=max(subSum,sum);
//         }
//     }
//     cout<<subSum<<endl;
//     return 0;
// }


// //optimized kadanes algorithm
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     cout<<"enter no. inputs in both array"<<endl;
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int maxi=0;
//     int subSum=0;
//     for(int i=0;i<n;i++)
//     {
//         if(0>subSum+a[i])
//         {
//             subSum=a[i];
//         }
//         else
//         {
//             subSum+=a[i];
//         }
//         maxi=max(maxi,subSum);
//     }
//     cout<<maxi<<endl;
//     return 0;
// }



// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<vector<int>>mat={{12,4,7},{1,2,3},{4,5,6},{8,9,10}};
//     mat[2].insert(mat[2].begin()+3,67);
//     for(int i=0;i<mat.size();i++)
//     {
//         for(int j=0;j<mat[i].size();j++)
//         {
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m;
//     cout<<"enter row and column"<<endl;
//     cin>>n>>m;
//     cout<<"enter row and column elements"<<endl;
//     vector<vector<int>>mat(n,vector<int>(m,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         int maxi=*max_element(mat[i].begin(),mat[i].end());
//         int mini=*min_element(mat[i].begin(),mat[i].end());
//         int sum=accumulate(mat[i].begin(),mat[i].end(),0);
//         cout<<"max="<<maxi<<" "<<"min="<<mini<<" "<<"sum="<<sum<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m;
//     cout<<"enter row and column"<<endl;
//     cin>>n>>m;
//     cout<<"enter row and column elements"<<endl;
//     vector<vector<int>>mat(n,vector<int>(m,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }
//     }
//     for(int i=1;i<n-2;i++){
//         for(int j=1;j<m-2;j++)
//         {
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m,k;
//     cout<<"enter row and column swap elements"<<endl;
//     cin>>n>>m>>k;
//     cout<<"enter row and column elements"<<endl;
//     vector<vector<int>>mat(n,vector<int>(m,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }
//     }
//     for(int i=0;i<n/2;i++){
//         for(int j=m-1;j>m-1-k;j--)
//         {
//             int rind=n-i-1;
//             int cind=m-1-j;
//             swap(mat[i][j],mat[rind][cind]);
//         }
//     }
//     cout<<endl;
//     cout<<endl;
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m;
//     cout<<"enter row and column swap elements"<<endl;
//     cin>>n>>m;
//     cout<<"enter row and column elements"<<endl;
//     vector<vector<int>>mat(n,vector<int>(m,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>mat[i][j];
//         }
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<m-1;j++)
//         {
//             swap(mat[i][j],mat[i+1][j+1]);
//         }
//     }
//     cout<<endl;
//     cout<<endl;
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 27
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string str;
//     getline(cin,str);
//     string str2;
//     getline(cin,str2);
//     int n;
//     cin>>n;
//     string res="";
//     for(int i=0;i<str.size();i++)
//     {
//         if((i)%n==0)
//         {
//             res+=str2;
//         }
//         res+=str[i];
//     }
//     cout<<res<<endl;
// }


// // 28
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int k,n,m;
//     cin>>k>>n>>m;
//     string str2;
//     cin>>str2;
//     int res=0;
//     for(int i=0;i<str2.size();i++)
//     {
//         if(str2[i]>=n && str2[2]<=m)
//         {
//             res++;
//         }
//         cout<<"res="<<res<<endl;
//     }
//     cout<<res<<endl;
// }


// // 29
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int k,n;
//     cin>>k>>n;
//     string str2;
//     cin>>str2;
//     string str3=str2.substr(n,k-2*n);
//     cout<<str3<<endl;
// }


// 30
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int k;
//     cin>>k;
//     string str2;
//     getline(cin,str2);
//     int len=0;
//     for(int i=0;str2[i]!=' ';i++)
//     {
//         len++;
//     }
//     for(int i=0;i<str2.size();i++)
//     {
//         for(int j=0;j<k/2;j++)
//         {
//             int sInd=j*(len+1);
//             int stSiz=j+1;
//         }
//     }
// }


// // 31
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,k;
//     cin>>n>>k;
//     string str2;
//     cin>>str2;
//     string str=str2.substr(k,n-k)+str2.substr(0,k);
//     cout<<str<<endl;
// }


// // 32
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,k;
//     cin>>n>>k;
//     string str2;
//     cin>>str2;
//     string str=str2.substr(n-k,k)+str2.substr(0,n-k);
//     cout<<str<<endl;
// }



// // 33
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,k;
//     cin>>n>>k;
//     string str2;
//     cin>>str2;
//     string str="";
//     for(int i=0;i<str2.size();i=i+(2*k))
//     {
//         string rev=str2.substr(i+k,k);
//         reverse(rev.begin()+i+k,rev.begin()+i+k+k);
//         str+=str2.substr(i,k)+rev;
//     }
//     cout<<str<<endl;
// }

// 33
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,k;
//     cin>>n>>k;
//     string str2;
//     cin>>str2;
//     string str="";
//     for(int i=0;i<str2.size();i=i+(2*k))
//     {
//         reverse(str2.begin()+i+k,str2.begin()+i+k+k);
//     }
//     cout<<str2<<endl;
// }


// 34
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     string str2;
//     cin>>str2;
//     int i=0;
//     int j=n-1;
//     while(i<=j)
//     {
//         if(str2[i]!=str2[j])
//         {
//             cout<<"False"<<endl;
//             break;
//         }
//         if(i==j)
//         {
//             cout<<"true"<<endl;
//         }
//     }
// }


// 35
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m,k;
//     cin>>n>>m>>k;
//     string str1;
//     cin>>str1;
//     string str2;
//     cin>>str2;
//     string str3=str1.substr(n-k,k)+str1.substr(0,n-k)+str2.substr(k,n-k)+str2.substr(0,k);
//     int i=0;
//     int j=str3.size()-1;
//     cout<<str3<<" ";
//     while(i<=j)
//     {
//         if(str3[i]!=str3[j])
//         {
//             cout<<"False"<<endl;
//             break;
//         }
//         if(i==j)
//         {
//             cout<<"true"<<endl;
//         }
//         i++;
//         j--;
//     }
// }

//36
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     string str1;
//     cin>>str1;
//     string str2="";
//     string str3="";
//     for(int i=0;i<str1.size();i++)
//     {
//         if(str1[i]>=65 && str1[i]<=90)
//         {
//             str2+=str1[i]+32;
//         }
//         else if((str1[i]>='a' && str1[i]<='z')||(str1[i]>='0' && str1[i]<='9')){
//             str2+=str1[i];
//         }
//         else if(!((str1[i]>='A' && str1[i]<='Z')||(str1[i]>='a' && str1[i]<='z')||(str1[i]>='0' && str1[i]<='9')))
//         {
//             str3+=str1[i];
//         }
//     }
//     str2+=str3;
//     cout<<str2<<endl;
// }

// // 2.1
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m;
//     string str=to_string(n);
//     str+=str+str+str;
//     int flag=0;
//     int sum=0;
//     while(flag!=1){
//         for(int i=0;i<str.size();i++){
//             sum+=str[i]-'0';
//         }
//         if(str.size()==1){
//             flag=1;
//         }
//         else
//         {
//             str=to_string(sum);
//             sum=0;
//         }
//     }
//     int ans=stoi(str);
//     cout<<ans<<endl;
//     return 0;
// }


// 2.2
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n,m;
//     cin>>n>>m;
//     int sum=0;
//     for(int i=n;i<=m;i++)
//     {
//         int r1=i%10;
//         int r2=(i/10)%10;
//         int r3=(i/100)%10;
//         int powSum=pow(r1,3)+pow(r2,3)+pow(r3,3);
//         if(powSum==i)
//         {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }


// // 2.3
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<=n;i++)
//     {
//         string str=to_string(i);
//         if(str.size()==1)cout<<i<<" ";
//         else
//         {
//             for(int j=1;j<=str.size();j++)
//             {
//                 if(j==str.size())
//                 {
//                     cout<<i<<" ";
//                 }
//                 else if(str[j-1]!=str[j]+1 && str[j-1]!=str[j]-1)
//                 {
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }


// // 2.4
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     vector<int>b(n);
//     vector<int>c;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>b[i];
//     }
//     int i=0;
//     int j=0;
//     while(i<n && j<n){
//         if(a[i]>b[j])
//         {
//             c.push_back(b[j]);
//             j++;
//         }
//         else
//         {
//             c.push_back(a[i]);
//             i++;
//         }
//     }
//     while(i<n){
//         c.push_back(a[i]);
//         i++;
//     }
//     while(j<n){
//         c.push_back(b[j]);
//         j++;
//     }
//     for(i=0;i<2*n;i++)
//     {
//         cout<<c[i]<<" ";
//     }
//     cout<<endl;
//     cout<<c[n]+c[n-1];
//     return 0;
// }



// // 2.5
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<int>a(n,-1);
//     vector<int>b(100000,0);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         b[a[i]]++;
//     }
//     // reverse prefix
//     int p=1;
//     int c=-1;
//     for(int i=100000-1;i>=0;i--)
//     {
//         if(b[i]>0)
//         {
//             c=b[i];
//             b[i]=p;
//             p=p+c;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<b[a[i]]<<" ";
//     }
//     return 0;
// }



// // 2.6
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<int>a(n,-1);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int p=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==0)
//         {
//             p++;
//             continue;
//         }
//         else
//         {
//             a[i-p]=a[i];
//         }
//     }
//     for(int i=n-1;i>=0 && p>0;i--)
//     {
//         a[i]=0;
//         p--;
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// // 2.7
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<int>a(n,-1);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     vector<int>b=a;
//     sort(b.begin(),b.end());
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]!=b[i])
//         {
//             count++;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// }



// // 2.8
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<int>a(n,-1);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     sort(a.begin(),a.end());
//     int st=0;
//     int end=n-1;
//     for(int i=0;i<n;i++)
//     {
//         if(i%2==0)
//         {
//             cout<<a[st]<<" ";
//             st++;
//         }
//         else
//         {
//             cout<<a[end]<<" ";
//             end--;
//         }
//     }
//     return 0;
// }


// // 2.9
// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     vector<int>a(n,-1);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int freq=1;
//     int maxE=a[0];
//     for(int i=1;i<n;i++)
//     {
//         if(a[i]==maxE){
//             freq++;
//         }
//         else if(freq==0){
//             maxE=a[i];
//             freq++;
//         }
//         else if(a[i]!=maxE){
//             freq--;
//         }
//     }
//     if(count(a.begin(),a.end(),maxE)>n/2)
//     {
//         cout<<maxE<<endl;
//     }
//     else
//     {
//         cout<<"not found"<<endl;
//     }
//     return 0;
// }


// 2.10
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>a(n,-1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(sum+a[i]<=5000)
        {
            sum+=a[i];
        }
        else
        break;
    }
    cout<<i<<endl;
    return 0;
}