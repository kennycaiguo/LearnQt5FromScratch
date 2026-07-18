# 参考文档

## 1. https://zhuanlan.zhihu.com/p/487626487

## 2. https://www.cnblogs.com/ybqjymy/p/18070391

## 3. https://gaomf.cn/2016/12/10/OpenCV_and_Qt/

## 4. https://github.com/ritianpig/-/blob/main/C++%E8%AF%BE%E7%A8%8B%E8%B5%84%E6%BA%90.md

## 5. https://developer.aliyun.com/article/948580

## 6. https://developer.aliyun.com/article/1614835





# 参考源码

## 1. https://github.com/developer0hye/RTSP-Client-FFMPEG-OpenCV-ON-QT

## 2. https://github.com/drhalftone/Qt-OpenCV-OpenGL-FFMPEG

## 3. https://github.com/KyrieFeng23/QT5-Image-and-video-processing-software

## 4.https://github.com/nekosilverfox/OpenCV

## 5. https://github.com/lishuwei0424/qt_opencv_demo

## 6. https://github.com/zstar1003/OpenCV-Learning

## 7. https://github.com/pengguanjun/FastCvLearn

## 8. https://github.com/PacktPublishing/Qt-5-and-OpenCV-4-Computer-Vision-Projects

## 9. https://github.com/ShawnZhang31/OpenCV_Tutorials_ZH

## 10. https://github.com/LevickCG/Face_It



# 扩展： [适合学习研究的几个音视频开源框架](https://segmentfault.com/a/1190000045283037)

很多程序员想学习音视频的编程开发，却不知从何学习，因为音视频技术的体系庞大、知识杂糅，一眼望去就令人生怯。那么学习音视频建议站在前人的肩膀上，从优秀的音视频开源框架开始钻研，先熟悉这些开源工具的具体用法，再深入了解这些开源框架的实现代码。

有鉴于此，博主整理了几个流行的音视频开源框架，分别对它们概要说明如下：

## 一、计算机视觉库OpenCV

