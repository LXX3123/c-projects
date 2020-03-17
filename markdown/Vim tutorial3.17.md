# **Vim tutorial**

Vim是一个类似于[Vi](https://baike.baidu.com/item/Vi/8987313)的著名的功能强大、高度可定制的文本编辑器

- 在mac终端输入`vimtutor`可以显示vim的使用指导

- wq和wq!的区别如下：

  - 文件所有者通过 wq! 可以保存只读文件 

  - !是强制执行,如果不带!碰上只读文件，会给提示会是只读文件，带了！忽略只读强制写入

- 输入 <ESC>  :q!  <回车> 放弃所有改动。

​    输入 <ESC>  :wq  <回车> 保存改动。 

- i  输入欲插入文本  <ESC>       在光标前插入文本

  A  输入欲添加文本  <ESC>       光标自动跳到行尾，在行尾添加文本 (注意A是大写)

- d   - 删除操作符。

    motion - 操作符的操作对象(在下面列出)。

  

   一个简短的动作列表：

    w - 从当前光标当前位置直到下一个单词起始处，不包括它的第一个字符。

    e - 从当前光标当前位置直到单词末尾，包括最后一个字符。

    $ - 从当前光标当前位置直到当前行末。

  

   因此输入 de 会从当前光标位置删除到单词末尾。

  **vim 内容较多，今天学习了以上内容，后期将所有不太熟的vim操作合并**

# **预备课练习2**

## **shell脚本文件**

```c
#!/bin/bash
#预备课练习2
touch ex01.c ex02.c ex03.c
mkdir example
mv ex01.c example/example.c
mkdir practice
mv ex02.c practice/ex02.c
rm ex03.c
touch README.md
echo "## example/example.c" > README.md
echo "判断是奇数还是偶数" >> README.md
echo "## practice/practice.c" >> README.md
echo "比较两个数大小" >> README.md
tree
git add -f ../practice2
git commit -m "练习2"
git push
```

