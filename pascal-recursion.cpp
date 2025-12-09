#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    // base case
    if (numRows == 0) {
        return vector<vector<int>>{{}}; 
    }
    if (numRows == 1) {
        return vector<vector<int>>{{1}};
    }

    // recursive case
    vector<int> newRow{1};

    vector<vector<int>> result = generate(numRows - 1);

    vector<int> lastRow = result[result.size()-1];
    for (int i = 0; i < lastRow.size()-1; ++i) {
        newRow.push_back(lastRow[i] + lastRow[i+1]);
    }

    newRow.push_back(1);
    result.push_back(newRow);

    return result;
}