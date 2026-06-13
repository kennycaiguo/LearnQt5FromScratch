## 前驱知识，Qt的应用领域

![image-20260612135755803](./note04-qt开发常用算法以及控件原理.assets/image-20260612135755803.png)

## Qt项目中的3种窗口类型

![image-20260612140050221](./note04-qt开发常用算法以及控件原理.assets/image-20260612140050221.png)

## Qt的项目结构

![image-20260612140227018](./note04-qt开发常用算法以及控件原理.assets/image-20260612140227018.png)

## Qt中main.cpp的main函数返回a.exec()和返回0有什么不一样

在 Qt 程序中，`return a.exec();` 与 `return 0;` 最核心的区别在于**事件循环（Event Loop）是否启动**以及**程序何时终止**。对于带界面的 GUI 程序，**必须**使用 `a.exec()`，而写 `0` 会导致程序瞬间闪退。 [[1](https://zhuanlan.zhihu.com/p/124113214), [2](https://blog.csdn.net/weixin_43229139/article/details/106943095)]

具体差异如下：

1. 返回 a.exec()（标准 GUI 用法）

- **启动事件循环**：`a.exec()` 会开启 Qt 的主事件循环。它接管了程序的控制权，开始监听和处理鼠标点击、键盘输入、绘图等各种系统与用户事件。
- **阻塞等待**：程序会停在这一行，窗口保持显示状态，不会向下执行。
- **退出机制**：只有当调用了 `a.quit()` 或 `a.exit()`（例如用户点击关闭按钮）时，事件循环才会结束，`exec()` 会返回系统退出码（通常是正常退出的 `0`），然后 `main` 函数随之结束。 [[1](https://doc.qt.io/qt-6/zh/widgets-tutorial.html), [2](https://qtguide.ustclug.org/ch02-02.htm), [3](https://blog.csdn.net/weixin_44084447/article/details/123205361), [4](https://blog.csdn.net/weixin_43229139/article/details/106943095), [5](https://zhuanlan.zhihu.com/p/124113214)]
- 返回 0

- **不启动事件循环**：程序执行到窗口显示代码（如 `w.show()`）后，会直接跳过事件等待，继续往下执行并立即到达 `return 0`。
- **瞬间闪退**：程序会直接结束并退出，导致你可能根本看不到任何界面，或者窗口一闪而过。
- **适用场景**：仅适用于不需要任何用户交互的**纯命令行（Console）程序**

# 1.Qt中的QtAlgorithms

**`<QtAlgorithms>`** 是 Qt 框架中提供的一系列**全局模板函数**，主要用于处理各种容器。它提供了一些小巧且实用的通用算法，方便开发者更轻松地操作和管理数据。 [[1](https://doc.qt.io/qt-6/qtalgorithms.html), [2](https://doc.qt.io/qt-6/zh/qtalgorithms.html)]

虽然现代 Qt 和 C++ 标准库（STL）中已有许多替代方案，但了解这些算法对于维护遗留代码或特定操作非常有用。以下是常用核心函数的盘点：

核心算法与函数

- **`qDeleteAll()`**：这是最常用的函数之一。用于快速释放容器中所有元素（前提是元素为指针类型），并自动清理容器本身。
- **`qBinaryFind()`**：在已排序的容器中执行**二分查找**。
- **`qSort()` / `qStableSort()`**：用于对容器内的元素进行排序（`qStableSort` 保证排序的稳定性）。
- **`qEqual()`**：比较两个范围内的元素是否完全相同。
- **`qFill()`**：将指定的值填充到容器的指定区间中。
- **`qCount()` / `qFind()`**：用于计算特定元素出现的次数或查找元素。 [[1](https://www.cnblogs.com/findumars/p/10246967.html), [2](https://www.lizhaozhong.info/archives/227), [3](https://doc.qt.io/qt-6/zh/qtalgorithms.html)]

替代方案与现代化建议

需要注意的是，随着 C++ 和 Qt 的演进，`<QtAlgorithms>` 中的部分函数（如 `qSort`、`qCopy`、`qFill` 等）在 Qt 5 中已被标记为**废弃 (Deprecated)**。 [[1](https://www.lizhaozhong.info/archives/227)]

官方推荐使用 **C++ 标准模板库 (STL)** 中对应的算法（例如 `<algorithm>` 中的 `std::sort`, `std::find`, `std::copy` 等），这些标准库函数功能更强大且效率更高

Qt中的< [QtAlgorithms](https://zhida.zhihu.com/search?content_id=109409558&content_type=Article&match_order=1&q=QtAlgorithms&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODE0NjUxMjMsInEiOiJRdEFsZ29yaXRobXMiLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoxMDk0MDk1NTgsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.CyH9UPNNWwyWiHq95wXxaaxNnSi_Yq6IguQYIUho7ck&zhida_source=entity) >和< QtGlobal >提供了一些常用的算法和函数。

## 此处只列举最常用的几个：

### 1、绝对值

```text
T qAbs(const T &value)
```

### 2、四舍五入取整

```text
int qRound(float value)
```

### 3、向下取整

```text
int qFloor(qreal v) 
```

### 4、交换两个数的值

```text
void qSwap(T &var1, T &var2)
```

### 5、对数

```text
qreal qLn(qreal v)
```

### 6、指数

```text
qreal qPow(qreal x, qreal y)
```

### 7、平方根

```text
qreal Sqrt(qreal v) 
```

**求最值**

### 8、最大值

```text
const T &qMax(const T &a, const T &b)
```

### 9、最小值

```text
const T &qMin(const T &a, const T &b)
```

### 10、三值的中间值

```text
const T &qBound(const T &v1, const T &v2, const T &v3)
```

### 11、列表容器最小值与最大值

```text
#include<algorithm>

template<class ForwardIt, class Compare>
ForwardIt std::min_element(ForwardIt first, ForwardIt last, Compare comp)                        
ForwardIt std::max_element(ForwardIt first, ForwardIt last, Compare comp)

示例：

QStringList list{"1", "3", "2"};
QString maxValue = *std::max_element(list.begin(), list.end());
QString minValue = *std::min_element(list.begin(), list.end());
```

5、数组最小值与最大值

```text
int array[] = {1, 5, 4, 3, 2, 0};

int maxValue = *std::max_element(array, array + sizeof(array)/sizeof(array[0]));                              
int minValue = *std::min_element(array, array + sizeof(array)/sizeof(array[0]));
```

### 参考文档： https://developer.aliyun.com/article/983593



# 2.Qt窗口以及控件原理设计



Qt 的窗口与控件设计基于**面向对象机制**与**事件驱动模型**。其核心设计理念是通过 `QWidget` 统一控件树、利用**信号与槽机制**解耦组件通信，并借助**布局管理器**实现响应式排版。 [[1](https://developer.aliyun.com/article/1105052), [2](https://zhuanlan.zhihu.com/p/34815431)]

------

一、 核心基础：对象树与基类

- **`QWidget` 基类**：所有窗口和控件的祖先。它封装了界面的视觉属性（位置、大小、颜色）和交互逻辑（鼠标、键盘事件）。
- **对象树机制（Object Tree）**：Qt 通过父子关系管理内存。当创建对象指定父指针（`parent`）时，子对象会被挂载到父对象的对象树上。父对象销毁时，会自动析构其下的所有子对象，极大降低了内存泄漏风险。 [[1](https://blog.csdn.net/sjsndjsndh/article/details/127034919), [2](https://developer.aliyun.com/article/1105052)]

二、 核心机制：信号与槽（Signals & Slots）

这是 Qt 区别于传统回调函数的核心通信机制，用于实现对象间的解耦通信。 [[1](https://www.cnblogs.com/jmilkfan-fanguiju/p/11825173.html)]

- **信号（Signal）**：当控件状态改变或触发动作时发射（如按钮的 `clicked()`）。
- **槽（Slot）**：普通的成员函数，用于接收信号并执行具体逻辑。
- **连接（Connection）**：将信号与槽绑定，支持“多对多”连接。当信号发射时，绑定的槽函数会自动执行。 [[1](https://www.cnblogs.com/jmilkfan-fanguiju/p/11825173.html)]

三、 界面布局原理（Layout）

控件的位置和大小管理，核心在于提供自适应能力，支持多种布局方案：

- **布局管理器**：如水平布局（`QHBoxLayout`）、垂直布局（`QVBoxLayout`）、网格布局（`QGridLayout`）。控件放入布局后，会自动随窗口缩放而调整大小和位置，无需手动计算。
- **绝对定位**：直接指定坐标 `move(x, y)`，不推荐使用，无法应对窗口缩放。 [[1](https://blog.csdn.net/cxd3341/article/details/147775028), [2](https://zhuanlan.zhihu.com/p/703859788)]

四、 窗口类型与架构

Qt 提供了几种预定义的顶层窗口结构：

- **`QMainWindow`**：主窗口框架，自带菜单栏（`QMenuBar`）、工具栏（`QToolBar`）、中心部件区（`Central Widget`）和状态栏（`QStatusBar`）。
- **`QDialog`**：对话框窗口，通常用于模态（Modal）或非模态的特定交互（如设置面板、提示框）。
- **`QWidget`**：作为基础空白窗口或直接嵌入其他窗口内部的复合控件。 [[1](https://zhuanlan.zhihu.com/p/601971844), [2](https://blog.csdn.net/sjsndjsndh/article/details/127034919)]

五、 渲染与绘制原理

- **双缓冲机制**：所有绘制操作先在内存缓冲区进行，完成后一次性刷新到屏幕上，能有效防止界面闪烁。
- **事件循环（Event Loop）**：通过 `QApplication::exec()` 启动事件循环。操作系统产生的输入事件（鼠标点击、按键）被封装成 `QEvent` 对象，由事件循环分发给对应的接收者（Receiver）处理。

![image-20260612143142895](./note04-qt开发常用算法以及控件原理.assets/image-20260612143142895.png)
