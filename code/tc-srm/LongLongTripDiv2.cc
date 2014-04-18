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

class LongLongTripDiv2 {
 public:
  string isAble(long long D, int T, int B) {
      long long bt = (long long) B * (long long) T;
      if(bt >= D && ((bt - D) % (B - 1) == 0) &&
         ((bt - D) / (B - 1)) <= T)
          return "Possible";
      return "Impossible";
  }

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { long long Arg0 = 10LL; int Arg1 = 6; int Arg2 = 3; string Arg3 = "Possible"; verify_case(0, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_1() { long long Arg0 = 10LL; int Arg1 = 5; int Arg2 = 3; string Arg3 = "Impossible"; verify_case(1, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_2() { long long Arg0 = 50LL; int Arg1 = 100; int Arg2 = 2; string Arg3 = "Impossible"; verify_case(2, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_3() { long long Arg0 = 120LL; int Arg1 = 10; int Arg2 = 11; string Arg3 = "Impossible"; verify_case(3, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_4() { long long Arg0 = 10LL; int Arg1 = 10; int Arg2 = 9999; string Arg3 = "Possible"; verify_case(4, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_5() { long long Arg0 = 1000LL; int Arg1 = 100; int Arg2 = 10; string Arg3 = "Possible"; verify_case(5, Arg3, isAble(Arg0, Arg1, Arg2)); }
	void test_case_6() { long long Arg0 = 1000010000100001LL; int Arg1 = 1100011; int Arg2 = 1000000000; string Arg3 = "Possible"; verify_case(6, Arg3, isAble(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
  LongLongTripDiv2 ___test;
  ___test.run_test(-1);
  return 0;
}
// END CUT HERE
