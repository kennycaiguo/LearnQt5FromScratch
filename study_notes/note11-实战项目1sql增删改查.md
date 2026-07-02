# Qt操作sqlserver数据库

# 1.安装sqlserver2025和sql server management studio

### 参考：https://github.com/kennycaiguo/kenny_learn_sqlserver2026/blob/main/sql%20server2025%E5%AE%89%E8%A3%85%E6%8C%87%E5%8D%97.pdf

# 2.用工具入navicat17或者ssms创建一个数据库company，里面创建一个数据表emp,建表语句如下（TSQL)

```
IF EXISTS (SELECT * FROM sys.all_objects WHERE object_id = OBJECT_ID(N'[dbo].[emp]') AND type IN ('U'))
	DROP TABLE [dbo].[emp]
GO

CREATE TABLE [dbo].[emp] (
  [id] int  NOT NULL,
  [name] varchar(255) COLLATE Chinese_PRC_CI_AS  NOT NULL,
  [age] int  NOT NULL,
  [gender] varchar(255) COLLATE Chinese_PRC_CI_AS  NOT NULL,
  [phone] varchar(255) COLLATE Chinese_PRC_CI_AS  NOT NULL,
  [email] varchar(255) COLLATE Chinese_PRC_CI_AS  NOT NULL,
  [depId] int  NOT NULL
)
GO

ALTER TABLE [dbo].[emp] SET (LOCK_ESCALATION = TABLE)
GO


-- ----------------------------
-- Records of emp
-- ----------------------------
INSERT INTO [dbo].[emp] ([id], [name], [age], [gender], [phone], [email], [depId]) VALUES (N'1', N'Jack', N'25', N'male', N'1234567', N'jack1234@gmail.com', N'1')
GO

INSERT INTO [dbo].[emp] ([id], [name], [age], [gender], [phone], [email], [depId]) VALUES (N'2', N'Mary', N'26', N'female', N'2345678', N'mary1234@gmail.com', N'1')
GO

INSERT INTO [dbo].[emp] ([id], [name], [age], [gender], [phone], [email], [depId]) VALUES (N'3', N'Ben', N'24', N'male', N'1234678', N'ben12345@gmail.com', N'2')
GO


-- ----------------------------
-- Primary Key structure for table emp
-- ----------------------------
ALTER TABLE [dbo].[emp] ADD CONSTRAINT [PK__emp__3213E83FBDC8434D] PRIMARY KEY CLUSTERED ([id])
WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON)  
ON [PRIMARY]
GO

```

![image-20260630200541980](./note11-实战项目1sql增删改查.assets/image-20260630200541980.png)

# 3.配置odbc数据库驱动，打开32为数据源管理工具

![image-20260630201404116](./note11-实战项目1sql增删改查.assets/image-20260630201404116.png)

## 3.1.在弹出的窗口中点击右边的添加按钮，就会弹出另外一个窗口

![image-20260630201600053](./note11-实战项目1sql增删改查.assets/image-20260630201600053.png)

## 3.2.创建SQL Server，然后点击完成

![image-20260630201808816](./note11-实战项目1sql增删改查.assets/image-20260630201808816.png)

## 3.3.又会弹出另外一个窗口，填写相关内容如下，第一栏填写我们的数据库名称company。第二栏随便，这里填写公司数据库，第三栏只需要一个.

![image-20260630202301886](./note11-实战项目1sql增删改查.assets/image-20260630202301886.png)

## 3.4.点击下一页，保存默认

![image-20260630202441695](./note11-实战项目1sql增删改查.assets/image-20260630202441695.png)

## 3.5.点击下一页，又会弹出另外一个窗口，勾选第一个复选框，然后选择我们的company数据库

![image-20260630202727237](./note11-实战项目1sql增删改查.assets/image-20260630202727237.png)

## 3.6.点击下一步，然后点击完成，又会弹出一个窗口

![image-20260630202833319](./note11-实战项目1sql增删改查.assets/image-20260630202833319.png)

## 3.7.点击测试数据源，发现测试成功

![image-20260630202924127](./note11-实战项目1sql增删改查.assets/image-20260630202924127.png)

## 3.8.然后一路确定退出数据库工具，当返回到odbc数据库管理员查询32位界面时，选中我们的company配置

![image-20260630203219127](./note11-实战项目1sql增删改查.assets/image-20260630203219127.png)

