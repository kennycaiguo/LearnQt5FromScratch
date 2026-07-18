# 参考文档

## 1. https://cloud.tencent.com/developer/article/1573810

## 2. https://zhuanlan.zhihu.com/p/1888268910878515794

## 3. https://www.cnblogs.com/feiyangqingyun/p/10816842.html

## 4. https://openvela.csdn.net/694c913f5b9f5f31781a67d3.html

## 5. https://developer.aliyun.com/article/948677

## 6. https://zhuanlan.zhihu.com/p/29194780984

## 7 . https://www.cnblogs.com/GeophysicsWorker/p/19702816





# 参考文档csdn



# Qt编程示例-23个数据可视化应用



本文详细介绍了如何利用Qt的OpenGL数据可视化模块创建3D图形，包括实时音频数据处理、QML应用中的图表类型如散点图、频谱图等，并展示了23个实际示例，涵盖小部件和QML中的定制功能和图形交互。

## Qt编程示例-数据可视化

Qt数据可视化模块建立在OpenGL之上，提供了将数据可视化为3D条形图、散点图和曲面图的方法。它对于可视化深度图和大量快速变化的数据特别有用，可以直观显示从多个传感器接收的数据。通过使用主题或向图形添加自定义项和标签来自定义图形的外观。

### 数据可视化示例列表

通过下面23个data visualization示例，展示了Qt数据可视化模块的不同应用。

- 1 audiolevels 显示实时音频数据的简单应用程序。
- 2 bars 在小部件应用程序中使用 Q3DBars。
- 3 custominput 在小部件应用程序中实现自定义输入处理程序。
- 4 customitems 将自定义项添加到曲面图。
- 5 customproxy 将 Q3DBars 与自定义代理一起使用
- 6 draggableaxes 实现自定义输入处理程序以支持轴拖动。
- 7 itemmodel 使用项模型作为 Q3DBars 的数据源
- 8 qmlaxisdrag 在QML中实现轴拖动。
- 9 qmlaxisformatter 演示不同轴格式的混合C++和QML的示例。
- 10 qmlbars 在QML应用程序中使用bars3D。
- 11 qmlcustominput 在QML应用程序中自定义输入。
- 12 qmllegend 在QML应用程序中显示图形图例。
- 13 qmlmultigraph 在QML应用程序中同时显示多个图形。
- 14 qmloscilloscope 混合 C++ 和 QML 应用程序的示例。
- 15 qmlscatter 在QML应用程序中使用Scatter3D 散点图。
- 16 qmlspectrogram 在QML应用程序中显示频谱图。
- 17 qmlsurface 在QML应用程序中使用Surface3D。
- 18 qmlsurfacelayers 在QML应用程序中将多个系列与Surface3D一起使用。
- 19 rotations 使用旋转的散点点项。
- 20 scatter 在小部件应用程序中使用 Q3DScatter。
- 21 surface 在小部件应用程序中使用 Q3DSurface。
- 22 texturesurface 在 Q3DSurface 中使用纹理。
- 23 volumetric 渲染立方体对象。

### 示例截图展示

#### 01 显示实时音频数据的简单应用程序

```
Examples\Qt-5.15.2\datavisualization\audiolevels	
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/3346aabe0012eb3653fec18b484e731b.png#pic_center)

#### 02 在小部件应用程序中使用 Q3DBars

```
Examples\Qt-5.15.2\datavisualization\bars	 
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/d0b3c5be359d543863f09d74aeb48967.png#pic_center)

#### 03 在小部件应用程序中实现自定义输入处理程序

```
Examples\Qt-5.15.2\datavisualization\custominput
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/25131d6facd5ed39b2b71f38ca5012b9.png#pic_center)

#### 04 将自定义项添加到曲面图

```
Examples\Qt-5.15.2\datavisualization\customitems
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/89bc9ba7e86e167b0c4b6dbad5643d43.png#pic_center)

#### 05 将 Q3DBars 与自定义代理一起使用

```
Examples\Qt-5.15.2\datavisualization\customproxy
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/bb4c13fc95dd6d1c3b14c41ecec02848.png#pic_center)

#### 06 实现自定义输入处理程序以支持轴拖动

```
Examples\Qt-5.15.2\datavisualization\draggableaxes 
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/987eeac612addd3aa437e7b60143fb55.png#pic_center)

#### 07 使用项模型作为 Q3DBars 的数据源

```
Examples\Qt-5.15.2\datavisualization\itemmodel
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/504a0fa2255a5d4dc227e072820fcc6d.png#pic_center)

#### 08 在QML中实现轴拖动

```
Examples\Qt-5.15.2\datavisualization\qmlaxisdrag 
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/7a44988bdf3cc81fc37166060916168e.png#pic_center)

#### 09 演示不同轴格式的混合C++和QML的示例

```
Examples\Qt-5.15.2\datavisualization\qmlaxisformatter
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/ca93386d88c1c298d1226a85e7b49576.png#pic_center)

#### 10 在QML应用程序中使用bars3D

```
Examples\Qt-5.15.2\datavisualization\qmlbars 
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/14f0cece01d7d5649fa743e169fad771.png#pic_center)

#### 11 在QML应用程序中自定义输入

```
Examples\Qt-5.15.2\datavisualization\qmlcustominput
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/fd4b7e5e60b5bfceb8d0eb50f7b1f992.png#pic_center)

#### 12 在QML应用程序中显示图形图例

```
Examples\Qt-5.15.2\datavisualization\qmllegend
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/1a8b200448827c6dc3ccae4cbe27e42e.png#pic_center)

