class Solution {
 public:
  int hIndex(vector<int>& citations) {
    const int n = citations.size();

    std::ranges::sort(citations);

    for (int i = 0; i < n; ++i)
      if (citations[i] >= n - i)
        return n - i;

    return 0;
  }
};
