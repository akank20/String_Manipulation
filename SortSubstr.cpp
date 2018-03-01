
#include <iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;
void DesSort(char[],int, int);

int main() {
	int num,N,M;
	string S;
	char str[10000];
	cin >> num;										
	for(int i=0;i<num;i++)
	{
	    cin>>S>>N>>M;
	    strcpy(str, S.c_str());
	    DesSort(str,N,M);
	    cout<<endl;
	}
	return 0;
}

void DesSort(char S[], int N, int M)
{
    int i,j,len;
    char sortS[10000];
    char max,temp;
    len=sizeof(S)/sizeof(*S);
    if(N>0)
    {
        for(i=0;i<N;i++)
        {
            sortS[i]=S[i];
            cout<<sortS[i];
        }
    }
    for(i=N;i<=M;i++)
    {   max=S[i];
        for(j=i+1;j<=M;j++)
        {
            if(max<S[j])
            {
                temp=max;
                max=S[j];
                S[j]=temp;
            }
        }
        sortS[i]=max;
        cout<<sortS[i];
        cout<<sortS[i];
    }
    if(S[i]!='\0')
    {
        for(i;S[i]!='\0';i++)
        {
            sortS[i]=S[i];
            cout<<sortS[i];
        }
    }
}