## 3.9.点击确定退出工具，配置完成。



# 4.在qt项目中操作sql server数据库，案例1，使用QSqlTableModel

### 4.1.创建一个qt WIdget项目，起名：QtSqlServerdemo,基类选择QWidget

![image-20260701180730445](./note11-实战项目1sql增删改查.assets/image-20260701180730445.png)

![image-20260701180828260](./note11-实战项目1sql增删改查.assets/image-20260701180828260.png)

### 4.2打开项目mc.pro文件，添加堆sql的支持

![image-20260701181018156](./note11-实战项目1sql增删改查.assets/image-20260701181018156.png)

### 4.3在widget.h文件里面包含数据库操作必须的头文件

![image-20260701181417630](./note11-实战项目1sql增删改查.assets/image-20260701181417630.png)

### 4.4.先添加一些数据库的配置代码和测试连接代码，如图

![image-20260701182422484](./note11-实战项目1sql增删改查.assets/image-20260701182422484.png)

#### 运行程序，效果如下：

![image-20260701182506029](./note11-实战项目1sql增删改查.assets/image-20260701182506029.png)

![image-20260701182519593](./note11-实战项目1sql增删改查.assets/image-20260701182519593.png)

#### 说明连接数据库成功

#### 我们把窗口调小一点

![image-20260701182701555](./note11-实战项目1sql增删改查.assets/image-20260701182701555.png)

###	4.5.为了方便观察数据，我们给窗体添加一个tableView控件，改名tbview，我们想把数据填充到这个tableview控件里面

![image-20260701184222163](./note11-实战项目1sql增删改查.assets/image-20260701184222163.png)

### 4.6然后我们需要导入QSqlTableModel 头文件

![image-20260701184336090](./note11-实战项目1sql增删改查.assets/image-20260701184336090.png)

### 4.7我们在widget.cpp的构造函数里面添加下面的代码

```
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //配置数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setDatabaseName("company");
    db.setUserName("sa");
    db.setPassword("sa12345");
    //数据库链接测试
    bool ret = db.open();
    if(!ret)
        QMessageBox::critical(this,"error","打开数据库失败");
    //数据查询
     QSqlTableModel *model = new QSqlTableModel(this);//注意，这里必须要new，不能使用QSqlTableModel model;步使用new创建对象获取不到数据
     model->setTable("emp");
     model->select();

     ui->tbview->setModel(model);
    //关闭连接
}

```

#### 运行程序，发现有tableView有数据了

### 4.8.我们个tabelview添加一个点击事件处理槽函数

![image-20260701190025806](./note11-实战项目1sql增删改查.assets/image-20260701190025806.png)

![image-20260701190523538](./note11-实战项目1sql增删改查.assets/image-20260701190523538.png)

### 4.9 为了方便编程。我们把上面的model指针定义位类的成员变量

![image-20260701190738369](./note11-实战项目1sql增删改查.assets/image-20260701190738369.png)

### 4.10.然后我们需要适当修改一下代码

![image-20260701190914605](./note11-实战项目1sql增删改查.assets/image-20260701190914605.png)

#### 运行程序，发现一切正常

![image-20260701191032328](./note11-实战项目1sql增删改查.assets/image-20260701191032328.png)

## 4.11.默认情况下，QTableView是开启列选择模式，你点击一个列就显示这个列的被点击单元格的数据，我们在tableview的点击处理函数里面添加下面的代码，此时你点击tableview，你会发现，你其实只是点击了一个单元格，如何程序就输出这个单元格的内容

![image-20260701191835785](./note11-实战项目1sql增删改查.assets/image-20260701191835785.png)

#### 效果如下

![image-20260701191918384](./note11-实战项目1sql增删改查.assets/image-20260701191918384.png)

## 4.12.如果你需要选择一行，首先，你必须开启tableview的整行选择功能，不过我们其实不需要开启选择一行，因为我们可以使用 index.sibling(index.row(),列号)来获取选中的单元格的所有兄弟的数据，也就是可以获取这一行所有的单元格的数据

![image-20260701193413877](./note11-实战项目1sql增删改查.assets/image-20260701193413877.png)

# 5.在qt项目中操作sql server数据库，案例2，使用QSqlQuery

## 5.1新建一个qt widget项目起名，SqlserverQSqlQueryDemo，继承自QWidget,把界面调整小一点，并且添加一个TabelWidget



