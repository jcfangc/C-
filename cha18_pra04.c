#include <stdio.h>

// 假设 f 是下列函数。如果在此之前 f 从来没有被调用过，那么 f(10) 的值是多少呢？如果在此之前 f 已经被调用过 5 次，那么 f(10) 的值又是多少呢？
int f(int i)
{
    static int j = 0;
    return i * j++;
}

// 前提：i 具有自动存取期限，块作用域，无链接的属性值。j 具有静态存储期限，块作用域，无链接的属性值。
// 推理 1，如果在此之前 f 从来没有被调用过，那么 f(10) 的值是多少：
// | 次数:01 | i:10 | j:00 | 返回值:00 |

// 推理 2，如果在此之前 f 已经被调用过 5 次，那么 f(10) 的值又是多少：
// | 次数:01 | i:xx | j:00 | 返回值:00   |
// | 次数:02 | i:xx | j:01 | 返回值:1*xx |
// | 次数:03 | i:xx | j:02 | 返回值:2*xx |
// | 次数:04 | i:xx | j:03 | 返回值:3*xx |
// | 次数:05 | i:xx | j:04 | 返回值:4*xx |
// | 次数:06 | i:10 | j:05 | 返回值:50   |

// 验证：
int main(void)
{
    for (int i = 1; i <= 6; i++) {
        if (i == 1 || i == 6) {
            printf("\n\t Test %d: %d", i, f(10));
        }
        else {
            f(10);
        }
    }

    getchar();
    return 0;
}

// 书作者答案链接：http://knking.com/books/c2/answers/c18.html