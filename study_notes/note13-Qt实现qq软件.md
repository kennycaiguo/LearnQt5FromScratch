# 1.创建qq软件的抽屉盒



# 2.聊天窗口设计模式



# 3.聊天会话功能实现



# 参考源码

## 1. https://gitee.com/jeffreylee/QQrobot

## 2. https://gitee.com/zzlishang/chat-room_-qt5

## 3. https://gitee.com/jiang-really/qt-chat-system

## 4 . https://gitee.com/gaffalvsi/chat-room

## 5. https://gitee.com/NKLSTISS_admin/IM

### 6. https://gitee.com/UnStoppableeee/lan-chat-software-based-on-qt5





# 避坑指南

## 1.如果需要使用QAction，你需要在.pro文件里面添加：QT += widgets，在qt5中，包含#include <QtWidgets/QAction>，但是在Qt6,你需要\#include <QtGui/QAction>也就是说，QAction从QtWidgets移动到了QtGui中

## 2.The `setMargin` 方法 在Qt 6已经过时并且已经移除了 使用 **`setContentsMargins`** 来代替

## 3.QTime类的start()和elapsed()在qt6已经被移除，用QElapsedTimer类来代替QTime


