#include<iostream>
#include<string>
using namespace std;

bool isValidString(string s){
    if(s.size()<=1 || s[0] == '0')
        return false;
    return true;
}

long int isBeautiful(string s){
    if(!isValidString)
        return 0;
    
    for(int noDigits=1;noDigits<=s.length()/2;++noDigits){
        string substring = s.substr(0,noDigits);
        long int nextDigit = stol(substring);
        long int ret = nextDigit;

        while(substring.size() < s.size()){
            substring += to_string(++nextDigit); 
        }

        if(substring.size() == s.size() && substring == s){
            return ret;
        }
    }
    
    return 0;
}

int main(){
    int no_of_strings;
    cin>>no_of_strings;
    for(int i=0;i<no_of_strings;++i){
        string s;
        cin>>s;
        long int ret = isBeautiful(s);
        if(ret == 0)
            cout<<"NO\n";
        else
            cout<<"YES "<<ret<<"\n";
    }
}