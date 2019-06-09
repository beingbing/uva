#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'winner' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY andrea
 *  2. INTEGER_ARRAY maria
 *  3. STRING s
 */

string winner(vector<int> andrea, vector<int> maria, string s) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string andrea_count_temp;
    getline(cin, andrea_count_temp);

    int andrea_count = stoi(ltrim(rtrim(andrea_count_temp)));

    vector<int> andrea(andrea_count);

    for (int i = 0; i < andrea_count; i++) {
        string andrea_item_temp;
        getline(cin, andrea_item_temp);

        int andrea_item = stoi(ltrim(rtrim(andrea_item_temp)));

        andrea[i] = andrea_item;
    }

    string maria_count_temp;
    getline(cin, maria_count_temp);

    int maria_count = stoi(ltrim(rtrim(maria_count_temp)));

    vector<int> maria(maria_count);

    for (int i = 0; i < maria_count; i++) {
        string maria_item_temp;
        getline(cin, maria_item_temp);

        int maria_item = stoi(ltrim(rtrim(maria_item_temp)));

        maria[i] = maria_item;
    }

    string s;
    getline(cin, s);

    string result = winner(andrea, maria, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
