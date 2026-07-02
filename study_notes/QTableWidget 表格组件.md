## 概述

Qt 是一个跨平台C++图形界面平台，利用Qt可以快速开发跨平台窗体应用程序，在Qt中我们可以通过拖拽的方式将不同组件放到指定的位置，实现图形化开发极大的方便了开发效率，本章将重点介绍`TableWidget`表格组件的常用方法及灵活运用。其核心特点：

- 内置数据存储模型（`QTableWidgetItem`）
- 支持单元格级别的编辑和选择
- 提供行列表头、单元格式的高度自定义能力
- 包含丰富的信号槽机制，便于交互响应

其`QTableWidget`类层次结构：

```makefile
QObject
 └── QWidget
      └── QFrame
           └── QAbstractScrollArea
        		└── QAbstractItemView
            	     └── QTableView
                          └── QTableWidget
```

`QTableWidget` 继承自`QTableView` 类，`QTableView`类也可以用来显示表格控件。`QTableWidget` 可以看做是 `QTableView` 的“简易版”或者“升级版”，它们的区别在于：

- `QTableWidget` 使用起来更简单，而 `QTableView` 的用法相对比较复杂。
- `QTableView` 可以存储大量的数据（例如几十万甚至几百万），用户浏览表格中的数据时不会出现卡顿等现象；尽管 `QTableWidget` 也能用来存储大量的数据，但用户使用时可能出现卡顿等现象，且显示的数据越多，类似的现象越明显。

总之，QTableWidget 只适合显示少量的数据（几百或几千个），如果想要显示更多的数据，应该用 `QTableView`。此外，`QTableView` 还有一些更高级的用法，我们会在讲解 `QTableView` 时做重点介绍。

## 1.1 QTableWidget 的基本API接口汇总

 `QTableWidget`是`Qt`中用于显示表格数据的部件。它是`QTableView`的子类，提供了一个简单的接口，适用于一些不需要使用自定义数据模型的简单表格场景。`QTableWidget`提供了一个方便的接口来创建和操作表格中的数据。`QTableWidget`该组件可以看作是`TreeWidget`树形组件的高级版本，表格组件相较于树形结构组件灵活性更高，不仅提供了输出展示二维表格功能，还可以直接对表格元素直接进行编辑和修改操作，表格结构分为表头、表中数据两部分，表格结构可看作一个二维数组，通过数组行列即确定特定元素。 以下是`QTableWidget`类的一些常用方法API的简要说明：

表 1 QTableWidget类常用成员方法

| 方法                                                   | 描述                                           |
| :----------------------------------------------------- | :--------------------------------------------- |
| `setItem(int row, int column, QTableWidgetItem *item)` | 设置指定行和列的项                             |
| `item(int row, int column) const`                      | 返回指定行和列的项                             |
| `setRowCount(int rows)`                                | 设置表格的行数                                 |
| `setColumnCount(int columns)`                          | 设置表格的列数                                 |
| `rowCount() const`                                     | 返回表格的行数                                 |
| `columnCount() const`                                  | 返回表格的列数                                 |
| `setHorizontalHeaderLabels(const QStringList &labels)` | 设置水平表头的标签                             |
| `setVerticalHeaderLabels(const QStringList &labels)`   | 设置垂直表头的标签                             |
| `setItemPrototype(QTableWidgetItem *item)`             | 设置原型项，用于在新插入的单元格中创建副本     |
| `insertRow(int row)`                                   | 在指定行插入新行                               |
| `removeRow(int row)`                                   | 移除指定行                                     |
| `insertColumn(int column)`                             | 在指定列插入新列                               |
| `removeColumn(int column)`                             | 移除指定列                                     |
| `clear()`                                              | 清空表格的所有内容                             |
| `clearContents()`                                      | 清空表格的所有单元格的内容，但保留表头和行列数 |
| `itemAt(int x, int y) const`                           | 返回给定坐标下的项                             |
| `setCurrentItem(QTableWidgetItem *item)`               | 设置当前项，用于指定当前被选择的项             |
| `currentItem() const`                                  | 返回当前被选择的项                             |
| `setCurrentCell(int row, int column)`                  | 设置当前单元格，用于指定当前被选择的单元格     |
| `currentRow() const`                                   | 返回当前被选择的行号                           |
| `currentColumn() const`                                | 返回当前被选择的列号                           |
| `setItemDelegate(QAbstractItemDelegate *delegate)`     | 设置项代理，用于自定义单元格的显示和编辑方式   |
| `setSortingEnabled(bool enable)`                       | 启用或禁用排序功能                             |
| `sortItems(int column, Qt::SortOrder order)`           | 对指定列进行排序                               |
| `setEditTriggers(EditTriggers triggers)`               | 设置触发编辑的事件                             |
| `editItem(QTableWidgetItem *item)`                     | 编辑指定项的内容                               |
| `openPersistentEditor(QTableWidgetItem *item)`         | 打开指定项的持久编辑器                         |
| `closePersistentEditor(QTableWidgetItem *item)`        | 关闭指定项的持久编辑器                         |
| `itemChanged(QTableWidgetItem *item)`                  | 当项的内容发生变化时发出的信号                 |
| `cellClicked(int row, int column)`                     | 单元格被单击时发出的信号                       |
| `cellDoubleClicked(int row, int column)`               | 单元格被双击时发出的信号                       |

