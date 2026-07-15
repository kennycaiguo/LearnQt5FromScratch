Qt6项目打包发行的核心原理是：提取程序运行所需的核心文件（可执行文件、依赖库、插件等），并将它们整合到一个独立的文件夹中分发。 [[1](https://www.cnblogs.com/tlink/p/19713832)]

以下是分平台（以 Windows 和 Linux 为例）的标准打包发布流程：

第一步：准备 Release 构建

打包前，必须确保你的项目是在 **Release** 模式下编译的。Debug 模式包含调试信息且依赖本地路径，文件体积过大且无法在其他电脑上运行。 [[1](https://blog.csdn.net/delete_you/article/details/131087867)]

1. 打开 Qt Creator。
2. 在左侧面板选择 **Projects**。
3. 将 Build 选项卡下的 Build 配置切换为 **Release**。
4. 重新构建 (Build) 你的项目。构建完成后，在项目的构建目录（如 `build-...-Release/release` 或对应文件夹）中会生成你的 `.exe` 或可执行文件。 [[1](https://developer.aliyun.com/article/1326989)]

第二步：收集依赖库

根据你所在的操作系统，选择对应的工具来自动收集 Qt 运行环境。

Windows 平台

Qt 提供了一个自动化工具 `windeployqt6.exe` 来扫描并复制所需的 DLL 和插件。 [[1](https://doc.qt.io/qt-6/windows-deployment.html), [2](https://doc.qt.io/qt-6/es/windows-deployment.html)]

1. 新建一个空文件夹，命名为 `MyApp`。
2. 将刚才生成的 `你的程序.exe` 复制到该文件夹中。
3. 打开 Qt 提供的命令行工具（例如 **Qt 6.x.x (MinGW...)** 或 MSVC 对应的命令提示符）。
4. 输入以下命令并回车，工具会自动分析依赖并复制到你的文件夹中：
   `windeployqt6.exe 你的程序.exe`
5. *(如果是 QML 项目)* 如果你的项目使用了 QML，需要额外加上 `--qmldir` 参数指向你的源码目录，命令如下：
   `windeployqt6.exe --qmldir 源码目录路径 你的程序.exe`