#### 13 在QML应用程序中同时显示多个图形

```
Examples\Qt-5.15.2\datavisualization\qmlmultigraph
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/b9606925b0c52306f5bbc84fc49f1343.png#pic_center)

#### 14 混合 C++ 和 QML 应用程序的示例

```
Examples\Qt-5.15.2\datavisualization\qmloscilloscope 
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/f6f7851289155341b08bd759d5124f86.png#pic_center)

#### 15 在QML应用程序中使用Scatter3D 散点图

```
Examples\Qt-5.15.2\datavisualization\qmlscatter
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/73435e03b41c665d9065450362ae0d53.png#pic_center)

#### 16 在QML应用程序中显示频谱图

```
Examples\Qt-5.15.2\datavisualization\qmlspectrogram
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/5abdf93ea36dace9385321889621ce1f.png#pic_center)

#### 17 在QML应用程序中使用Surface3D

```
Examples\Qt-5.15.2\datavisualization\qmlsurface
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/b4afe0f4716acbe9f170183d6679eb15.png#pic_center)

#### 18 在QML应用程序中将多个系列与Surface3D一起使用

```
Examples\Qt-5.15.2\datavisualization\qmlsurfacelayers
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/f4b3cf67ecafe2820e1d9e8bbd5596ac.png#pic_center)

#### 19 使用旋转的散点点项

```
Examples\Qt-5.15.2\datavisualization\rotations
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/939856c2f4d15f3c2723c202b4be1203.png#pic_center)

#### 20 在小部件应用程序中使用 Q3DScatter

```
Examples\Qt-5.15.2\datavisualization\scatter
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/1eeef5878b7c59fbc9aca6daa17933cc.png#pic_center)

#### 21 在小部件应用程序中使用 Q3DSurface

```
Examples\Qt-5.15.2\datavisualization\surface
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/3c2985dd34def8b39783dfc539cee681.png#pic_center)

#### 22 在 Q3DSurface 中使用纹理

```
Examples\Qt-5.15.2\datavisualization\texturesurface 
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/ae3b65e7c7d8e254b06276a5a651c99f.png#pic_center)

#### 23 渲染立方体对象

