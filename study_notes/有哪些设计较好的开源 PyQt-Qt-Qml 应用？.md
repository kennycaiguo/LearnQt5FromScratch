# 有哪些设计较好的开源 PyQt/Qt/Qml 应用？

最近在学习 PyQt，因为不大懂设计，想找一些颜值高的应用借鉴一下别人的想法，最好是小而美并且开源的，PyQt/Qt/Qml 都可以，蟹蟹~显示全部 



[布莱恩特](https://www.zhihu.com/people/liang-jing-jing-58-79)

### 1、FeelUOwn

[https://github.com/feeluown/FeelUOwn](https://link.zhihu.com/?target=https%3A//github.com/feeluown/FeelUOwn)

一个稳定、用户友好以及高度可定制的音乐播放器。

![img](https://pica.zhimg.com/80/v2-e25335e8c6307a5389d717a612545773_720w.webp?source=2c26e567)

**特性：**

- 安装简单，新手友好，默认提供国内各音乐平台插件（网易云、虾米、QQ）
- 基于文本的歌单，方便与朋友分享、设备之间同步
- 提供基于 TCP 的交互控制协议
- 类似 .vimrc 和 .emacs 的配置文件 .fuorc
- 有友善的开发上手文档，核心模块有较好的文档和测试覆盖

### 2、RedisDesktopManager

[https://github.com/uglide/RedisDesktopManager](https://link.zhihu.com/?target=https%3A//github.com/uglide/RedisDesktopManager)

![img](https://picx.zhimg.com/80/v2-0d1268beb3129f82478602e1eabc8164_720w.webp?source=2c26e567)

Redis可视化管理工具，跨平台客户端。

![img](https://pic1.zhimg.com/80/v2-896d6cacec526ed820f0baf75d0c31ef_720w.webp?source=2c26e567)

### 3、[Calculon](https://zhida.zhihu.com/search?content_id=505010902&content_type=Answer&match_order=1&q=Calculon&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQzMzY0NjQsInEiOiJDYWxjdWxvbiIsInpoaWRhX3NvdXJjZSI6ImVudGl0eSIsImNvbnRlbnRfaWQiOjUwNTAxMDkwMiwiY29udGVudF90eXBlIjoiQW5zd2VyIiwibWF0Y2hfb3JkZXIiOjEsInpkX3Rva2VuIjpudWxsfQ.VR22A4nZJz0FjD0FBaSAAypWe65jNSPG2J8jP48iPQ4&zhida_source=entity)

一个使用Python在PyQt中实现的简单计算器应用程序。用户界面是在Qt设计器中设计的，计算器操作是使用简单的基于堆栈的逻辑实现

![img](https://picx.zhimg.com/80/v2-8ec93c4f25ca32400fbd01dda6828862_720w.webp?source=2c26e567)

### 4、PyQt

[https://gitee.com/PyQt5/PyQt](https://link.zhihu.com/?target=https%3A//gitee.com/PyQt5/PyQt)

各种各样的PyQt测试和例子。

PyQt实现了一个Python模块集。它有超过300类，将近6000个函数和方法。它是一个多平台的工具包，可以运行在所有主要操作系统上，包括UNIX，Windows和Mac。 PyQt采用双许可证，开发人员可以选择GPL和商业许可。在此之前，GPL的版本只能用在Unix上，从PyQt的版本4开始，GPL许可证可用于所有支持的平台。

### 5、KindleHelper

[https://github.com/Peach-Coding/KindleHelper](https://link.zhihu.com/?target=https%3A//github.com/Peach-Coding/KindleHelper)

![img](https://pica.zhimg.com/80/v2-366d2f690d62e98f5d1d80c7277444ce_720w.webp?source=2c26e567)

KHelper 是一款找书的软件，目前支持三个站点的搜索。界面使用 PyQt5 开发的所以相对比较简单，但是完全不影响使用。

### 特点：

1. 过滤掉找书过程中烦人的广告
2. ❌过滤到网站的一些无效链接
3. ⏬支持下载
4. ✈️支持推送

![img](https://pic1.zhimg.com/80/v2-2d77760ca0f7e4a4eeb62b558985e34b_720w.webp?source=2c26e567)

### 6、JQTools

[https://github.com/188080501/JQTools](https://link.zhihu.com/?target=https%3A//github.com/188080501/JQTools)

JQTools，为 Jason Qt Tools 的简称，这是一个基于Qt开发的开源小工具包。包含了在开发程序（尤其是Qt程序）时，需要的各种小功能。本工具使用 QML(界面) 和 C++(逻辑) 开发。

![img](https://pica.zhimg.com/80/v2-43321f0abb9f2af790e2d7b5994aa82c_720w.webp?source=2c26e567)

功能介绍： 文本类

- UTF16转换 将字符串和UTF-16之间进行互转，例如将 "中文" 和 "\u4E2D\u6587" 互转
- RGB转16进制 将颜色数值和HEX颜色字符串（例如"#112233"）互转
- 大小写转换 文本转大写、文本转小写
- 密码随机器 可以生成随机密码字符串，例如："Hau-eqS-5EC-
- UUID随机器 可以生成随机密码UUID，例如："bff98ea4-b861-422a-8627-6eb6cbca8716"
- URL转码 将字符串和编码后的URL之间进行互转，例如将 "中文" 和 "%E4%B8%AD%E6%96%87" 互转
- JSON格式化 可以将JSON内容进行格式化，可选压缩或者不压缩模式

计算类

- HASH计算器 计算常用的摘要值，如SHA1、MD5
- Unix时间戳转换 Unix时间戳与日期转换

制作类

- 图标生成器 根据已有的PNG图片，生成可以用于发布App的特定分辨率图片，例如OSX的 [icon_128x128@2x.png](mailto:icon_128x128@2x.png) 这样分辨率的图片
- 图标字体转PNG 将内置的ttf字体转换为PNG，目前一共有5555个图标可供选择
- 二维码生成器 可以将文本生成二维码图片，并且保存为PNG
- 条形码生成器 可以将文本生成条形码图片，并且保存为PNG

工具类

- 代码行数统计 可以统计文件中代码行数（'\n'数量）
- PNG图片压缩 基于Zopfli开发，用于压缩PNG图片，压缩是无损的。
- JPG图片压缩 基于Guetzli开发，用于压缩JPG图片，压缩是有损的。
- 二维码识别器 可以将二维码识别成字符串
- 批量替换 可以批量替换文件名或者文件内容中的特定关键字
- 屏幕拾色器 可以拾取屏幕中，某个点的颜色
- 局域网文件传输 可以在局域网中传输文件

Qt相关

- PNG警告消除 消除在Qt里，部分PNG图片在加载时控制台会报警告的问题，使用本工具可以将PNG图片进行转换，使用转换后的图片不会在报错
- Q_PROPERTY代码生成 可以根据Q_PROPERTY的内容，生成代码
- CPP文件生成 生成CPP文件基本结构
- TS文件自动翻译器 可以使用百度翻译，自动翻译TS文件并保存翻译结果

2.sqml

[https://github.com/qyvlik/sqml](https://link.zhihu.com/?target=https%3A//github.com/qyvlik/sqml)

简易 sqlite orm 工具。

3. shotcut

[https://github.com/mltframework/shotcut](https://link.zhihu.com/?target=https%3A//github.com/mltframework/shotcut)

视频编辑软件，产品级开源，值得研究。

![img](https://pica.zhimg.com/80/v2-2feff0582216e8b3c898e5d89602c88b_720w.webp?source=2c26e567)

4. CuteMarkEd

[GitHub - cloose/CuteMarkEd: Qt Markdown Editor](https://link.zhihu.com/?target=https%3A//github.com/cloose/CuteMarkEd)

QT开发的MarkDown 编辑器

![img](https://pic1.zhimg.com/80/v2-54a404269ac54ef1a5d27bf2b812417f_720w.webp?source=2c26e567)

5.Rythem

[GitHub - AlloyTeam/Rythem: a fiddler-like project using Qt](https://link.zhihu.com/?target=https%3A//github.com/AlloyTeam/Rythem)

Qt版的fiddler，先简单介绍一下Fiddler：

Fiddler是位于客户端和服务器端的HTTP代理，也是目前最常用的http抓包工具之一 。 它能够记录客户端和服务器之间的所有 HTTP请求，可以针对特定的HTTP请求，分析请求数据、设置断点、调试web应用、修改请求的数据，甚至可以修改服务器返回的数据，功能非常强大，是web调试的利器。

![img](https://picx.zhimg.com/80/v2-30d3cf43fe16105d1bee58ef2eb5428a_720w.webp?source=2c26e567)

功能

- http代理服务
- https tunnel透传(https抓包需求似乎不是很大，暂不实现)
- 规则替换 匹配模式包括`wildcard`类型及全匹配两种 以替换后内容区分有本地及远程两种。 本地替换有三种：目录式，单个文件式，多文件合并成一文件 远程替换暂时只支持一个文件对应一个远程路径
- host设置
- 替换规则远程及本地导入。
- 替换规则增删改。
- 颜色标记已被替换的请求
- 导入/导出 每条请求（兼容fiddler *.saz文件)
- 批量导出response body（可用于保存整站）
- 过滤显示请求

### 6、[Notes](https://zhida.zhihu.com/search?content_id=505010902&content_type=Answer&match_order=1&q=Notes&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQzMzY0NjQsInEiOiJOb3RlcyIsInpoaWRhX3NvdXJjZSI6ImVudGl0eSIsImNvbnRlbnRfaWQiOjUwNTAxMDkwMiwiY29udGVudF90eXBlIjoiQW5zd2VyIiwibWF0Y2hfb3JkZXIiOjEsInpkX3Rva2VuIjpudWxsfQ.52TzUD5HDP7FEHoSl7fQky4axCmQHb2W2Y85K7EqY_g&zhida_source=entity)

[https://github.com/nuttyartist/notes](https://link.zhihu.com/?target=https%3A//github.com/nuttyartist/notes)

QT开发的记事本。

![img](https://picx.zhimg.com/80/v2-57c756f1fa7969c8a4b54c700d911877_720w.webp?source=2c26e567)

### 7、IcePlayer

[GitHub - FreedomZZQ/IcePlayer: A Nice Music Player by Qt5 and C++](https://link.zhihu.com/?target=https%3A//github.com/FreedomZZQ/IcePlayer)

音乐播放器。用的都是C++/Qt5，播放器大概3k行，社交软件有1w+行。8.

![img](https://picx.zhimg.com/80/v2-4de8c696fb47711d2f45084815093532_720w.webp?source=2c26e567)

![img](https://picx.zhimg.com/80/v2-9cfa95d74e8d91c9f0a0faa9ef9c95a4_720w.webp?source=2c26e567)

8、FFmpeg和Qt实现摄像头rtsp的实时显示

[007lizhen/FFmpeg-QT实现摄像头rtsp实时显示](https://link.zhihu.com/?target=https%3A//gitee.com/git-lizhen/FFmpeg-QT-rtsp)

利用FFmpeg和Qt实现摄像头rtsp的实时显示，经测试，延迟时间为0.6s。整个程序的运行流程：



![img](https://picx.zhimg.com/80/v2-6629ca7c639a6f2b2d9b63cb86dcb0cc_720w.webp?source=2c26e567)

界面运行图：



![img](https://picx.zhimg.com/80/v2-4cf1d5c4337a684dbb07b2f292fe3daf_720w.webp?source=2c26e567)

主要实现四个功能：



![img](https://picx.zhimg.com/80/v2-9e023bdbc8412b386fe92dc877fdb835_720w.webp?source=2c26e567)

1.读取摄像头视频流（rtsp），并实时显示到主界面上（注：存在0.7s左右的延时，延时测试过程如图3所示）；

2.将rtsp视频流经过FFmpeg解码后的YUV数据转化成RGB32数据，提取其中的R（红色）通道，并在界面中的小窗显示（如图2中的左上角部分）；

3.将水下机器人的横滚角反映在界面上（如图2中，中间部分的虚线“十字”为水平和竖直参考位置；实线“十字”为横滚运动后机器人相对参考位置的角度变化，图示为模拟横滚角为10度的情形）。

4.若程序掉电，再次上电后能够自动地建立连接。

### 9、QT_ASM_Converter

[https://gitee.com/DragonQuestHero/QT_ASM_Converter](https://link.zhihu.com/?target=https%3A//gitee.com/DragonQuestHero/QT_ASM_Converter)

可视化QT GUI 汇编转十六进制 十六转汇编 工具。

![img](https://picx.zhimg.com/80/v2-c509ad19435a89bf36ea5a5a178cc8c5_720w.webp?source=2c26e567)

### 10、QQrobot

[https://gitee.com/jeffreylee/QQrobot](https://link.zhihu.com/?target=https%3A//gitee.com/jeffreylee/QQrobot)

QQrobot基于腾讯公司WebQQ协议实现，可以向QQ群或者是个人自动发送信息。分为两个部分，QQ主体和robot插件。QQ主体解析WebQQ协议，负责QQ号码登录，信息接收和发送功能。robot分析聊天内容，跟据聊天内容智能做出回应。

QQ主体窗口内，可监控显示聊天信息、好友列表、群列表和机器人列表。为QQ群或者个人指定随意多个机器人为之提供服务。也提供了信息发送功能，可随时向QQ群或者个人发送信息。

robot插件，使用Qt5的plugin技术，可单独开发，编译后拷贝到plugins目录中，QQ主体自动识别安装运行。robot插件只要完成接口RobotInterface内的name和listenandsay方法就ok，name返回robot的名子，listenandsay的参数是收到的聊天内容和发送者信息，返回值是robot回应信息。

这是我大一时候写的音乐播放器

![img](https://picx.zhimg.com/80/3588af8f4f169d4cbbafd6b6bba45bfb_720w.webp?source=1def8aca)



播放器已经开源，欢迎star和fork：

[https://github.com/FreedomZZQ/IcePlayer](https://link.zhihu.com/?target=https%3A//github.com/FreedomZZQ/IcePlayer)



## 先不要脸的推荐一下我自己写的几个[PyQt](https://zhida.zhihu.com/search?content_id=30904974&content_type=Answer&match_order=1&q=PyQt&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQzMzY1MDYsInEiOiJQeVF0IiwiemhpZGFfc291cmNlIjoiZW50aXR5IiwiY29udGVudF9pZCI6MzA5MDQ5NzQsImNvbnRlbnRfdHlwZSI6IkFuc3dlciIsIm1hdGNoX29yZGVyIjoxLCJ6ZF90b2tlbiI6bnVsbH0.WGq9mC2txypjmnD1Gr5Mtga8gqPXUkDUMrS_mMQwJtY&zhida_source=entity)玩意儿

### 1.模仿Mac虾米的客户端，还没有写完，PyQt4，Python2

[GitHub - harry159821/XiamiForLinuxProject: Xiami For Linux Project](https://link.zhihu.com/?target=https%3A//github.com/harry159821/XiamiForLinuxProject)

![img](https://pica.zhimg.com/80/56586a6f4016be7144845c85e6705546_720w.webp?source=1def8aca)

![img](https://picx.zhimg.com/80/de1b1a4b0174cb63573e160aaf35426e_720w.webp?source=1def8aca)



### 2.给Drrr的简单客户端，PyQt5, Python2

[GitHub - harry159821/DrrrClient: DrrrClient For PC](https://link.zhihu.com/?target=https%3A//github.com/harry159821/DrrrClient)

B站展示视频

[无头骑士Drrr网页电脑版客户端](https://link.zhihu.com/?target=http%3A//www.bilibili.com/video/av2790951/)

网页介绍

[Drrr PC Client](https://link.zhihu.com/?target=http%3A//harry159821.github.io/DrrrClient/)



其实只是个浏览器，里面都是 网页

### 3.给一个电表写的显示，PyQt4，Python2

[GitHub - harry159821/TDM1001UpMachine: TDM1001UpMachine](https://link.zhihu.com/?target=https%3A//github.com/harry159821/TDM1001UpMachine)



## 其他作品

### 1.网易云音乐 ubuntu 第三方客户端，PyQt5 Python3

[GitHub - cosven/FeelUOwn: nothing but the alternate](https://link.zhihu.com/?target=https%3A//github.com/cosven/FeelUOwn)



### 2.Windows虾米客户端 Qt4，C++

![img](data:image/svg+xml;utf8,<svg xmlns='http://www.w3.org/2000/svg' width='1045' height='623'></svg>)

第一次答，有不正请见谅，有再见好项目再更

好的设计确实很重要