OpenCV全称Open Source Computer Vision Library，它是一个跨平台计算机视觉和机器学习软件库，可运行于Linux、Windows、Android和MacOS等操作系统。
OpenCV的官网地址为 [https://opencv.org/](https://link.segmentfault.com/?enc=Dzn8o1l202bHlb8b7BHr8g%3D%3D.4pGioHZ2Vuei1ssPcZETO03vumF5aJnXUNf3QDuT8XA%3D) ，它在Github上的源码托管入口页面为 [https://github.com/opencv/opencv](https://link.segmentfault.com/?enc=%2BR449RSzwDnF52o5vs%2FwnQ%3D%3D.cucOE1T0ZrWtMiGgsxgI1VF4aWRwX8o2jmUBCkdML6MP2xxv80PtLUuSnixfy2w9) 。截止2024年8月4日的Github统计，OpenCV项目的星标数为7.73万，副本数为5.57万。
OpenCV在编程实践中的用法主要有下列三种：

### 1、通过Python脚本使用OpenCV

先执行下面命令安装OpenCV的Python支持库。
pip install opencv-python
然后在Python代码的开头通过下面语句导入OpenCV库：
import cv2
接着即可在Python代码中调用OpenCV的各种处理函数了。

### 2、通过Qt在桌面程序中集成OpenCV

先把OpenCV的C++支持库下载到本地目录，再打开Qt的C++工程的CMakeLists.txt，在文件内容的qt_add_executable之前添加下面几行配置，表示指定OpenCV库的头文件目录和库文件目录。

## 添加头文件的所在目录

include_directories(opencv/include)

## 指定lib文件的链接目录

link_directories(opencv/lib)
接着把下面这行配置：
target_link_libraries(test_opencv PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
改成下面几行配置，目的是引入链接新增的OpenCV库文件：

## 设置名叫opencv-libs的库集合，指定它包括哪些so库文件

set(opencv-libs opencv_world480)
target_link_libraries(test_opencv PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${opencv-libs})
接着即可在C++代码中导入OpenCV的头文件，并调用OpenCV的各种处理函数了。

### 3、通过Android Studio在移动App中集成OpenCV

首先下载OpenCV的源码包，解压后找到OpenCV-android-sdk目录，该目录下有两个子目录，分别是和samples和sdk。其中sdk为库工程，App使用OpenCV前都要引用该库工程；samples是样例工程，下面有若干范例模块。
接着把上面的sdk目录集成到Android Studio的App工程中，详细的集成步骤参见《Android App开发进阶与项目实战》一书第12章的“12.2.2  OpenCV简介及其集成”，这里不再赘述。

## 二、计算机图形库学习教程LearnOpenGL

LearnOpenGL是一个开源的OpenGL教程，可供初学者学习如何使用OpenGL来创建3D图形和动画。LearnOpenGL既提供了实体的英文书籍，也提供了免费的英文电子版PDF，官网的电子版PDF下载链接为 [https://learnopengl.com/book/book_pdf.pdf](https://link.segmentfault.com/?enc=Sr4KNRXMn0SJxMuTdq7YnA%3D%3D.7ifBrxCa1R4N27IgEw0kih4PoijHkhjjtj%2Fky7XDakH0430KdEUpO8arm%2FbxGy0R) 。
LearnOpenGL的官网地址为 [https://learnopengl.com/](https://link.segmentfault.com/?enc=T3KNFR6DHEYBPFFuYAWEnA%3D%3D.DV2lwBiLfSqKOc7W5kKUFc3HQh8xrz3QQ2Dhyuy3Q8w%3D) ，它在Github上的源码托管入口页面为 [https://github.com/JoeyDeVries/LearnOpenGL](https://link.segmentfault.com/?enc=%2BTZICoCvllS5%2FRs5slQWlQ%3D%3D.gq6aPRALUbcXQRR%2Bxw77lbLoM2kMGX4iFDfaSD4S0KHB%2Bb7Xg1TUq%2FvzVRZukAdt) 。截止2024年8月4日的Github统计，LearnOpenGL项目的星标数为1.07万，副本数为0.27万。

## 三、多媒体处理框架FFmpeg

FFmpeg全称Fast Forward MPEG，意思是快速掌握MPEG，它是一个开源的跨平台多媒体处理框架，可运行于Linux、Windows、Android和MacOS等操作系统。FFmpeg不仅能够处理音频、视频文件，还能处理图像、字幕等文件，可谓功能强悍。
FFmpeg的官网地址为 [https://ffmpeg.org/](https://link.segmentfault.com/?enc=hGIX9elQqgcBsUnAwUnHbw%3D%3D.lUi8UNFCga%2F4bstV%2BciJdpr%2BGe%2FiOfz1CMSLY7dZx3M%3D) ，它在Github上的源码托管入口页面为 [https://github.com/FFmpeg/FFmpeg](https://link.segmentfault.com/?enc=7dZcivPeuEzW%2Foftzo3mFA%3D%3D.j0EbBlth6y54kwPTlqmThRfjhi0CPvVYaklkswsXR9b7QZUp2GXW%2F7hspenlsAoY) 。截止2024年8月4日的Github统计，FFmpeg项目的星标数为4.41万，副本数为1.19万。
FFmpeg在编程实践中的用法主要有下列三种：

### 1、在命令行中运行FFmpeg

按照之前文章《在欧拉系统上编译安装FFmpeg》的说明，在Linux系统上编译与安装FFmpeg，即可生成三个可执行程序，分别是ffmpeg、ffplay、ffprobe。接着按照之前文章《FFmpeg的可执行程序介绍》的说明，即可在命令行中执行相关的音视频处理操作。

### 2、通过Qt在桌面程序中集成FFmpeg

先按照《FFmpeg开发实战：从零基础到短视频上线》一书第8章“8.1  Windows环境编译FFmpeg”的介绍，在Windows系统上编译出FFmpeg的dll动态库。再按照《FFmpeg开发实战：从零基础到短视频上线》一书第11章“11.2.1  给Qt集成FFmpeg”的介绍，给Qt的C++工程集成前面编译好的dll动态库及其头文件。接着即可在C++代码中调用FFmpeg提供的各种API。

### 3、通过Android Studio在移动App中集成FFmpeg

先按照《FFmpeg开发实战：从零基础到短视频上线》一书第12章“12.1.2  交叉编译Android需要的so库”的介绍，在Windows系统上交叉编译出FFmpeg用于Android平台的so动态库。再按照《FFmpeg开发实战：从零基础到短视频上线》一书第12章“12.1.3  App工程调用FFmpeg的so库”的介绍，给Android Studio的App工程集成前面编译好的so动态库及其头文件。接着即可在App代码中调用FFmpeg提供的各种API。

## 四、视频录制直播工具OBS Studio

OBS Studio全称Open Broadcaster Software Studio，它是一个开源的跨平台实时流媒体和屏幕录制工具，可运行于Linux、Windows和MacOS等操作系统。
OBS Studio的官网地址为 [https://obsproject.com/](https://link.segmentfault.com/?enc=rHQrC3v2fc2ckeRetQc%2B9w%3D%3D.gPIElt9fsvbESaBPolsJyIMvoO9XojkP%2F2VafdBxtJQ%3D) ，它在Github上的源码托管入口页面为 [https://github.com/obsproject/obs-studio](https://link.segmentfault.com/?enc=eBz2p45T1OggPq7OQK1NfQ%3D%3D.VkQgJyIY8eop4dLA89%2FvZQKknRyDnVGTawzIMesVQ1HBqyAYpZwYBoWv8%2BExmzUa) 。截止2024年8月4日的Github统计，OBS Studio项目的星标数为5.8万，副本数为0.78万。
有关OBS Studio的安装和使用说明参见之前的文章《使用OBS Studio开启RTMP直播推流》和《结合OBS与MediaMTX实现SRT直播推流》，这里不再赘述。

## 五、音视频播放器VLC media player

VLC media player是一款开源的跨平台多媒体播放器及框架，可以播放几乎全部多媒体文件，以及 DVD、音频 CD、VCD 及各类流媒体协议的直播地址。
VLC media player的官网地址为 [https://www.videolan.org/](https://link.segmentfault.com/?enc=GWtQ2rB%2BUS5ep53b0O1Xwg%3D%3D.TFHKSOAXp6V%2FZ1anFeV2f2A7n6OG9syioidkphnpfZo%3D) ，它在Github上的源码托管入口页面为 [https://github.com/videolan/vlc](https://link.segmentfault.com/?enc=zQofX3Dpr5zQ77dSeJifVA%3D%3D.wtJIKVbkF0rNVVwC5Cbz0TQDCnT2vl%2FVFtBI9yj0KjI%3D) 。截止2024年8月4日的Github统计，VLC media player项目的星标数为1.35万，副本数为0.5万。
除了供用户播放媒体文件之外，VLC media player还常常被开发者用来调试音视频文件格式是否正确，以及网络上的流媒体数据是否正确传输。因为凡是VLC media player无法打开的音视频文件，几乎肯定是文件内部编码或封装出了问题；凡是VLC media player无法播放的流媒体地址，几乎肯定是流媒体数据出现缺失，或是网络状况不佳。
有关VLC media player的安装和使用说明参见《FFmpeg开发实战：从零基础到短视频上线》一书第3章的“3.4.1  通用视频播放器VLC”，这里不再赘述。

更多详细的FFmpeg开发知识参见[《FFmpeg开发实战：从零基础到短视频上线》](https://link.segmentfault.com/?enc=x1VfVnPVxSTJBB5CinhW3A%3D%3D.ScFk0%2BLurW%2FrtvAd0bDtLYJfHFErNs5Z%2B85YSDfdA8wAG7zjds5GO4HzXTMcoqKC)一书。

[ffmpeg](https://segmentfault.com/t/ffmpeg)[音视频](https://segmentfault.com/t/音视频)[流媒体](https://segmentfault.com/t/流媒体)[直播](https://segmentfault.com/t/直播)

