#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vecI;

static void merge(vecI &arr, int l, int m, int r)
{
    int i, j, k;
    vecI temp;
    i = l;
    j = l;
    k = m+1;
    

    while(j <= m && k <= r)
    {
        if(arr[j] < arr[k])
            temp.push_back(arr[j++]);
        else
            temp.push_back(arr[k++]);
    }

    while(j<=m)
        temp.push_back(arr[j++]);

    while(k<=r)
        temp.push_back(arr[k++]);

    for(int i=l; i <= r; i++)
        arr[i] = temp[i-l];
    
}

static void helper(vecI &arr, int l, int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2;
        helper(arr,l,m);
        helper(arr,m+1,r);
        merge(arr,l,m,r);
    }
}


void runMergesortTrivial(vecI &arr)
{
    helper(arr,0,arr.size()-1);
}