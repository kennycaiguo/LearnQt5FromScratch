# 【QXlsx】 - Qt 处理Execl文件开源库的使用

## 1. 简介

`QXlsx` 是一个用于在 Qt 框架中处理 Excel 文件的开源库。它允许开发者读取、写入和修改 Excel 工作簿(.xlsx 文件格式)。该库是用 C++ 编写的，并且完全独立于 Excel 应用程序本身，不需要安装 Microsoft Excel 即可操作 Excel 文件。

## 2. QXlsx 的主要功能

1. **读取 Excel 文件**：
   - 可以读取 Excel 文件中的数据，包括单元格的内容、样式等。
   - 支持读取工作表、单元格范围、单个单元格等。
2. **创建和修改 Excel 文件**：
   - 可以创建新的 Excel 文件并向其中添加数据。
   - 可以修改现有的 Excel 文件，包括添加新的工作表、修改单元格内容等。
3. **支持丰富的 Excel 特性**：
   - 支持单元格合并、样式设置（如字体、颜色、边框等）。
   - 支持公式计算、数据验证、超链接等功能。
4. **跨平台**：
   - 由于基于 Qt 框架，可以在多个平台（如 Windows、Linux、macOS）上使用。

## 3. 使用

使用QXlsx的方式常见的有两种，一种是直接加载进项目里面，另一种方式是打包成库。 打包成库的使用方式，参考另一篇文章：--------------

### 3.1  下载项目源码

