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

To toggle groups, add the ids in the `INFO_GRP` macro.

```cpp
#define INFO_GRPS 0, 2

INFO_GRP("group 0 is displayed", 0)
INFO_GRP("group 1 is not displayed", 1)
INFO_GRP("group 2 is displayed", 2)
```

## Log levels

Comment `#define LOG` to deactivate the logs or comment `#define LOG_<lvl>` to
deactivate a specific level of log.
