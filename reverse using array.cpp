//https://www.hackerrank.com/challenges/arrays-introduction/problem
/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    Enter your code here. Read input from STDIN. Print output to STDOUT 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp;
    if(n%2==0)
    {
	
    for(int i=0;i<n/2;i++)
    {
       
        temp=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=temp;
    }
    
    }
    else
    {
    for(int i=0;i<(n-1)/2;i++)
    {
        temp=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=temp;
    }
    	
	}
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


