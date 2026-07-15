# 开发过程



# 避坑指南

## 1.在qt6里面QByteArray::append()不能够直接添加一个QString对象，解决办法

```
cppQByteArray byteArray;
QString myString = "Hello World";

// Option 1: Convert to UTF-8 (Most common and recommended)
byteArray.append(myString.toUtf8());

// Option 2: Convert to Latin-1 (Best if text is strictly ASCII/Latin-1 characters)
byteArray.append(myString.toLatin1());

// Option 3: Convert to local system 8-bit encoding
byteArray.append(myString.toLocal8Bit());
```

## 2.在qt6中qrand和qsrand函数已经被移除



# 参考源码：

## 参考源码1： https://github.com/fuxiai/FiveChessGame

## 参考源码2:https://github.com/i-Orangeade/FiveChessGames/tree/master











