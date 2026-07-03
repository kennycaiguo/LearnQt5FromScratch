是的，Qt 6 已经移除了 `QRegExp` 类。官方用现代化的 **`QRegularExpression`** 替代了它。`QRegularExpression` 的速度更快，语法也更符合标准。 [[1](https://doc.qt.io/qt-6/qtcore-changes-qt6.html), [2](https://github.com/Komet/MediaElch/issues/1086), [3](https://blog.csdn.net/weixin_33462927/article/details/161405130), [4](https://blog.csdn.net/MrHHHHHH/article/details/134158660)]

为了帮助你更好地理解，以下是核心的变化和使用方法：

1. 发生了什么变化？

旧的 `QRegExp` 在 Qt 6 的核心 API 中被彻底移除。
如果你必须在旧代码中使用它，需要引入 `Qt5Compat` 模块。 [[1](https://stackoverflow.com/questions/70865734/qregexp-no-such-file-or-direcory), [2](https://doc.qt.io/qt-6/qtcore-changes-qt6.html)]

- **Qt 5 头文件**：`#include <QRegExp>`
- **Qt 6 兼容头文件**：`#include <QRegExp>`（需要在 `.pro` 中加入 `QT += core5compat`）
- 如何替换为新类 `QRegularExpression`？

**字符串匹配示例：**

- **Qt 5 代码：**
  `QRegExp rx("(\\d+)");`
  `bool match = rx.exactMatch("123");`
- **Qt 6 代码：**
  `QRegularExpression rx("^(\\d+)$");`
  `QRegularExpressionMatch match = rx.match("123");`
  `bool isValid = match.hasMatch();`

**通配符转换示例：**

- **Qt 5 代码：**
  `QRegExp rx("*.txt", Qt::Wildcard);`
- **Qt 6 代码：**
  `QRegularExpression rx = QRegularExpression::fromWildcard("*.txt");`
- 校验器（Validator）的变化

如果你在输入框（如 `QLineEdit`）中使用了校验器，类名也发生了更改： [[1](https://forum.qt.io/topic/123653/why-is-there-no-description-of-qregexpvalidator-in-qt6-0-1-is-it-abandoned)]

- **Qt 5：** `QRegExpValidator`
- **Qt 6：** `QRegularExpressionValidator`