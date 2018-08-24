class Solution {
public:
  vector<string> findWords(vector<string>& words) {
    int hashtable[] = { 1, 2, 2, 1, 0, 1, 1, 1, 0, 1, 1, 1, 2, 2, 0, 0, 0, 0, 1, 0, 0, 2, 0, 2, 0, 2 };//indicate the alphabet list to the map of keyboard;

    vector<string> result;
    bool sameRow;
    for(int i = 0; i < words.size();i++){
      string word = words[i]; //extract the word;

      int temp = word[0];
      if(temp<='Z'&&temp>='A') temp += 32; //convert to lowercase
      int index = hashtable[temp - 'a'];//determine the which row the character belongs.

        sameRow = false;
        for(int j = 0; j < word.length(); j++){
          temp = word[j];
          if(temp<='Z'&&temp>='A') temp+=32;
          if(hashtable[temp-'a'] != index) break;
          if(j == word.length() - 1) sameRow = true;//set the flag if all the characters in same row
        }
        if(sameRow) result.push_back(words[i]);
    }
    return result;

  }
};
