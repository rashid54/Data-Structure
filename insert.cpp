#include<bits/stdc++.h>
using namespace std;

char* INSERT(char *data,int pos,char *input)
{
    strcat(input,&data[pos]);
    strcpy(&data[pos],input);
    return data;
}

int main()
{
    char data[1000],input[1000];
    int pos;
    cout<<"Please enter a string:"<<endl;
    scanf("%s",data);
    cout<<"Please enter a string to insert:"<<endl;
    scanf("%s",input);
    cout<<endl<<"Please enter the position:"<<endl;
    cin>>pos;
    INSERT(data,pos,input);
    printf("\n%s",data);
    return 0;
}
