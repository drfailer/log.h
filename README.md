# log.h

Basic collection of macros to create debug logs in C++ programs.

## Usage

```cpp
INFO("info message")
WARN("warn message")
ERROR("error message")
TODO("todo message")

// group info
INFO_GRP("info group message", 1)
```

## Info groups

To toggle groups, add the ids in the `INFO_GRP` macro. 0 is the id of the global
group (`INFO` macro).

```cpp
#define INFO_GRPS 0, 1, 3

INFO_GRP("group 1 is displayed", 1)
INFO_GRP("group 2 is not displayed", 2)
INFO_GRP("group 3 is displayed", 3)
```

## Log levels

Comment `#define LOG` to deactivate the logs or comment `#define LOG_<lvl>` to
deactivate a specific level of log.
