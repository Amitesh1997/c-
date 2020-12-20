//RAY COMPETATIVE CODING TEMPLATE
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	
	int n;
	cin >> n;
	int a[n][n];
	
	for(int i = 0; i<n; i++)
		for(int j = 0; j<n; j++)
			cin >> a[i][j];
		
		int aa=0, bb=n-1,temp;
		for(int i = 0; i<n; i++)
			{
				for(int j = 0; j<n; j++){
				    temp=a[j][bb];
                 	a[j][bb] = a[aa][j];
			    a[aa][j]=temp;
					
				aa++, bb--; 
			}
		}
			
			cout << "\nAfter rotating the array :\n";
			
			for(int i = 0; i<n; i++)
			{
				for(int j = 0; j<n; j++)
					cout << a[i][j] << " ";
					
					cout << endl;
			}
			
	
	return 0;	
}
