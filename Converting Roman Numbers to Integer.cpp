//Username - Harman1010
//Aim - To convert roman numbers to integers.....for example - "XII" -> 12
//Date - 18-10-2024


int romanToInt(string s) {
    int sum=0;
    char ch[7]={'I','V','X','L','C','D','M'};
    int arr[7]={1,5,10,50,100,500,1000};
    unordered_map<char,int> m;
    for(int i=0;i<7;i++) {
        m[ch[i]]=arr[i];
    }
    for(int i=0;i<s.length()-1;i++) {
        if(m[s[i]] >= m[s[i+1]]) {
            sum+=m[s[i]];
        }
        else {
            sum-=m[s[i]];
        }
    }
    sum+=m[s[s.length()-1]];
    return sum;
}
