 bool isWordExist(vector<vector<char>>& mat, string& word) {
        int rows = mat.size(), cols = mat[0].size();

        function<bool(int, int, int)> dfs = [&](int i, int j, int index) {
            if (index == word.size()) return true;
            if (i < 0 || i >= rows || j < 0 || j >= cols || mat[i][j] != word[index])
                return false;

            char temp = mat[i][j];
            mat[i][j] = '#';

            bool found = dfs(i + 1, j, index + 1) || dfs(i - 1, j, index + 1) ||
                         dfs(i, j + 1, index + 1) || dfs(i, j - 1, index + 1);

            mat[i][j] = temp;
            return found;
        };

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (mat[i][j] ==word[0] && dfs(i, j, 0))
                    return true;

        return false;
    }
};
