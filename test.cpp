#include "log.h"
#include <vector>
#include <tuple>

#define INFO_GRP_NORMAL 1
#define INFO_GRP_IMPORTANT 2

int main(int, char **) {
  INFO("info message")
  WARN("warn message")
  ERROR("error message")
  TODO("todo message")

  // group info
  INFO_GRP("info group message", INFO_GRP_NORMAL)
  INFO_GRP("info group message", INFO_GRP_IMPORTANT)

  // print variables
  int i = 8;
  INFO(i);
  ERROR("i = " << i);
  DBG("debug message")
  DBG(i)
#ifdef DBG_CONTAINERS
  std::vector<std::pair<int, int>> v = {{1, 1}, {2, 2}, {3, 3}};
  DBG(v)
#endif
  return 0;
}
