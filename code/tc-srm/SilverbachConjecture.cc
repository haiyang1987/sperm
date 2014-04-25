/* coding:utf-8
 * Copyright (C) dirlt
 */
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

class SilverbachConjecture {
 public:
    char cache[2000];
    bool iscomp(int n) {
        bool ret = false;
        if (cache[n] != -1) return cache[n];
        for(int i = 2; i * i <= n ; i++) {
            if ((n % i ) == 0) {
                ret = true;
                break;
            }
        }
        cache[n] = ret;
        return ret;
    }
  vector <int> solve(int n) {
      memset(cache, 0xff, sizeof(cache));
      vector<int> ret;
      for (int i = 3; i <= (n - i); i++) {
          if(iscomp(i) && iscomp(n-i)) {
              ret.push_back(i);
              ret.push_back(n-i);
              break;
          }
      }
      return ret;
  }

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <int> &Expected, const vector <int> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { int Arg0 = 20; int Arr1[] = {8, 12 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, solve(Arg0)); }
	void test_case_1() { int Arg0 = 30; int Arr1[] = {15, 15 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, solve(Arg0)); }
	void test_case_2() { int Arg0 = 999; int Arr1[] = {699, 300 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, solve(Arg0)); }
	void test_case_3() { int Arg0 = 45; int Arr1[] = {15, 30 }; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, solve(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  SilverbachConjecture ___test;
  ___test.run_test(-1);
  return 0;
}
// END CUT HERE
