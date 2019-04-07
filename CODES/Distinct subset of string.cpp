 #include<bits/stdc++.h> 
using namespace std; 
int main() 
{   int t,n,f,i,len;
    int count;
	string s;
    char x;
    scanf("%d",&t);
    for(f=0;f<t;f++)
    {
        count =0;
      scanf("%d",&n);
      cin>>s>>x;
	for (i = 0; i < n; i++) 
		for (len = 1; len <= n - i; len++) 
		{
			  if(s.substr(i, len).find(x)!=std::string::npos)
			  {
			    count=count+1;
			  }
			  
		}
		printf("%d\n",count);
    }
	return 0; 
} 
