class Solution {
 public:
  int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
    int ans = 0;

    std::ranges::sort(players);
    std::ranges::sort(trainers);

    for (int i = 0; i < trainers.size(); ++i)
      if (players[ans] <= trainers[i] && ++ans == players.size())
        return ans;

    return ans;
  }
};
