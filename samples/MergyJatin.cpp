#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,i,arr[n],j,k;
int merge(int l,int r,int m) 
{ 
	int s1=m-l+1,s2=r-m; 
	int a1[s1],a2[s2];
	for(j=0;j<=s2;j++) 
		a2[i]=arr[m+j];  
	for(i=0;i<=s1;i++) 
		a1[i]=arr[l+i];
	i = 0;  
	j = 0;  
	while(i<s1&&j<s2) 
	{ 
		if(a1[i]<=a2[j]) 
		{ 
			arr[k]=a1[i]; 
			i++; 
		} 
		else
		{ 
			arr[k]=a2[j]; 
			j++; 
		} 
	} 
	while(i<=s1) 
	{ 
		arr[k]=a1[i];  
		k++; 
	} 
	while(j<=s2) 
	{ 
		arr[k]=a2[j];  
		k++; 
	} 
}
int msort(int l,int r) 
{ 
	if(l<=r) 
	{ 
		int m=(l+r)/2; 
		merge(l,m,r); 
		msort(l,m); 
		msort(m+1,r); 
	} 
} 
int main() 
{ 
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	msort(0,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" "; 
	return 1;
}
