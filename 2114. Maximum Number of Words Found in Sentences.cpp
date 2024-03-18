class Solution {
public:
    // Function to find the maximum number of words in any given sentence.
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0; // This will hold the maximum number of words found
        // Iterate through each sentence in the vector of sentences
        for (auto& s : sentences) {
    // Count the number of spaces in the sentence, add 1 for the number of words
    // (assuming each word is separated by a single space and there is no trailing space)
            int cnt = 1 + count(s.begin(), s.end(), ' ');
            // Update maxWords if the current sentence's word count is greater
            ans = max(ans, cnt);
        }
         // Return the maximum word count found in any sentence
        return ans;
    }
};
