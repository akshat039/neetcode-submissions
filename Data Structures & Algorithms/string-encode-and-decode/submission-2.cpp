class Solution {
public:
    vector<int> len;
    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            ans += strs[i];
            len.push_back(strs[i].length());
        }
        return ans;
    }

    vector<string> decode(string s) {
        // stringstream ss(s);
        // string word;
        // vector<string> result;
        // while(getline(ss, word,'')){
        //     result.push_back(word);
        // }
        vector<string> result;
        int k = 0;
    for(int j=0;j<len.size();j++){
        string word = "";
        for(int i =0;i<len[j];i++){
            word += s[i+k];
        }
        k += len[j];
        result.push_back(word);
    }
        return result;
    }
};