Github地址：[github.com/QtExcel/QXl…](https://link.juejin.cn?target=https%3A%2F%2Fgithub.com%2FQtExcel%2FQXlsx)

使用`git clone https://github.com/QtExcel/QXlsx.git`将项目下载到本地，

下载到本地后，主要使用**QXlsx文件夹**。

![image.png](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/fa4caefd0e3f4c79a493663f3eae80b0~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784463170&x-signature=4cZ0lyxf0YUH5%2BPFmB8Z8e3JeII%3D)

### 3.2 新建项目

使用Qt Creator 新创建一个项目，进行测试。

复制整个QXlsx文件夹到新项目中。

![recording.gif](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/60388797bd864c929db7fe1c2e5e7381~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784463170&x-signature=LHlajHhdOuotNhOYr0H%2FeRncwX8%3D)

![image.png](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/1c51bd91a1674309a5781c90e5e745fb~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784463170&x-signature=xC4Nyo0wWdlWD%2BPTp%2FzWK4B7%2FAQ%3D)

然后再项目的pro文件中添加如下配置信息：

```cpp
cpp 代码解读复制代码include($$PWD/QXlsx/QXlsx.pri)             # QXlsx源代码
INCLUDEPATH += $$PWD/QXlsx
```

添加完成后，会自动将QXlxs文件夹显示在项目中。

![image.png](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/fef167eafcc343c28140e0e58024b67c~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784463170&x-signature=1C7OZrsaKaSgNX2YKzf%2BoF0CvCc%3D)

这样，安装就完成了，就可以在Qt 项目中使用QXlsx处理execle文件了。

### 3.3 使用示例

使用Qxslx创建一个Execl文件，向其写入数据。

```cpp
cpp 代码解读复制代码#include "xlsxdocument.h"
QXlsx::Document xlsx;
xlsx.write("A1", "Hello, QXlsx!"); // 在单元格 A1 中写入数据
xlsx.saveAs("Example.xlsx"); // 保存为 Example.xlsx 文件
```

这样，就会在项目根路径下创建一个Example.xlsx文件，并向A1单元格写入数据。

![image.png](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/cce7138efbcf4828bf00e4661db82936~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784463170&x-signature=x3cPTSLFnQuiSyhZrTjP8jR9ekw%3D)

> 如果没有在项目路径下，可能是你开启了影子构建，会在上级目录build....目录中生成。

![image.png](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/3c5f074d241f4107a6dc90a60c406550~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784463170&x-signature=duK%2ByH84ktrDIL7YswDJ0eGdDyQ%3D) 不想生成此目录的话，在Qt Creator中取消影子构建即可。

![image.png](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/9f35b8a1aef9410faee2b459e747b5a6~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784463170&x-signature=jPYIXVj%2FEX1hbj68QGT1NXb%2FuQM%3D)

# Qxlxs】打包成库供项目使用

2024-07-14525阅读1分钟

专栏： 

QT

## 1. 获取源码

Github地址：[github.com/QtExcel/QXl…](https://link.juejin.cn/?target=https%3A%2F%2Fgithub.com%2FQtExcel%2FQXlsx)

使用`git clone https://github.com/QtExcel/QXlsx.git`将项目下载到本地，

下载到本地后，主要使用**QXlsx文件夹**。

![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/8d222b061fa74a9d840a39a9184c484a~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=3PkEz1UfvgmQRZyX1bptuBdWgNM%3D)

## 2. 打包成库

将Qxlxs打包成库，供项目使用。

双击打开QXlsx文件夹下的**QXlsx.por**文件。配置好项目编译环境。 ![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/998e7e19f1394f78b3252ac737154b1a~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=0hVmXOp5zG5nZCGsZok4MAHcDLs%3D)

取消影子构建。(可选) ![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/deadbc485f7b412da3f1662696fd0059~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=cK0e3n%2BNXspI9eUvtS5nKqMo5hM%3D)

修改pro文件如下：

```cpp
DESTDIR = $$PWD/lib # 生成文件路径
win32:CONFIG(release, debug|release): TARGET = QXlsx        # 生成release版本静态库名称
else:win32:CONFIG(debug, debug|release): TARGET = QXlsx_debug    # 生成debug版本静态库名称

TEMPLATE = lib
CONFIG += dll
```

![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/635c5d631f924a2a8002669c77491310~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=1wnnO5oQkaL%2FCqQvjL0Q%2Fybw3Ps%3D)

然后再Debug模式和Release模式分别构建一遍即可。 构建完成后，再你的项目下会生成lib文件夹，里面会包含动静态库文件。 ![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/32ad1dbec7474db3bdd5e1753ee839c8~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=DXlTKGN18tclO3UOBMLpwSMwrc0%3D)

## 3. 使用库

将生成的lib文件和`QXlsx`文件夹下的`header`文件复制到使用此库的项目中。 ![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/4b65f43482fb494aa692e3dab1a7d718~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=dGNWp4F1U%2BDDDaaAkyy25ljiVSk%3D) 复制到项目中后，使用库最重要的就是header下的头文件和dll库文件。 ![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/f88c17871a8f4904bd3db86b60bab5ad~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=AqdzyqOee3fMZGLb692abNxFlEs%3D) 然后配置pro文件。

```cpp
INCLUDEPATH += $$PWD/header

LIBS += -L$$PWD/lib -lQXlsx
```

![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/fb061e1c06c240b7bd5334902b75f254~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=rsAVnvoLJQfRjptge0j5FNIOgY8%3D)

这样，就能项目中使用QXlsx库了。

## 4. 使用示例

```cpp
#include "mainwindow.h"

#include "ui_mainwindow.h"

#include "xlsxdocument.h"  //QXlsx头文件


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QXlsx::Document xlsx;  // 创建一个excel
    xlsx.write("A1", "Hello, QXlsx!");// 向A1单元格写入Hello, QXlsx!
    xlsx.saveAs("Example.xlsx"); //保存到./Example.xlsx
}

MainWindow::~MainWindow()
{
    delete ui;
}
```

运行程序后，就能看到生成的Example.xlsx文件了。 ![在这里插入图片描述](https://p6-xtjj-sign.byteimg.com/tos-cn-i-73owjymdk6/7357feeba67c49f9876dd1ddc8eecef2~tplv-73owjymdk6-jj-mark-v1:0:0:0:0:5o6Y6YeR5oqA5pyv56S-5Yy6IEAgY3Bw5LiL562J6ams:q75.awebp?rk3s=f64ab15b&x-expires=1784467151&x-signature=NkqlWZXpEmCMYW6y3LR88V6DrP4%3D)

