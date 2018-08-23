class Solution {
public:
  vector<string> subdomainVisits(vector<string>& cpdomains) {
    unordered_map<string, int> c;
    for (auto cd : cpdomains) {
      int i = cd.find(" ");//find the position of space
      int n = stoi(cd.substr (0, i));//generate a new string stat starts at cd[0] with i length(it should be the count num)
      string s = cd.substr (i + 1, cd.size () - i - 1);//get a new string that starts follow the the space with remain string
      // and it should be the site name
      for (int i = 0; i < s.size(); ++i) if (s[i] == '.') c[s.substr(i + 1, s.size () - i)] += n;
      //go through the site name, and increase the visiting num if meet a '.', exact the remain string as a new site name for this loop
       c[s] += n;//the whole string  site name
    }
    vector<string> res;
    for (auto k : c) res.push_back (to_string(k.second) + " " + k.first);//k.second->c.int; k.first->c.string
    return res; 
  }
};
