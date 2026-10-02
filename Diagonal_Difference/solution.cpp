#include <vector>
#include <cmath>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int primary = 0, secondary = 0, n = arr.size();
    for (int i = 0; i < n; i++) {
        primary += arr[i][i];
        secondary += arr[i][n - 1 - i];
    }
    return abs(primary - secondary);
}
