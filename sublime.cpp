#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <fstream>
#include <sys/stat.h>

using namespace std;

// TODO: Add a batch testing feature

inline bool if_file_exists(const string &u) {
  struct stat buffer;
  return (stat(u.c_str(), &buffer) == false);
}

int main(int argc, char* argv[]) {
  assert(argc == 1);
  if (!if_file_exists("a.exe")) system("start cmd /C \"echo No executable. Compile First. && pause\"");
  else {
    string cmd = "start cmd /C \"a < input.txt && pause\"";
    system(cmd.c_str());
  }
  return 0;
}