```
Examples\Qt-5.15.2\datavisualization\volumetric
AI写代码1
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/ce094895c3ff2b30e9e8f08660eeac83.png#pic_center)

# csdn参考文档2

# Qwt 7.0 新特性介绍 — 更现代、更强大的Qt数据可视化库

上篇文章[《Qwt7.0-打造更美观高效的Qt开源绘图控件库》](https://zhuanlan.zhihu.com/p/1943439538128138418)介绍了我将打造的 Qwt 7.0 ，这里展示一下当前的一些成果。

得益于AI的快速发展，Qwt7.0最近也进行了快速迭代，后面很多想法都通过`opencode`+`oh-my-opencode`+`superpowers`+`GLM5模型`实现的，这套组合下来完全满足日常的开发，具体调校可以看我另外一个文章：[《AI 编程工具的经验及多智能体调校》](https://zhuanlan.zhihu.com/p/2027164528606032743)

Qwt7+的仓库地址：

Github：https://github.com/czyt1988/QWT

Gitee：[https://gitee.com/czyt1988/QWT](https://github.com/czyt1988/QWT)

在这个项目的Github里有个很有意思的issue，[其实 Qt 还有以下两种绘图库可用:https://github.com/czyt1988/QWT/issues/2](https://github.com/czyt1988/QWT/issues/2)，它提到了Qt可行的另外一个绘图库，是`ImGui+ImPlot`的结合，能实现openGL的高性能渲染和2D+3D的绘图，我认真学习了一下`ImGui+ImPlot`,觉得很有意思

于是我蹭着在过年的时候，又封装了一个库叫`QIm`，把`ImGui+ImPlot`嵌入到了Qt中，实现像普通Qt窗口那样简单的使用`ImGui+ImPlot`

QIm的地址：

Github：https://github.com/czyt1988/QIm

Gitee：https://gitee.com/czyt1988/QIm

效果：

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/ca1a7c75762c4feeb71c13cb9bdc3df3.png#pic_center)

我觉得这是下一代Qt最佳绘图可视化的库，拥有非常高的性能和自由度。这个项目也是得益于AI，能快速迭代开发，基本上也是[`opencode`+`oh-my-opencode`+`superpowers`+`GLM5/GLM5.1模型`](https://zhuanlan.zhihu.com/p/2027164528606032743)实现的

关于AI编程，尤其在C++/Qt下的AI Coding还有很多想讲的，等有空再写一下，这里主要介绍Qwt 7的一些新特性

------

Qwt 7.0 是基于原版 Qwt 6.2.0 的现代化改进版本，遵循 Qwt 的开源协议（LGPL）。这个版本带来了**C++11/17标准支持**、**CMake构建系统**、**单文件引入方式**、**更多的交互**、**3D绘图**等功能，可以让数据可视化开发更加便捷高效，下面逐一介绍一下。

### 2D/3D绘图一体化

> qwt同时支持2D/3D

Qwt 7.0 将原 `QwtPlot3D` 库整合进来，实现了 **2D和3D绘图的一体化支持**。现在一个库就能同时满足二维和三维数据可视化需求。

#### 3D绘图模块

Qwt 7.0 内置完整的3D绘图能力，支持：

- ✅ **多种绘图类型**：表面图、网格图、参数曲面、函数绘图等
- ✅ **OpenGL渲染**：高性能三维渲染，流畅的交互体验
- ✅ **交互操作**：鼠标旋转、缩放、平移视角
- ✅ **光照和材质**：真实感光照效果和材质配置
- ✅ **颜色映射**：根据Z值自动映射颜色，支持颜色条

#### 3D绘图效果

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/6062668ceeab41aea81d00ac4329fa48.png#pic_center)

#### 核心类介绍

| 类名               | 说明                             |
| ------------------ | -------------------------------- |
| `Qwt3DPlot`        | 3D绘图基类，提供基本框架和交互   |
| `Qwt3DSurfacePlot` | 3D表面图，显示连续曲面           |
| `Qwt3DGridPlot`    | 3D网格图，显示离散网格数据       |
| `Qwt3DFunction`    | 3D函数绘图，根据数学函数生成曲面 |

具体可点击此链接了解-[Qwt-3D绘图简介: https://czyt1988.github.io/QWT/zh/use-guide/3d-plot/](https://czyt1988.github.io/QWT/zh/use-guide/3d-plot/)

### 架构与构建升级

#### C++11/17 标准支持

Qwt 7.0 全面拥抱现代 C++ 标准：

- **Qt5.12+**：使用 C++11 标准
- **Qt6**：使用 C++17 标准

这意味着您可以使用现代 C++ 特性，如 `auto`、`nullptr`、`override`、`final`、lambda 表达式、智能指针等，代码更加简洁和安全。

#### CMake 构建系统

告别传统的 qmake，Qwt 7.0 采用现代化的 CMake 构建系统：

```cmake
find_package(qwt REQUIRED)
# 2D绘图
target_link_libraries(${PROJECT_NAME} PRIVATE qwt::plot)
# 3D绘图
target_link_libraries(${PROJECT_NAME} PRIVATE qwt::plot3d)
AI写代码cmake12345
```

#### 单文件引入方式

Qwt 7.0 提供了一种极简的引入方式 —— 将整个库合并为单文件：

- `src-amalgamate/QwtPlot.h` — 合并后的单一头文件
- `src-amalgamate/QwtPlot.cpp` — 合并后的单一源文件

只需将这两个文件加入您的项目，无需复杂的构建配置，特别适合小型项目或快速原型开发。

### QwtFigure — 多绘图布局容器

`QwtFigure` 是 Qwt 7.0 最重要的新增功能之一，提供类似 `matplotlib Figure` 的多绘图布局能力。

#### 功能概述

`QwtFigure` 是一个用于组织和管理多个 `QwtPlot` 绘图组件的容器窗口，提供：

- **归一化坐标布局**：使用 `[0,1]` 范围内的坐标系统进行相对位置控制
- **网格布局**：行列式的网格排列，参考 `matplotlib` 的 `subplot` 方式
- **寄生绘图支持**：在同一个绘图区域内创建多个独立坐标轴
- **图形导出功能**：支持图片输出

#### 坐标轴对齐功能

当多个子绘图的刻度范围不同时，刻度线可能不对齐，影响视觉效果。

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/15d63b81801547eab770fc737730199a.png#pic_center)

QwtFigure 提供了坐标轴对齐功能：通过 `QwtFigure::addAxisAlignment` 函数可以指定子绘图的坐标轴进行对齐：

对齐后的效果：

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/5afdd7f6a6b242128e02525f2d165a2a.png#pic_center)

#### 交互式操作蒙版

`QwtFigureWidgetOverlay` 提供了在 `QwtFigure` 上进行交互式操作的功能：

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/990c1836d35b434eb52931f8733b34ee.gif#pic_center)

- 支持鼠标拖拽调整子绘图的位置和大小
- 支持选择当前激活的绘图组件
- 提供清晰的可视化反馈（边框、控制点、尺寸信息）

具体可点击此链接了解-[Qwt-figure窗口容器: https://czyt1988.github.io/QWT/zh/use-guide/figure-widget/](https://czyt1988.github.io/QWT/zh/use-guide/figure-widget/)

### 寄生绘图 — 多坐标轴系统

寄生绘图（Parasite Axes）允许在同一绘图区域内创建任意多个独立坐标轴，完美解决多Y轴、多X轴的复杂绘图需求。

#### 工作原理

寄生绘图与宿主绘图共享绘图区域（透明背景），但拥有独立的坐标系统。当宿主绘图被销毁时，寄生绘图也会自动销毁，生命周期自动管理。
![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/47c72fbf32924cba95f4bc9582efbca3.png#pic_center)

详细使用方法请参考-[Qwt-多坐标轴的创建: https://czyt1988.github.io/QWT/zh/use-guide/parasite-axes/](https://czyt1988.github.io/QWT/zh/use-guide/parasite-axes/)

### 交互功能重构

Qwt 7.0 对绘图交互进行了全面重构，提供更友好的体验

#### 实时平移 — QwtPlotPanner

原版 Qwt 的 `QwtPanner` 使用位图缓存进行平移，平移过程中无法看到数据的实时变化。Qwt 7.0 重构了 `QwtPlotPanner`，原版的`QwtPlotPanner` 改名为 `QwtPlotCachePanner`

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/7b50b031d41e4a96aac78c2469ccfbc3.gif#pic_center)

详细使用方法及效果请参考-[Qwt-平移工具: https://czyt1988.github.io/QWT/zh/use-guide/panner/](https://czyt1988.github.io/QWT/zh/use-guide/panner/)

特性：

- 线性坐标轴、对数坐标轴、日期时间坐标轴全支持
- 多坐标轴实时同步移动
- 平移过程中绘图实时刷新

#### 整体画布缩放 — QwtPlotCanvasZoomer

原版 `QwtPlotZoomer` 只能绑定两个坐标轴，无法处理四轴或有多个坐标轴同时缩放的场景。Qwt 7.0 新增 `QwtPlotCanvasZoomer`，无需指定坐标轴，自动处理整个画布的缩放：

具体可参见-[Qwt-缩放工具: https://czyt1988.github.io/QWT/zh/use-guide/zoomer/](https://czyt1988.github.io/QWT/zh/use-guide/zoomer/)

#### 类名变更说明

为保持命名清晰，部分类名进行了调整：

| 原名称          | 新名称                | 说明                              |
| --------------- | --------------------- | --------------------------------- |
| `QwtPlotZoomer` | `QwtPlotAxisZoomer`   | 只能绑定2个坐标轴，更名为轴缩放器 |
| -               | `QwtPlotCanvasZoomer` | 新增：整体画布缩放器              |
| `QwtPanner`     | `QwtCachePanner`      | 带缓存的平移器                    |
| `QwtPlotPanner` | `QwtPlotCachePanner`  | 带缓存的绘图平移器                |
| -               | `QwtPlotPanner`       | 新增：实时平移器                  |

### 坐标轴内置交互动作

坐标轴交互动作允许用户通过鼠标直接操作坐标轴，体验类似 `QCustomPlot`和`ImPlot` 的交互方式。

#### 功能演示

**坐标轴拖动操作：**

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/13be8ff8aacd4a439f39683288b10f92.gif#pic_center)

- 左键单击选中坐标轴
- 拖动移动坐标轴范围
- 点击坐标轴外位置取消选中

**坐标轴滚轮缩放：**

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/55b8d99f668d4b81ade670dbbc08a2a9.gif#pic_center)

- 左键选中坐标轴
- 滚轮缩放，缩放中心为鼠标位置

详细使用方法及效果请参考-[Qwt-坐标轴交互动作: https://czyt1988.github.io/QWT/zh/use-guide/scale-builtin-action/](https://czyt1988.github.io/QWT/zh/use-guide/scale-builtin-action/)

### 数据拾取功能

新增`QwtPlotSeriesDataPicker` 提供了数据拾取功能，鼠标移动时实时显示数据点信息

提供两种拾取模式

**Y值拾取模式：**

显示当前 X 位置对应所有曲线的 Y 值，支持线性插值计算。

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/5ab05314f20144bdbe0e5b20d473dbd2.png#pic_center)

**最近点拾取模式：**

计算距离鼠标最接近的点进行拾取，适合峰值数据拾取场景。

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/e2d4d5a62a0c412ab98b3de5cfd5ebe8.gif#pic_center)

详细使用方法及效果请参考-[Qwt-数据拾取工具: https://czyt1988.github.io/QWT/zh/use-guide/pick-value/](https://czyt1988.github.io/QWT/zh/use-guide/pick-value/)

针对大数据集，Qwt 7 提供了窗口搜索算法：

- 默认启用阈值：1000 个数据点
- 搜索窗口默认为曲线点数的 5%
- 避免全曲线遍历，大幅提升性能

### 新增图表类型

#### 箱线图 — QwtPlotBoxChart

`QwtPlotBoxChart` 提供完整的箱线图（Box-and-Whisker Plot）支持，直观展示数据统计分布特征。

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/74187a6e8039463cabf79beb36e843bf.png#pic_center)

- 支持预计算数据和原始数据自动计算两种方式
- 多种须须计算方法：Tukey(1.5×IQR)、百分位数、最小最大值、标准差、标准误
- 三种箱体样式：矩形、菱形、缺口形
- 垂直和水平方向切换
- 异常值自动检测、自定义符号和抖动显示

详细使用方法请参考-[箱线图使用指南：https://czyt1988.github.io/QWT/zh/use-guide/boxchart/](https://czyt1988.github.io/QWT/zh/use-guide/boxchart/)

### 其他实用功能

#### 刻度朝内显示

v7.2.1 新特性，支持将坐标轴刻度线显示在绘图区域内部，适合紧凑布局场景。

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/4df149b830a041b29d0519fa7c3e4607.png#pic_center)

详细使用方法请参考-[刻度朝内显示：https://czyt1988.github.io/QWT/zh/use-guide/ticks-inside/](https://czyt1988.github.io/QWT/zh/use-guide/ticks-inside/)，示例代码位于 `examples/2D/ticks_inside`

#### NaN/Inf 异常值处理

Qwt 7.0 对数据中的异常值（NaN、Inf）进行了完善处理：

- `QwtPointMapper` 添加异常值处理，数据异常不会导致坐标映射错误
- 数据范围判断增加异常值过滤
- 绘图更加稳定，不会因异常数据崩溃

#### QwtGridRasterData 网格插值

新增 `QwtGridRasterData` 类，相比 `QwtMatrixRasterData`：

- 支持二维数据表输入
- 支持 X/Y 轴网格插值
- 更灵活的光谱图数据处理

> 主要用于热力图

### 迁移指南

- Qt5.12+ 完全兼容
- Qt6 完全支持
- 大部分 Qwt 6.x 代码可直接使用，仅需少量类名替换

### 总结

Qwt 7.0 是一次全面的现代化升级：

| 类别            | 新特性                                 |
| --------------- | -------------------------------------- |
| **架构升级**    | C++11/17、CMake构建、单文件引入        |
| **2D/3D一体化** | QwtPlot3D融合、统一库支持2D和3D绘图    |
| **布局功能**    | QwtFigure多绘图容器、寄生绘图多坐标轴  |
| **交互改进**    | 实时平移、整体画布缩放、坐标轴内置交互 |
| **数据拾取**    | Y值拾取、最近点拾取、智能插值          |
| **图表类型**    | 箱线图、刻度朝内显示、3D表面图/网格图  |
| **稳定性**      | NaN/Inf处理、异常值过滤                |

这些新特性让 Qwt 成为一个更现代、更强大、更易用的 Qt 数据可视化库，**一个库同时支持2D和3D绘图**，适合科学计算、工程应用、数据分析等多种场景。

------

Github：https://github.com/czyt1988/QWT

Gitee：[https://gitee.com/czyt1988/QWT](https://github.com/czyt1988/QWT)

另外大家也可以观摩我新开的QIm库

Github：https://github.com/czyt1988/QIm

Gitee：https://gitee.com/czyt1988/QIm

ttps://github.com/czyt1988/QWT](https://github.com/czyt1988/QWT)

Gitee：[https://gitee.com/czyt1988/QWT](https://github.com/czyt1988/QWT)

另外大家也可以观摩我新开的QIm库

Github：https://github.com/czyt1988/QIm

Gitee：https://gitee.com/czyt1988/QIm

在AI的辅助下，目前两个库我都会同步更新

系列教程

- [第 1 篇：快速入门与核心新特性概览](https://blog.csdn.net/czyt1988/article/details/162582882)
- [第 2 篇：曲线绘图详解 —— 从基础到百万级数据性能优化](https://blog.csdn.net/czyt1988/article/details/162583471)
- [第 3 篇：常用图表类型实战 —— 柱状图、散点图、箱线图与直方图](https://blog.csdn.net/czyt1988/article/details/162583714)
- [第 4 篇：高级科学图表 —— 光谱图、向量场、K线图与极坐标绘图](https://blog.csdn.net/czyt1988/article/details/162583886)
- [第 5 篇：多坐标轴与多绘图布局 —— 寄生绘图与 QwtFigure 容器](https://blog.csdn.net/czyt1988/article/details/162584013)
- [第 6 篇：交互功能详解 —— 平移、缩放、坐标轴交互与数据拾取](https://blog.csdn.net/czyt1988/article/details/162584258)
- [第 7 篇：3D 数据可视化 —— OpenGL 高性能三维绘图](https://blog.csdn.net/czyt1988/article/details/162584375)
- [第 8 篇：坐标轴与刻度系统 —— 刻度引擎、网格、图例与刻度朝内](https://blog.csdn.net/czyt1988/article/details/162584438)
- [第 9 篇：控件与辅助元素 —— 滑块旋钮、标记与装饰](https://blog.csdn.net/czyt1988/article/details/162584506)
- [第 10 篇：总体架构解析 —— 从单体到三库模块化的演进](https://blog.csdn.net/czyt1988/article/details/162584657)
- [第 11 篇：matplotlib 风格绘图 —— QwtPyPlot 接口详解](https://blog.csdn.net/czyt1988/article/details/162596713)

- 上一篇：

  [Qwt7.0-打造更美观高效的Qt开源绘图控件库](https://blog.csdn.net/czyt1988/article/details/150787970)

- 下一篇：

  [Qt高性能绘图库QIm——实现二维三维科学绘图](https://blog.csdn.net/czyt1988/article/details/161960917)

# csdn参考文档3

# Qt高性能绘图库QIm——实现二维三维科学绘图

这个项目80%都是AI干活，工具是`OpenCode` + `Oh-My-Openagent`，主力模型是`glm-5.1` + `kimi-k2.5` + `qwen3.6`

目前我的主力ai工具是qwen code+qwen3.7-max

> **项目地址**：
>
> https://github.com/czyt1988/QIm
> https://gitee.com/czyt1988/qim

在 Qt 里做高性能数据可视化目前只有两种选择：`QCustomPlot` 和 `Qwt`（`Qt Charts`性能完全不在一个量级），这两个库该有的2D功能都有，文档也算齐全，有降采样算法支撑百万点绘制，但`QCustomPlot`是GPL协议，你的项目使用也要使用GPL协议，`Qwt`协议和性能都比`QCustomPlot`好，但不够美观，所以目前我也针对`Qwt`进行了改进，可参考:[Qwt 7.0 新特性介绍 — 更现代、更强大的Qt数据可视化库](https://zhuanlan.zhihu.com/p/2027883844636779917)。

在`Qwt`项目中，有一个[Issues](https://github.com/czyt1988/QWT/issues/2)，提出了Qt另一种高性能绘图的方案：基于`Dear ImGui`的 `ImPlot`,它是MIT协议、GPU 加速、即时模式渲染，支持多种绘图，还有3D版的`ImPlot3D`,目前用于游戏引擎、调试工具

在了解后今年过年的时候自己上手试了发现的确效果很好，但它也有一些问题，主要是`ImGui`的编程范式跟 Qt 开发者习惯的保留模式差的较远，和Qt的信号槽对接需要做较多的工作，于是我就把它进行二次封装，形成了QIm这个库

**QIm 做的事很简单：把 ImGui 生态里 ImPlot 和 ImPlot3D 用 Qt 开发者最熟悉的方式包装起来。**

具体来说，就是把 ImGui 的绘图函数用渲染节点进行抽象，整个渲染过程就是对渲染树的遍历，每个节点有对应的开始渲染和结束渲染方法，节点之间会有父子关系，也能更好的匹配ImGui的begin/end方法。同时ImGui 属性映射为 `Q_PROPERTY`，交互事件通过 Qt 信号槽传递。这样就不需要学 ImGui 那一套即时模式的写法，直接用最熟悉的 Qt 范式就能构建高性能的数据可视化图表

下面是一些效果图

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/a0b6e9a697034b559b865e157a8ca5e2.png)

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/e96fd59b8fe843a19145fb45a1072c20.png)

通过QIm，你能在任意窗口嵌入ImPlot/ImPlot3D，实现数据可视化

### 从即时模式到保留模式

原生 ImGui 的写法是下面这样的，——这段代码在OpenGL的`paintGL`函数里，每帧都要完整跑一遍：

```cpp
if (ImGui::Begin("Window")) {
    if (ImPlot::BeginPlot("Plot")) {
        ImPlot::PlotLine("sin", x.data(), y.data(), n);
        ImPlot::EndPlot();
    }
    ImGui::End();
}
AI写代码cpp运行1234567
```

你会发现你没办法"持有"一个绘图对象。每次渲染都得重新声明，属性不能持久保存，也没有信号通知你数据变了。

QIm 把这套逻辑换成了面向对象加对象树的方式,把各种功能封装成`QIm**Node`：

```cpp
auto window = new QImWidgetNode(root);
window->setWindowTitle("Window");

