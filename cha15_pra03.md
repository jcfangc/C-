### 我们已经知道，如果文件是我们自己编写的，那么用 #include <文件> 代替 #include "文件" 是否有什么问题？

参考答案：<br>
#include <文件> 会先搜寻系统头文件所在的目录（或多个目录）。#include "文件" 先搜寻当前目录，然后搜寻系统头文件所在目录（或多个目录）。通常可以改变搜寻头文件的位置，这种改变经常利用诸如 -I*路径* 这样的命令行选项来实现。以上这段话是书本 15.2 中的原话，从中我们可以得知，#include <文件> 的搜索范围是 #include "文件" 的子集，即 #include <文件> 搜索过的范围，#include "文件" 也会搜索。但是反之就不成立，进而 #include <文件> 就无法搜索到自己编写的头文件（除非放在系统头文件的目录里），从而出错。