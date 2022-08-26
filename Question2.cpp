//Write a C++ program to print all the repeated numbers with their frequency in an array in minimum time complexity.??
//NAME= HARMANJOT SINGH
//ROLL NO.= 2010990268
//SET NO.= 01
#include <bits/stdc++.h>
using namespace std;


void findRepeat(int* a, int n){
    //Declare the map
    unordered_map<int,int> hash;
    
    for(int i=0;i<n;i++){//creating the map
        hash[a[i]]++;//for same key increase frequency
    }
    
    cout<<"Repeated Number      Frequency\n";
    //iterator->first == key(element value)
    //iterator->second == value(frequency)
    
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)//frequency>1 means repeating element
    printf("%d\t\t\t%d\n",it->first,it->second);
    
}

int main()
{
    int n;
    cout<<"Array Length: ";
    cin>>n;
    int* a=(int*)(malloc(sizeof(int)*n));
    
    cout<<"Array Input: ";
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    //function to print repeating elements with their frequencies
    findRepeat(a,n);

    return 0;
}