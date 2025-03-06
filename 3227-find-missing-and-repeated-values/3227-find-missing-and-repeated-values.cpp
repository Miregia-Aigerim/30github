class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      int n = grid.size();
  vector<int> counts(n * n + 1, 0); // Initialize counts for numbers 1 to n^2

  int repeating = -1;
  int missing = -1;

  // Count the occurrences of each number in the grid
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      counts[grid[i][j]]++;
    }
  }

  // Find the repeating and missing numbers
  for (int i = 1; i <= n * n; ++i) {
    if (counts[i] == 2) {
      repeating = i;
    } else if (counts[i] == 0) {
      missing = i;
    }
  }

  return {repeating, missing};
    }
};