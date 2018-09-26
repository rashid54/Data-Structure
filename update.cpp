#include<bits/stdc++.h>
using namespace std;

char* updatestr(char *data,char *old,char *updated)
{
    char * tmp;
    int length=strlen(old);
    tmp=strstr(data,old);
    strcat(updated,tmp+length);
    strcpy(tmp,updated);
    return data;
}

int main()
{
    char data[1000],old[1000],updated[1000];
    cout<<"Please enter a string:"<<endl;
    scanf("%s",data);
    cout<<"Please enter a string to be updated:"<<endl;
    scanf("%s",old);
    cout<<endl<<"Please enter a string to update with:"<<endl;
    scanf("%s",updated);
    updatestr(data,old,updated);
    printf("\n%s",data);
    getchar();
    getchar();
    return 0;
}

