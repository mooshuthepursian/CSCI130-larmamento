/*
Kattis - Hissing Microphone Problem

By: Leanza Armamento
Date: 4/16/24

Hissing Microphone Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read string
2. find "ss" substring in the string
    - if found, print "hiss"
    - otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve();
}

string answer(const string &line) {
    // FIXME3
    // implment algorithm step 2
    // return "hiss" if ss is found in line
    // otherwise, return "no hiss"
    for (size_t i = 0; i < line.size() - 1; ++i) {
        if (line[i] == 's' && line[i + 1] == 's') {
            return "hiss";
        return "hiss";
        }}
        return "no hiss";
    return 0;
}

// unit testing answer()
void testAnswer() {
    // FIXME4
    // write at least two test cases to test answer()
    assert(answer("hiss") == "hiss");
    assert(answer("no hiss") == "no hiss");
    cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve() {
    string line;
    // string consists of only lowercase letters (no spaces) upto 30 chars
    // FIXME5
    // read string into line
    cin >> line;
    cout << answer(line) << endl;
}