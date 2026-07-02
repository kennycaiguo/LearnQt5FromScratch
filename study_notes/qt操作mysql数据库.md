## 1.创建一个qt widget项目，起名qt_op_mysql，继承QWidget

![image-20260702084244918](./qt操作mysql数据库.assets/image-20260702084244918.png)

## 2.打开.pro文件，添加sql支持

![image-20260702084352553](./qt操作mysql数据库.assets/image-20260702084352553.png)

## 3.包含sql所需要的头文件

![image-20260702084524323](./qt操作mysql数据库.assets/image-20260702084524323.png)

## 4.创建一个connectMysqlDb函数，并且在cpp添加实现代码

![image-20260702085218269](./qt操作mysql数据库.assets/image-20260702085218269.png)

## 5.在widget.cpp的构造函数里面调用connectMysqlDb函数

![image-20260702085522384](./qt操作mysql数据库.assets/image-20260702085522384.png)

## 6.运行程序，发现有一个错误，说QSqlDatabase: QMYSQL driver not loaded

![image-20260702085631944](./qt操作mysql数据库.assets/image-20260702085631944.png)

## 7.我们需要检查qt安装路径里面的编译器路径里面有没有qsqlmysql.dll，我们这个文件夹里面没有这个文件

![image-20260702085918283](./qt操作mysql数据库.assets/image-20260702085918283.png)

## 8.说明我们需要给qt安装Mysql驱动，最好使用odbc连接方式，因为编译mysql驱动挺烦的。先下载安装mysql的odbc驱动，这里安装的是9.7版本

![image-20260702100554211](./qt操作mysql数据库.assets/image-20260702100554211.png)

![image-20260702100641376](./qt操作mysql数据库.assets/image-20260702100641376.png)

## 9.安装好这个驱动后，我们打开64位的数据源工具，点击用户dsn选项卡，然后找到MySQL ODBC 9.7 Unicode Driver，点击完成，在弹出的窗口中填写我们的数据库信息

![image-20260702102422864](./qt操作mysql数据库.assets/image-20260702102422864.png)

## 10.填写好后，点击Test测试一下，发现连接成功

![image-20260702102637279](./qt操作mysql数据库.assets/image-20260702102637279.png)

## 11.回到我们的项目，修改一下connectMysqlDb函数，修改一下代码

![image-20260702104609797](./qt操作mysql数据库.assets/image-20260702104609797.png)

## 12.运行程序，连接成功

![image-20260702104703272](./qt操作mysql数据库.assets/image-20260702104703272.png)

## 13.打开ui文件，添加一个TabelWidget和一个标签控件

![image-20260702110455242](./qt操作mysql数据库.assets/image-20260702110455242.png)

## 14.在widget.cpp文件里面添加查询数据标签添加到表格的代码

![image-20260702114025758](./qt操作mysql数据库.assets/image-20260702114025758.png)

### 运行程序，效果如下

![image-20260702114126330](./qt操作mysql数据库.assets/image-20260702114126330.png)

## 15.感觉不太好看，我们给tablewidget设置拉伸效果

![image-20260702114445500](./qt操作mysql数据库.assets/image-20260702114445500.png)

### 效果

![image-20260702114506799](./qt操作mysql数据库.assets/image-20260702114506799.png)

## 注意：QTableWidget使用的几个小坑

### 1.表格默认只有一列，你必须设置你需要的列数

### 2.添加到单元格的数据必须是字符串，否则无法添加

### 3.默认数据表不会填满整个tablewidget,需要手动设置拉伸模式

![image-20260702114751741](./qt操作mysql数据库.assets/image-20260702114751741.png)

## 16.我们给tablewidget添加一个出来点击事件的槽函数，先添加一些在控制台输出的代码，看看能否输出我们点击的一行的所有信息

![image-20260702115634773](./qt操作mysql数据库.assets/image-20260702115634773.png)

### 运行程序，发现拿到数据了

![image-20260702115940342](./qt操作mysql数据库.assets/image-20260702115940342.png)

## 17.我们给界面添加一个组合框，里面添加四个标签和2个单行编辑控件

![image-20260702120725265](./qt操作mysql数据库.assets/image-20260702120725265.png)

## 18.然后我们修改点tablewidget的击事件的槽函数的代码，用选中项的内容填充我们的控件

![image-20260702121134505](./qt操作mysql数据库.assets/image-20260702121134505.png)

### 运行程序，效果如下

![image-20260702121203567](./qt操作mysql数据库.assets/image-20260702121203567.png)