这些方法提供了对 `QTableWidget` 的基本操作和配置的途径。使用这些方法，你可以动态地调整表格的大小、内容，设置表头，进行排序，处理编辑触发事件等。在.pro项目文件中添加必要的模块：

```makefile
QT += core gui widgets
```

下表展示了`QTableWidget`类提供的一些信号函数以及它们各种的，其常用的信号总结如下：

表 2 QTableWidget信号函数汇总

|                    信号                     |                        触发条件与功能                        |
| :-----------------------------------------: | :----------------------------------------------------------: |
|      `cellClicked(int row,int column)`      | 当某个单元格被点击时，触发该信号，`row` 和 `columu` 就是被点击的单元格的位置。 |
|   `cellDoubleClicked(int row,int column)`   | 当某个单元格被双击时，触发该信号，`row` 和 `columu` 就是被点击的单元格的位置。 |
|      `cellEntered(int row,int column)`      | 当某个单元格被按下时，触发该信号，`row` 和 `columu` 就是被点击的单元格的位置。 |
|     `cellChanged(int row, int column)`      | 当某个单元格中的数据发生改变时，触发该信号，`row` 和 `columu` 就是被改变的单元格的位置。 |
|    `itemClicked(QTableWidgetItem *item)`    | 当某个单元格被点击时，触发该信号，`item` 就是被点击的单元格。 |
| `itemDoubleClicked(QTableWidgetItem *item)` | 当某个单元格被双击时，触发该信号，`item` 就是被双击的单元格。 |
|    `itemEntered(QTableWidgetItem *item)`    | 当某个单元格被按下时，触发该信号，`item` 就是被按下的单元格。 |
|    `itemChanged(QTableWidgetItem *item)`    | 当某个单元格中的数据发生改变时，触发该信号，`item` 就是被改变的单元格。 |
|          `activated(QModelIndex)`           |           当用户激活`index`指定的项目时，发出信号            |
|    `cellActivated(int row，int column)`     |           单元格被激活时，发出信号，并传递(行，列)           |

QTableWidget 表格也可以接收信号并做出相应地响应，例如：

表 3 QTableWidget常用槽函数

|                            槽函数                            |                          功 能                           |
| :----------------------------------------------------------: | :------------------------------------------------------: |
|                          `clear()`                           |          删除表格中所有单元格的内容，包括表头。          |
|                      `clearContents()`                       |    不删除表头，仅删除表格中数据区内所有单元格的内容。    |
|                  `insertColumn(int column)`                  |           在表格第 column 列的位置插入一个空列           |
|                     `insertRow(int row)`                     |           在表格第 row 行的位置插入一个空行。            |
|                  `removeColumn(int column)`                  | 删除表格中的第 column 列，该列的所有单元格也会一并删除。 |
|                     `removeRow(int row)`                     |  删除表格中的第 row 行，该行的所有单元格也会一并删除。   |
| `scrollToItem(const QTableWidgetItem *item, QAbstractItemView::ScrollHint hint = EnsureVisible)` |                   滑动到指定的单元格。                   |

