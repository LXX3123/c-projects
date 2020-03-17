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
