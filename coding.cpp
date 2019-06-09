#include <bits/stdc++>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



// Complete the hasVowels function below.
vector<int> hasVowels(vector<string> strArr, vector<string> query) {
    bool truth[strArr.size()];
    vector<int> result;
    for (int i{0}; i<strArr.size(); i++) {
        string element = strArr[i];
        if ((element[0] == 'a' || element[0] == 'e' || element[0] == 'i' ||
             element[0] == 'o' || element[0] == 'u') &&
            (element[element.length() - 1] == 'a' ||
             element[element.length() - 1] == 'e' ||
             element[element.length() - 1] == 'i' ||
             element[element.length() - 1] == 'o' ||
             element[element.length() - 1] == 'u')) {
                 truth[i] = 1;
                //  cout<<truth[i];
             } else {
                 truth[i] = 0;
                //  cout<<truth[i];
             }
    }

    for (int i{0}; i<query.size(); i++) {
        string element = query[i];
        int lowerLimit = int(element[0]);
        int upperLimit = int(element[2]);
        int count = 0;
        for (int j{lowerLimit-1}; j<upperLimit; j++) {
            if (truth[j] == 1) {
                count++;
            }
        }
        result.push_back(count);
    }

    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string strArr_count_temp;
    getline(cin, strArr_count_temp);

    int strArr_count = stoi(ltrim(rtrim(strArr_count_temp)));

    vector<string> strArr(strArr_count);

    for (int i = 0; i < strArr_count; i++) {
        string strArr_item;
        getline(cin, strArr_item);

        strArr[i] = strArr_item;
    }

    string query_count_temp;
    getline(cin, query_count_temp);

    int query_count = stoi(ltrim(rtrim(query_count_temp)));

    vector<string> query(query_count);

    for (int i = 0; i < query_count; i++) {
        string query_item;
        getline(cin, query_item);

        query[i] = query_item;
    }

    vector<int> res = hasVowels(strArr, query);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