其信号的中信号槽连接使用 `QObject::connect`，通常采用函数指针语法（`Qt5/6` 推荐）或宏 `SIGNAL/SLOT`

| 信号                                                         | 连接示例                                                     |
| :----------------------------------------------------------- | :----------------------------------------------------------- |
| `cellClicked(int row, int column)`                           | `connect(table, &QTableWidget::cellClicked, this, &MyClass::onCellClicked);` |
| `cellDoubleClicked(int row, int column)`                     | `connect(table, &QTableWidget::cellDoubleClicked, ...);`     |
| `cellChanged(int row, int column)`                           | `connect(table, &QTableWidget::cellChanged, ...);`           |
| `currentCellChanged(int currentRow, int currentCol, int previousRow, int previousCol)` | `connect(table, &QTableWidget::currentCellChanged, ...);`    |
| `itemClicked(QTableWidgetItem *item)`                        | `connect(table, &QTableWidget::itemClicked, ...);`           |
| `itemChanged(QTableWidgetItem *item)`                        | `connect(table, &QTableWidget::itemChanged, ...)`            |

示例：

```C++
// 头文件声明槽函数
private slots:
    void onCellClicked(int row, int column);

// 连接
connect(ui->tableWidget, &QTableWidget::cellClicked, this, &MyWidget::onCellClicked);

// 实现
void MyWidget::onCellClicked(int row, int column)
{
    qDebug() << "Clicked cell" << row << column;
}
```

## 1.2 创建QTableWidget的表格

创建表格涉及到的成员函数有：

```C++
// 构造函数
QTableWidget::QTableWidget(QWidget *parent = nullptr)
QTableWidget::QTableWidget(int rows, int columns, QWidget *parent = nullptr)

// 设置行数
void QTableWidget::setRowCount(int rows);

// 设置列数
void QTableWidget::setColumnCount(int columns)
```

创建`QTableWidget` 的基本方式一般有两种：

```C++
// 方式1：在代码中直接创建
QTableWidget *tableWidget = new QTableWidget(this);
tableWidget->setRowCount(20);      // 设置20行
tableWidget->setColumnCount(10);   // 设置10列

// 方式2：在UI设计器中拖放添加
// 在Qt Designer中拖放"Table Widget"到窗体
// 然后在代码中通过ui指针访问
ui->tableWidget->setRowCount(20);
ui->tableWidget->setColumnCount(10);
```

## 1.3 QTableWidget常用设置表格属性

 我们需要总结常用的设置表格属性的API，包括行列、表头、选择模式、编辑触发、尺寸调整、样式等。可以按功能分类，给出API名称和简要说明。最好也提及对应的枚举值。

### 1.3.1 表头设置

| 方法                                  | 说明              |
| :------------------------------------ | :---------------- |
| `setHorizontalHeaderLabels(list)`     | 设置水平表头文字  |
| `setVerticalHeaderLabels(list)`       | 设置垂直表头文字  |
| `horizontalHeader().setVisible(bool)` | 显示/隐藏水平表头 |
| `verticalHeader().setVisible(bool)`   | 显示/隐藏垂直表头 |

### 1.3.2 选择行为与模式

| 方法 / 枚举                                            | 说明                                                         |
| :----------------------------------------------------- | :----------------------------------------------------------- |
| `setSelectionBehavior(QTableWidget.SelectionBehavior)` | 选择行为： `SelectItems`（单元格，默认） `SelectRows`（整行） `SelectColumns`（整列） |
| `setSelectionMode(QTableWidget.SelectionMode)`         | 选择模式： `NoSelection`（禁止选择） `SingleSelection`（单选） `MultiSelection`（多选） `ExtendedSelection`（扩展选择，支持 `Ctrl/Shift`） `ContiguousSelection`（连续多选） |

### 1.3.3 行列尺寸调整

