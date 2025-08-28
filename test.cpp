#include "log.h"
#include <tuple>
#include <vector>

#define INFO_GRP_NORMAL 1
#define INFO_GRP_IMPORTANT 2

int main(int, char **) {
    logh::log(stdout, "hello world: ", 1, ", ", 2);
    INFO("info message");
    WARN("warn message");
    ERROR("error message");
    TODO("todo message");

    // group info
    INFOG(Default, "info group message");
    INFOG(Extra, "info group message");
    INFOG(Inactive, "this message should not be displayed!");

    // print variables
    int i = 8;
    INFO(i);
    ERROR("i = ", i);
    DBG("debug message");
    DBG(i);
    std::vector<std::pair<int, int>> v = {{1, 1}, {2, 2}, {3, 3}};
    DBG(v);
    logh::log(stdout, "hello world: ", 1, ", ", 2, ", ", v);
    return 0;
}
