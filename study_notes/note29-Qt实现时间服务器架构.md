# 参考文档

## 参考文档1

基于 Qt 实现时间服务器架构，首选轻量级的 **UDP 协议**结合 **TCP/IP Socket** 或 **Qt Remote Objects**。最基础的时间服务器通过监听 `123` 端口（标准NTP）或自定义端口，使用 `QDateTime` 获取当前时间，并将其序列化后通过 Socket 发送给请求的客户端。 [[1](https://zhuanlan.zhihu.com/p/36677319), [2](https://doc.qt.io/qt-6.8/zh/qtremoteobjects-remoteobjects-server-example.html), [3](https://github.com/coolshou/qntpquery)]

核心架构与技术选型

1. **协议选择**：
   - **TCP**：适用于需要高可靠性、要求双向握手确认的局域网环境。
   - **UDP**：适用于标准网络时间协议 (NTP)。轻量且传输快，通常用于广播或减少网络开销。
   - **Qt Remote Objects (QtRO)**：高级 IPC/RPC 架构，可将时间对象直接暴露给客户端，适合纯 Qt 环境。 [[1](https://doc.qt.io/qt-6.8/zh/qtremoteobjects-clientapp-example.html), [2](https://cloud.tencent.com/developer/article/1639523), [3](https://www.cnblogs.com/feiyangqingyun/p/13059665.html), [4](https://doc.qt.io/qt-6.8/zh/qtremoteobjects-remoteobjects-server-example.html)]
2. **核心类**：
   - `QUdpSocket` 或 `QTcpServer`：处理底层网络连接。
   - `QDateTime`: 获取并格式化系统当前时间。
   - `QTimer`: 定时触发以更新服务器显示界面或进行广播。 [[1](https://zhuanlan.zhihu.com/p/36677319), [2](https://github.com/coolshou/qntpquery), [3](https://doc.qt.io/qt-6.8/zh/qtremoteobjects-remoteobjects-server-example.html)]

简易 TCP 时间服务器实现示例

以下为使用 `QTcpServer` 和 `QTcpSocket` 实现时间服务器的核心代码逻辑：

cpp

```
// TimeServer.h
#include <QTcpServer>
#include <QTcpSocket>
#include <QDateTime>

class TimeServer : public QTcpServer {
    Q_OBJECT
public:
    explicit TimeServer(QObject *parent = nullptr) : QTcpServer(parent) {
        // 监听 8888 端口
        if(this->listen(QHostAddress::Any, 8888)) {
            qDebug() << "时间服务器启动成功，等待连接...";
        }
    }

protected:
    void incomingConnection(qintptr socketDescriptor) override {
        QTcpSocket *socket = new QTcpSocket(this);
        socket->setSocketDescriptor(socketDescriptor);

        // 拼接当前系统时间
        QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
        QByteArray data = currentTime.toUtf8();

        // 发送时间并断开连接
        socket->write(data);
        socket->flush();
        socket->waitForDisconnected();
        socket->deleteLater();
    }
};
```

请谨慎使用此类代码。

生产环境与工业级架构建议

如果需要构建符合国际标准的工业级时间服务器系统：

- **时钟源**：架构设计需增加 GPS 模块或接入上游 NTP 公共服务器池（如 `://aliyun.com`）。

- **多线程**：若并发客户端较多，避免阻塞主界面，可采用 `QTcpServer` 派生子类并在 `incomingConnection()` 中将 `socketDescriptor` 移至 `QThread` 中处理。 [[1](https://blog.csdn.net/shengruidv/article/details/134333876), [2](https://cloud.tencent.com/developer/article/1639523)]

## 参考文档2 ： https://www.cnblogs.com/feiyangqingyun/p/13059665.html





# 参考源码

## 1. https://github.com/coolshou/qntpquery

## 2. https://github.com/elrinor/qntp

## 3. https://github.com/azadkuh/qhttp

## 4. https://github.com/plsamuel/timeserver

## 5. https://github.com/yuanrw/tcp-server-client



