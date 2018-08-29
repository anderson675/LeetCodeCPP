class Solution {
public:
  string toGoatLatin(string S) {
    stringstream iss(S), oss;
    string vowels("aeiouAEIOU"), word, a;
    while (iss >> word) {
      a.push_back('a');
      if (vowels.find_first_of(word[0]) != string::npos) oss << ' ' << word << "ma" << a;// begin with a vowel
      else oss << ' ' << word.substr(1) << word[0] << "ma" << a; //begin with consonent
    }
    return oss.str().substr(1);

  }
};