auto plot = new QImPlotNode(window);  
plot->setTitle("Plot");

auto line = new QImPlotLineItemNode(plot);// 自动成为 plot 的子节点,等效plot->addChildNode(line)
line->setData(x, y);                  // 设置数据
line->setColor(Qt::red);              // 属性直接使用Qt的类
AI写代码cpp运行123456789
```

这么一换，ImGui 的每帧声明变成了 Qt 开发者最熟悉的样子。对象树自动管理生命周期——父节点析构时子节点跟着销毁，不用你操心内存。

### 对象树是核心设计

QIm 里万物皆节点。每个图表元素都是一个 `QImAbstractNode` 的子类，通过父子关系组织成树：

```
QImFigureWidget (顶层 QWidget)
├── QImSubplotsNode (子图布局)
│   ├── QImPlotNode (2D 子图)
│   │   ├── QImPlotLineItemNode (折线)
│   │   ├── QImPlotScatterItemNode (散点)
│   │   ├── QImPlotAxisInfo (坐标轴)
│   │   └── QImPlotLegendNode (图例)
│   └── QImPlot3DNode (3D 子图)
│       ├── QImPlot3DSurfaceItemNode (曲面)
│       └── QImPlot3DAxisInfo (坐标轴)
AI写代码12345678910
```

这套结构带来的好处：

- 子节点顺序就是渲染顺序，控制 Z-Order 非常直接
- 如果想加自定义组件，只要继承 `QImAbstractNode`，实现 `beginDraw()` 和 `endDraw()` 就行
- 树遍历由基类搞定，你只关心自己的渲染逻辑

### Qt 生态集成

QIm 虽然底层是 ImGui，但对外暴露的接口完全是 Qt 风格的。每个节点的属性变更都通过 `Q_PROPERTY` 暴露，`NOTIFY` 信号会在值变化时自动发射：

```cpp
auto line = new QIM::QImPlotLineItemNode(plot);
line->setLabel("Channel A");

