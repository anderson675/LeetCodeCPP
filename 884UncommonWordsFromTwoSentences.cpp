class Solution {
public:
  vector<string> uncommonFromSentences(string A, string B) {
    unordered_map<string, int> a, b;
    vector<string> res;
    string temp;
    for(int i=0;i<=A.size();i++) {
      if(i==A.size()||A[i]==' ') {
        a[temp]++;
        temp.clear();
      }
      else temp.append(1, A[i]);
    }
    for(int i=0;i<=B.size();i++) {
      if(i==B.size()||B[i]==' ') {
        b[temp]++;
        temp.clear();
      }
      else temp.append(1, B[i]);
    }
    for(auto i : a) {
      if(b.find(i.first)==b.end()&&i.second==1) res.push_back(i.first);
    }
    for(auto i : b) {
      if(a.find(i.first)==a.end()&&i.second==1) res.push_back(i.first);
    }
    return res;
  }
};
