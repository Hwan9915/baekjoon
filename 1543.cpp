#include<iostream>
#include<string>
using namespace std;

int main()
{
    string document,word;
    int words=0;
    cin>>document;
    cin>>word;
    //입력완료

    int len_docu,len_word;
    len_docu=document.length();
    len_word=word.length();
    for(int i=0;i<len_docu;i++)
    {
        if(i+len_word-1>=len_docu) break;
        bool check=true;
        for(int j=0;j<len_word-1;i++)
        {
            if(document[i]==word[j])
            {
                check=true;
            }
            else 
            {
                check=false;
                break;
            }
        }
        if(check==true) words++;
    }
    cout<<words;
}