connect(line, &QIM::QImPlotLineItemNode::labelChanged, this, [](const QString& name) {
    qDebug() << "Label changed to:" << name;
});
AI写代码cpp运行123456
```

如果你用过 Qt 的属性动画框架或者样式表，你会发现这套机制配合起来很自然——因为 QIm 的属性本身就是 Qt 的标准 `Q_PROPERTY`。

`QImFigureWidget` 是一站式的绘图窗口，继承自 `QOpenGLWidget`，开箱即用：

```cpp
auto figure = new QIM::QImFigureWidget(this);
figure->setSubplotGrid(2, 2);  // 2x2 子图布局

auto plot1 = figure->createPlotNode();    // 2D 子图
auto plot2 = figure->createPlot3DNode();  // 3D 子图
AI写代码cpp运行12345
```

### 2D 绘图：12 种图表类型，6 条坐标轴

QIm 目前已经封装了 ImPlot 上你能用到的所有主流图型。折线图、散点图、阶梯图这些基础的不说了，柱状图（包括分组柱状）、饼图、热力图、二维直方图、填充区域、误差棒、茎叶图……你大概率需要的都有

每种子图支持最多 6 条坐标轴（x1/y1/x2/y2/x3/y3），坐标轴范围约束有 `Always`（刚性锁定）和 `Once`（首次自适应）两种模式。轴标签、刻度、网格线、图例这些细节都能精细控制
![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/d38b7e4f7d4247bba54e27e795aa71f9.gif)![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/c23f57da482249329d51669f8d098373.gif)
![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/408adc8463714672a5ccb1d13a76a01d.gif)

也支持ImPlot里的各种鼠标操作事件

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/2726aa725e1145b8936b82f13988a863.gif)

### 3D 绘图

三维这块封装了 ImPlot3D，支持曲线图、散点图、曲面图、曲面网格、三角剖分、四边形、图像贴图、文本标注。曲面图内置了 Viridis、Plasma、Inferno 等科学配色方案，做热力分布、地形高程这种场景都能满足。

交互方式和 ImPlot3D 原生一致：

- 左键拖拽平移视角
- 右键拖拽旋转视角
- 滚轮或中键缩放
- 右键双击重置旋转

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/c81287fded06471da36b184e3a58bf78.gif)

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/bc48b2b766d243a68ce00a27308e46ea.png)

### 简单的代码演示

QIm 环境要求：CMake 3.15+，C++17，Qt 5.14+（需要 Core、Gui、Widgets、OpenGL）。Qt 6 的话额外加一个 `OpenGLWidgets`。

编译安装直接CMake：

```bash
mkdir build && cd build
cmake -S . -B build -G "Visual Studio 16 2019" -A x64 -DCMAKE_PREFIX_PATH="C:/Qt/6.7.3/msvc2019_64"
cmake --build build --config Release
cmake --install .
AI写代码bash1234
```

项目直接通过`find_package`集成：

```cmake
find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Gui Widgets OpenGL REQUIRED)
if(${QT_VERSION_MAJOR} EQUAL 6)
    find_package(Qt${QT_VERSION_MAJOR} COMPONENTS OpenGLWidgets REQUIRED)
