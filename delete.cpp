#include<bits/stdc++.h>
using namespace std;

char* deletestring(char *data,int pos, int n)
{
    char tmp[strlen(data)];
    if ((pos+n-1) <= strlen(data))
    {
        strcpy(tmp,&data[pos+n-1]);
        strcpy(&data[pos-1],tmp);
    }
    return data;
}

int main()
{
    char data[1000];
    int pos,n;
    cout<<"Please enter the string:"<<endl;
    scanf("%s",data);
    cout<<"Please enter the position and number of characters to delete:"<<endl;
    cin>>pos>>n;
    deletestring(data,pos,n);
    printf("%s",data);
    return 0;
}

