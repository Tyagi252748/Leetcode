#include<iostream>
using namespace std;
int main()

{
cout<<"no of elements"<<endl;
int n;
cin>>n;
cout<<"enter elements"<<endl;
int arr[n];
for(int &ele:arr){
    cin>>ele;
}
int visited[100] = {0};
cout<<"target sum"<<endl;
int ts;
cin>>ts;

int count = 0;
for(int i = 0; i < n;i++){
    for( int j = (i+1); j < n; j++){
        if(arr[i] + arr[j] == ts && visited[arr[j]] ==0){
            count++;
            visited[arr[j]] = 1;
        }
    }
}
cout<<"unique no of pairs :"<<count<<endl;
return 0;



}