endif()
find_package(QIm REQUIRED)

target_link_libraries(your_app PRIVATE
    QIm::Core
    QIm::Widgets
)
AI写代码cmake1234567891011
```

30 行代码就能跑起来一个 2x1 子图的窗口：

```cpp
#include <QImFigureWidget.h>

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr) : QMainWindow(parent) {
        auto figure = new QIM::QImFigureWidget(this);
        setCentralWidget(figure);
        figure->setSubplotGrid(2, 1);

        // 子图 1：二次曲线
        auto plot1 = figure->createPlotNode();
        plot1->addLine({0, 1, 2, 3, 4}, {0, 1, 4, 9, 16}, "二次曲线");

        // 子图 2：正弦 + 余弦
        auto plot2 = figure->createPlotNode();
        plot2->setLegendEnabled(true);
        std::vector<double> x2 = {0, 1, 2, 3, 4};
        std::vector<double> sin_y, cos_y;
        for (double v : x2) {
            sin_y.push_back(std::sin(v));
            cos_y.push_back(std::cos(v));
        }
        plot2->addLine(x2, sin_y, "sin(x)")->setColor(Qt::red);
        plot2->addLine(x2, cos_y, "cos(x)")->setColor(Qt::blue);
    }
};
AI写代码cpp运行123456789101112131415161718192021222324252627
```

### 大数据量的处理：降采样 + SIMD 加速

超过 50 万点的场景，不管哪个渲染引擎都得降采样。你的屏幕只有一千多个像素宽，但数据可能有上百万个点——绝大多数点都挤在同一个像素列里互相重叠，GPU 却在拼命渲染那些永远不可能被眼睛分辨的点。QCustomPlot和Qwt都提供了降采样算法，其中`QCustomPlot`是默认开启，`Qwt`是需要手动指定，这就是导致好多人使用感觉`QCustomPlot`性能比`Qwt`好的原因，实测同样开启降采样，`Qwt`性能好于`QCustomPlot`

`ImPlot`在大数据量渲染也会有很大压力，如果不启用降采样，大数据量下的渲染性能还不如开启了降采样的`Qwt`和`QCustomPlot`（CPU）

很可惜的是`ImPlot`并没有内置降采样算法，为了解决超大规模点渲染问题，QIm 内置了两套降采样算法：**LTTB** 和 **MinMaxLTTB**

LTTB（Largest Triangle Three Buckets）是时序数据降采样里公认视觉保真最好的。它的思路是：把数据分成桶，对每个桶选一个点——选那个与前后桶构成"面积最大三角形"的点。面积越大意味着偏离直线插值越远，也就是视觉上最"醒目"的点——峰值、谷值、拐点都被优先保留

MinMaxLTTB 是 LTTB 的加速版，思路是在每个桶里先用极值查找筛出一批候选点，再在这些候选点上做 LTTB 的面积选择。因为候选点通常只有原始点数的 1/2 到 1/4，面积计算量大幅减少，视觉质量和纯 LTTB 几乎没有区别

不过 MinMaxLTTB 里面还有一个瓶颈——极值查找（argmin/argmax）本身是个标量循环：逐个比较，一次处理一个 double，只用了现代 CPU 计算能力的 1/4。为此专门为极值查找进行了CPU指令集优化

#### SIMD 加速

QIm 为此专门实现了一个 SIMD 加速的极值查找模块 `QImSimdArgMinMax`，在一条遍历里同时找出最小值和最大值。核心思路是用 CPU 的 SIMD 寄存器一次处理多个 double（这是最新C++26标准才提出的std::simd的内容）：

| 执行路径 | SIMD 宽度        | 覆盖 CPU                   | 加速比 |
| -------- | ---------------- | -------------------------- | ------ |
| AVX2     | 4 doubles/条指令 | 2013年后的 x86（Haswell+） | 3-5x   |
| SSE4.2   | 2 doubles/条指令 | 2010年后的 x86（几乎全部） | 2-3x   |
| 标量     | 1 double/条指令  | 兜底                       | 1x     |

运行时通过 CPUID 检测当前 CPU 支持的指令集，用函数指针锁定最优路径。同一个 exe 在老 CPU 上走标量、在新 CPU 上走 AVX2，不需要分发多个版本

每条折线可以单独设置降采样算法和阈值：

```cpp
line->setDownsampleAlgorithm(QIM::QImDownsampleAlgorithm::MinMaxLTTB);
line->setDownsampleThreshold(20000);  // 超过 2 万点自动触发
AI写代码cpp运行12
```

默认的 `Auto` 模式会根据数据量自动选择——小于 1 万点不降采样，1 万到 10 万用 LTTB，超过 10 万自动切到 MinMaxLTTB 走 SIMD 加速路径

### 性能：跟 QCustomPlot 和 Qwt 对比

这是我个人电脑的测试结果，我个人电脑是一个小mini主机，配置一般，集成显卡，在100万点的实时刷新模式下，QIm比Qwt和QCustomplot最优的性能还快3倍

#### 系统信息

| 项目     | 值                                     |
| -------- | -------------------------------------- |
| 操作系统 | Windows 11 Version 25H2                |
| CPU      | 12th Gen Intel® Core™ i7-1260P (16 核) |
| 内存     | 32536 MB                               |
| GPU      | Intel® Iris® Xe Graphics               |
| 显存     | 未知                                   |
| OpenGL   | 4.6.0 - Build 30.0.101.3111            |
| 屏幕     | 2560x1440                              |
| 磁盘     | Unknown                                |
| Qt       | 6.7.3 (runtime: 6.7.3)                 |
| 编译器   | MSVC 1929                              |

#### 测试选项

- 降采样: 可配置渲染是否开启降采样，三个库都支持降采样
- OpenGL: 配置是否开启OpenGL加速，主要针对Qwt和QCustomPlot

下面只放100万点的测试结果，专门的对比测试我会专门一个文档里介绍

#### 1M（100万） 数据点测试结果

##### 开启降采样

| 库                  | 设置时间 (ms) | 渲染时间 (ms) | FPS     | 内存 (MB) | OpenGL | 降采样 |
| ------------------- | ------------- | ------------- | ------- | --------- | ------ | ------ |
| QIm                 | 6.00          | 16.84         | 59.3824 | 64.04     | ✓      | ✓      |
| Qwt                 | 7.00          | 44.14         | 22.6552 | 20.22     | ×      | ✓      |
| Qwt(OpenGL)         | 7.00          | 153.92        | 6.4969  | 91.92     | ✓      | ✓      |
| QCustomPlot         | 45.00         | 45.60         | 21.9298 | 20.83     | ×      | ✓      |
| QCustomPlot(OpenGL) | 42.00         | 50.48         | 19.8098 | 31.32     | ✓      | ✓      |

Qwt和QCustomplot都提供了OpenGL加速，但实际加速效果一般

##### 不开启降采样

| 库                  | 设置时间 (ms) | 渲染时间 (ms) | FPS     | 内存 (MB) | OpenGL | 降采样 |
| ------------------- | ------------- | ------------- | ------- | --------- | ------ | ------ |
| QIm                 | 7.00          | 85.50         | 11.6959 | 658.96    | ✓      | ×      |
| Qwt                 | 7.00          | 125.12        | 7.9923  | 21.30     | ×      | ×      |
| Qwt(OpenGL)         | 9.00          | 140.50        | 7.1174  | 47.56     | ✓      | ×      |
| QCustomPlot         | 44.00         | 179.46        | 5.5723  | 20.80     | ×      | ×      |
| QCustomPlot(OpenGL) | 44.00         | 174.98        | 5.7149  | 38.64     | ✓      | ×      |

完整测试代码在 `benchmark/performance` 目录下，不同GPU有不同的结果，我的电脑GPU较弱，CPU较强，得出的结果，如果你的电脑GPU强的话，QIm的表现会更强

> 从上面的测试也能看出，降采样在提升绘图性能起了至关重要的作用

### 当前进展和已知限制

2D 方面目前 Line、Scatter、Stairs、Bars、BarGroups、Shaded、ErrorBars、Stems、InfLines、PieChart、Text、Dummy、Histogram、Heatmap、Histogram2D、Digital、Image 都已经完成。3D 方面 Line、Scatter、Surface、Mesh、Triangle、Quad、Image、Text 都已可用。

主流的图表类型基本都覆盖了，剩下的主要是些补充性的功能，QML 集成还在计划中。

已知的限制主要有三个：

- 字体不能随便用，需要先 `AddFontFromFileTTF` 加载字体文件
- 不支持虚线、点划线这样的线型（这里受限于ImGui,目前最新版已经提供，ImPlot正在规划中）
- 内存开销比 Qwt/QCustomPlot 大 （架构特性决定的）

------

虽然这个项目80%的活都是AI完成，但能做好的前提是我做了20%的框架搭建和约束制定，后面有空会讲讲大型项目AI Coding的一些经验

> **项目地址**：
>
> https://github.com/czyt1988/QIm
> https://gitee.com/czyt1988/qim
>
> 

# 参考源码

## 1. https://gitcode.com/open-source-toolkit/8e939.git

## 2. https://github.com/filipecalasans/realTimePlot

## 3. https://gitcode.com/open-source-toolkit/25588.git







# 扩展，Download QCustomPlot

## https://www.qcustomplot.com/index.php/download

