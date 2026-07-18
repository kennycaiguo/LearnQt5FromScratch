# 淘到了4个Github开源项目，第2个堪称神器！

## 1、RuView——用WiFi“看见”墙后的人

> [http://github.com/ruvnet/RuView](https://link.zhihu.com/?target=http%3A//github.com/ruvnet/RuView)

这个项目最吸引人的地方只有一句话：**用WiFi信号**识别人类动作。

RuView的核心思路是分析WiFi信号的变化，从中提取人体运动信息。

它**不依赖摄像头**，也不需要穿戴设备，只利用[无线电信号](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=无线电信号&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLml6Dnur_nlLXkv6Hlj7ciLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.xiJnKC6v5lldQW3vhqUBr6b8LdMc6q2DRltHT29pBc0&zhida_source=entity)就能识别人体动作、存在状态甚至[生命体征](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=生命体征&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLnlJ_lkb3kvZPlvoEiLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.7BRBRKrX-vT_RR5yC3gMB7eHEwA-K-ASXc9gmvMt1WE&zhida_source=entity)。



![img](https://pic1.zhimg.com/v2-3e4b4ddf2f115c1e135d018f3b803024_1440w.jpg)



简单理解就是：**房间里的WiFi信号在不断反射**，当人移动时，这些信号会发生变化。系统通过分析这些变化来判断人体姿态。

**怎么用？**

大致流程比较简单：

1. 准备支持WiFi信号采集的设备
2. 安装RuView环境
3. 采集WiFi信道数据
4. 模型分析并生成动作结果

项目还提供了一些示例模块，可以直接运行测试。



![img](https://pic3.zhimg.com/v2-9b38d1894bd3c7096b7a0138776a13ea_1440w.jpg)



项目给出的应用场景比较多，例如：

- 检测房间里是否有人
- 识别人类姿态或动作
- 监测呼吸和心率
- 灾害救援中寻找被困人员
- 智能安防和行为监测

系统可以通过WiFi信号**推算人体姿态和生命体征**，并且在完全没有摄像头的情况下工作。

这类技术目前还在持续研究阶段，但作为开源项目已经很有探索价值。

## 2、QtScrcpy——开源投屏神器！安卓手机实时投屏到电脑，不是模拟器！

> [http://github.com/barry-ran/QtScrcpy](https://link.zhihu.com/?target=http%3A//github.com/barry-ran/QtScrcpy)

QtScrcpy是一个**安卓实时投屏工具**。它可以把手机画面直接显示到电脑上，同时还能用键盘和鼠标控制手机。



![img](https://picx.zhimg.com/v2-b02ad41d11107f4f0185654cf50cc863_1440w.jpg)



和很多投屏软件不同，它**不是模拟器**，也不需要root权限。

几秒钟之后，手机屏幕就会出现在电脑窗口里。

如果配置无线调试，也可以用WiFi连接。



![动图封面](https://pic4.zhimg.com/v2-3b58b9f222f29ff5481708e93a8c991b_b.jpg)





开发者调试APP、手游玩家键鼠操作、演示手机功能时，这个工具都比较好用。

## 3、Eversheet——用表格开发企业系统

> [http://iyunbiao.com](https://link.zhihu.com/?target=http%3A//iyunbiao.com)

很多人看到这个名字会误解，以为是一个云端表格工具。

其实Eversheet的中文名叫[云表平台](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=云表平台&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLkupHooajlubPlj7AiLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.6G1VWNAxZghouLgnIY0lNXRYbEeMETGHFwZrSxSqGuI&zhida_source=entity)，它更像一个用表格做开发的平台。界面和Excel类似，但底层是**无代码开发框架**。



![img](https://pic2.zhimg.com/v2-45e3849b1ce59bea0b31bb4ece6c00a3_1440w.jpg)



它的核心理念是：通过画表格和配置逻辑来搭建企业软件。

用户可以用类似Excel的界面，搭建[业务系统](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=业务系统&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLkuJrliqHns7vnu58iLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.bQkmKwHTU49UNRFQ9iRA1F-4Nu221L3KR_saca35ICo&zhida_source=entity)，比如：

- [MES制造执行系统](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=MES制造执行系统&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiJNRVPliLbpgKDmiafooYzns7vnu58iLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.39KGTG7N_6r3DSGF9HinwMAPtjtKOgdoPznCT147OB4&zhida_source=entity)
- [WMS仓储管理系统](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=WMS仓储管理系统&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiJXTVPku5PlgqjnrqHnkIbns7vnu58iLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.lsocUu9YwIWWusNf2bR9zt2FPQ_fgEIWkAe1afBwDf0&zhida_source=entity)
- [CRM客户管理系统](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=CRM客户管理系统&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiJDUk3lrqLmiLfnrqHnkIbns7vnu58iLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.4dH_GreY1L9dNQ-WJbJzgogtMFRTWbDYV-KcGAMDit8&zhida_source=entity)
- ERP业务系统
- [数据分析平台](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=数据分析平台&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLmlbDmja7liIbmnpDlubPlj7AiLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.AP3Ey2-e1lY--0JRu2DwdVFbNa9Vbw6uph8BWWpSbPA&zhida_source=entity)



![img](https://pic3.zhimg.com/v2-7fd26bc8e2f54105ca76fcf384e2b9b8_1440w.jpg)



**怎么用？**基本流程通常是：

1. 创建业务表结构
2. 配置字段和流程
3. 设置业务公式
4. 设计操作界面
5. 发布系统

整个过程不需要传统[编程语言](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=编程语言&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLnvJbnqIvor63oqIAiLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.jO829BVr-gNgleBzvoE1V8pSTFQsVATLKbzptxHuWIg&zhida_source=entity)。



![img](https://pic3.zhimg.com/v2-686d6ea5d6b2f73e73f4eb16d6ce9738_1440w.jpg)



云表平台**常见功能**包括：

- 中文电子表格编程
- 工作流和审批流程
- 数据接口和系统集成
- 自动生成PC端和移动端
- 权限管理和组织架构
- 数据报表和[BI分析](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=BI分析&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiJCSeWIhuaekCIsInpoaWRhX3NvdXJjZSI6ImVudGl0eSIsImNvbnRlbnRfaWQiOjI3MTAyMzEzMSwiY29udGVudF90eXBlIjoiQXJ0aWNsZSIsIm1hdGNoX29yZGVyIjoxLCJ6ZF90b2tlbiI6bnVsbH0.EpUXyjSRqBX3DBpX1NoZAYjxbEivpXSTdxBgAEyYdNw&zhida_source=entity)

目前一些大型企业已经用它构建业务系统。例如中铁十六局物资贸易公司的[数据管理系统](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=数据管理系统&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLmlbDmja7nrqHnkIbns7vnu58iLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.tZPey8rX5xP_73Z5O54wQWf71kkts8XNqim0s-3scEU&zhida_source=entity)被工程建设行业信息化大会评为典型案例。



![img](https://pic4.zhimg.com/v2-f2a0ee0609c2266b1f91dec404c0e037_1440w.jpg)



[浙江恒逸集团](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=浙江恒逸集团&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLmtZnmsZ_mgZLpgLjpm4blm6IiLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.OZLzwdLwx4JZwkXwy6XLMO7Q6vap_bO2PReQVX6_GlQ&zhida_source=entity)的供应链平台也通过它整合了多个旧系统，并获得专项资金支持。

虽然不开源，但是提供**免费版本**，支持20人同时在线使用。标准版和企业版则提供更完整的功能。

## 4、[Paper Burner X](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=Paper+Burner+X&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiJQYXBlciBCdXJuZXIgWCIsInpoaWRhX3NvdXJjZSI6ImVudGl0eSIsImNvbnRlbnRfaWQiOjI3MTAyMzEzMSwiY29udGVudF90eXBlIjoiQXJ0aWNsZSIsIm1hdGNoX29yZGVyIjoxLCJ6ZF90b2tlbiI6bnVsbH0.DNPETwfny4nsT2R1PDRMnD_Q7GiXkoIAkQVV59btW3g&zhida_source=entity)——打开即用的论文阅读/翻译工具

> [http://github.com/Feather-2/paper-burner-x](https://link.zhihu.com/?target=http%3A//github.com/Feather-2/paper-burner-x)

如果你经常查阅国外论文，这个免费开源工具绝对可以派上用场。

Paper Burner X是一个开源的论文阅读工具，目标是让用户更方便地查找和阅读学术论文。



![img](https://pic1.zhimg.com/v2-40de560b098aa0c8aea1ced78fbaecd2_1440w.jpg)



很多科研网站访问体验并不友好，这个项目尝试做一个更简单的阅读入口。

**主要功能：**

- PDF在线双语阅读，集合AI能力，**高质量翻译**
- **增强学术内容展示，**特别优化了复杂公式的渲染。
- 浏览器式阅读体验，打开即用



![img](https://pic3.zhimg.com/v2-b7f91cec441d4b31ad93571de0f6b09c_1440w.jpg)



## 总结

GitHub上真正有意思的项目往往不是那种[巨型框架](https://zhida.zhihu.com/search?content_id=271023131&content_type=Article&match_order=1&q=巨型框架&zd_token=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJ6aGlkYV9zZXJ2ZXIiLCJleHAiOjE3ODQ1MTIwMTEsInEiOiLlt6jlnovmoYbmnrYiLCJ6aGlkYV9zb3VyY2UiOiJlbnRpdHkiLCJjb250ZW50X2lkIjoyNzEwMjMxMzEsImNvbnRlbnRfdHlwZSI6IkFydGljbGUiLCJtYXRjaF9vcmRlciI6MSwiemRfdG9rZW4iOm51bGx9.13YSmjAYNXOoil5LZBpbBe-fQP94G4KYolAbGYJhCjQ&zhida_source=entity)，而是解决具体问题的工具。我发现如果平时只在软件商店找工具，很多好东西很难发现。

所以平日里多逛逛GitHub，经常能淘到一些意想不到的项目。

2025.11.06 最佳开源项目🔝:BettaFish

- 关注社区OpenGithub社区：https://open.itc.cn/Github : https://github.com/OpenGithubs



