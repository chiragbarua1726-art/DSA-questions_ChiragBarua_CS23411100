class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVowels = 0;
        int count = 0;
        int left = 0, right = k - 1;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u')
                maxVowels++;
        }
        count = maxVowels;
        while (right < s.length() - 1) {
            if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' ||s[left] == 'u')
                count--;
            if (s[right + 1] == 'a' || s[right + 1] == 'e' || s[right + 1] == 'i' ||
                s[right + 1] == 'o' || s[right + 1] == 'u')
                count++;
            maxVowels = max(count, maxVowels);
            left++;
            right++;
        }

        return maxVowels;
    }
};