| 方法                                                         | 说明                                                         |
| :----------------------------------------------------------- | :----------------------------------------------------------- |
| `resizeColumnsToContents()`                                  | 所有列宽适应内容                                             |
| `resizeRowsToContents()`                                     | 所有行高适应内容                                             |
| `setColumnWidth(int col, int width)`                         | 设置指定列宽（像素）                                         |
| `setRowHeight(int row, int height)`                          | 设置指定行高（像素）                                         |
| `horizontalHeader().setSectionResizeMode(QHeaderView.ResizeMode)` | 设置列宽调整模式： `Interactive`（用户可调，默认） `Fixed`（固定） `Stretch`（拉伸填满剩余空间） `ResizeToContents`（根据内容自动调整） |
| `verticalHeader().setSectionResizeMode(QHeaderView.ResizeMode)` | 同上，用于行高调整                                           |

### 1.3.4 外观样式

| 方法                                        | 说明                                                         |
| :------------------------------------------ | :----------------------------------------------------------- |
| `void setAlternatingRowColors(bool enable)` | 是否交替行颜色                                               |
| `void setShowGrid(bool show)`               | 是否显示网格线                                               |
| `void setGridStyle(Qt::PenStyle style)`     | 网格线样式：`Qt::SolidLine`, `Qt::DashLine`, `Qt::DotLine` 等 |
| `void setCornerButtonEnabled(bool enable)`  | 左上角全选按钮是否可见                                       |

### 1.3.5 其他常用设置

| 方法                                            | 说明                                                         |
| :---------------------------------------------- | :----------------------------------------------------------- |
| `void setSortingEnabled(bool enable)`           | 是否启用点击表头排序                                         |
| `void setWordWrap(bool on)`                     | 单元格文本是否自动换行                                       |
| `void setTextElideMode(Qt::TextElideMode mode)` | 文本过长省略模式：`Qt::ElideLeft`, `ElideRight`, `ElideMiddle`, `ElideNone` |

## 1.4 QTableWidget 示 例

QTableWidget提供了`cellDoubleClicked`信号，当用户双击单元格时触发该信号。通过连接该信号到自定义槽函数，可以获取被双击单元格的行列索引和内容。

```C++
#include <QApplication>
#include <QTableWidget>
#include <QMessageBox>
#include <QHeaderView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    // 创建表格控件
    QTableWidget tableWidget(5, 3); // 5行3列
    tableWidget.setWindowTitle("QTableWidget双击示例");
    
    // 设置表头
    QStringList headers;
    headers << "姓名" << "年龄" << "职业";
    tableWidget.setHorizontalHeaderLabels(headers);
    
    // 填充示例数据
    QStringList names = {"张三", "李四", "王五", "赵六", "钱七"};
    QStringList jobs = {"工程师", "医生", "教师", "律师", "设计师"};
    
    for(int row = 0; row < 5; ++row) {
        tableWidget.setItem(row, 0, new QTableWidgetItem(names[row]));
        tableWidget.setItem(row, 1, new QTableWidgetItem(QString::number(20 + row)));
        tableWidget.setItem(row, 2, new QTableWidgetItem(jobs[row]));
    }
    
    // 连接双击信号
    QObject::connect(&tableWidget, &QTableWidget::cellDoubleClicked, [&](int row, int column){
        QTableWidgetItem *item = tableWidget.item(row, column);
        QString message = QString("行: %1\n列: %2\n内容: %3")
                            .arg(row + 1)
                            .arg(column + 1)
                            .arg(item ? item->text() : "空");
        
        QMessageBox::information(&tableWidget, "单元格内容", message);
    });
    
    // 调整列宽
    tableWidget.horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tableWidget.show();
    
    return app.exec();
}
```

### 关键技术点说明

1. **信号连接**：使用`QObject::connect`将`cellDoubleClicked`信号连接到`lambda`表达式
2. **行列索引**：信号参数直接提供被双击单元格的行列索引（从0开始）
3. **内容获取**：通过`item(row, column)`方法获取`QTableWidgetItem`对象
4. **空值处理**：检查item指针是否为`nullptr`，避免空指针异常
5. **界面反馈**：使用`QMessageBox`显示获取到的单元格信息