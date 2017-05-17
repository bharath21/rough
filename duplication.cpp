#include <bits/stdc++.h>

using namespace std;

string complement(string s){
    string t="";
    int i;
    for(i=0;i<s.length();i++){
        if(s[i]=='0')
            t+="1";
        else 
            t+="0";
        
    }
    return t;
}
string buildString(){
    int i;
    string s = "0";
    string t = "";
    for(i=0;i<9;i++){
        t = complement(s);
        s += t;
        //cout<<s<<endl;
    }
    return s;
}
int main() {
    int q;
    cin >> q;
    string s = buildString();
    
    for(int a0 = 0; a0 < q; a0++){
        int x;
        cin >> x;
        char result = s[x];
        cout << result << endl;
    }
    return 0;
}
