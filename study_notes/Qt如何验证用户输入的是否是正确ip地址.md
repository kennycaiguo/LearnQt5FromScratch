在 Qt 中验证用户输入的 IP 地址，最简单的方法是使用内置的 `QHostAddress` 类进行验证，或者配合 `QRegularExpressionValidator` 使用正则表达式来限制输入。 [[1](https://developer.aliyun.com/article/1463315), [2](https://blog.csdn.net/friendbaby/article/details/7994540)]

你可以使用以下三种最常用的方法：

方法一：使用 QHostAddress 直接验证 (最推荐)

这是最简单、最安全的验证方式。`QHostAddress` 自带解析功能，如果 IP 地址格式正确，它会返回 `true`。

Qt 找不到 `QHostAddress` 头文件，通常是因为没有在项目配置文件中启用网络模块。 [[1](https://blog.csdn.net/qq_21530185/article/details/147167618), [2](https://stackoverflow.com/questions/28917146/qt-qhostaddress-no-such-file-or-directory)]

以下是具体的解决步骤：

1. **添加网络模块**
   - 如果你使用的是 **qmake**（即 `.pro` 文件），打开文件并在末尾添加：
     `QT += network`
   - 如果你使用的是 **CMake**（即 `CMakeLists.txt` 文件），确保在 `find_package` 中包含 `Network`，并在 `target_link_libraries` 中添加 `Qt6::Network`（或 `Qt5::Network`）

cpp

```
#include <QHostAddress>
#include <QString>
#include <QDebug>

bool checkIP(const QString &ipString) {
    QHostAddress address;
    return address.setAddress(ipString);
}
```

 

方法二：使用正则表达式 (实时限制用户输入)

如果你希望用户在输入过程中就受到限制（例如只能输入数字和小数点），可以使用 `QRegularExpressionValidator` 和正则表达式。 [[1](https://blog.csdn.net/friendbaby/article/details/7994540)]

cpp

```
#include <QLineEdit>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

// 限制 QLineEdit 只允许输入合法的 IPv4 地址
void setupIPValidation(QLineEdit *lineEdit) {
    // 匹配 0-255 的正则表达式
    QString ipRange = "(?:[0-1]?[0-9]{1,2}|2[0-4][0-9]|25[0-5])";
    QRegularExpression ipRegex("^" + ipRange + "\\." + ipRange + "\\." + ipRange + "\\." + ipRange + "$");
    
    QRegularExpressionValidator *validator = new QRegularExpressionValidator(ipRegex, lineEdit);
    lineEdit->setValidator(validator);
}
```

 

方法三：使用 Qt 内置的输入掩码 (最简单)

对于专门的 IP 地址输入，Qt 的 `QLineEdit` 提供了一个内置的输入模板。 [[1](https://qtguide.ustclug.org/ch05-02.htm), [2](https://blog.csdn.net/friendbaby/article/details/7994540)]

cpp

```
#include <QLineEdit>

void setupIPMask(QLineEdit *lineEdit) {
    // 000.000.000.000 表示每段最大输入3位数字
    lineEdit->setInputMask("000.000.000.000;_");
}
```

 