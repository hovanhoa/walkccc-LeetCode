class Solution {
 public:
  int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    int ans = 0;

    std::ranges::sort(seats);
    std::ranges::sort(students);

    for (int i = 0; i < seats.size(); ++i)
      ans += abs(seats[i] - students[i]);

    return ans;
  }
};
