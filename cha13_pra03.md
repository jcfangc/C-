### 假设按如下方式调用 scanf 函数：<br> scanf("%d%s%d", &i, s, &j); <br> 如果用户输入12abc34  56def78，那么调用后 i, s, 和 j的值分别是多少？（假如 i 和 j 是 int 类型变量，s是字符数组。）

<br>

参考答案：<br>
i 的值是 12。<br>
s 在长度合适的情况下，包含的字符应该是 ”abc34“。<br>
j 的值是 56。

<br>

大致过程应该是这样的：首先 scanf 扫描到了 1，12， 12a，并判断出 12a 不是转换说明符 %d 希望的整型，于是将 12 录入 i 中，并把 a 放回原处。于是 scanf 的下一次处理就从 a 开始，并一直扫描到 abc34（空格）。scanf 在遇到空白字符（空格）后就把该字符放回原处，将 ”abc34“ 录入字符数组 s 中。最后一次调用 scanf，scanf 跳过了空白字符然后开始读取 5，56，56d。结果和第一次调用类似，56 被录入 j 中。