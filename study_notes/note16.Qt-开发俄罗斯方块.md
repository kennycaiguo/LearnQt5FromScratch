# 开发步骤





# 避坑指南

## 1.qsrand()和qrand()在qt6已经被移除，使用：QRandomGenerator::global()->bounded(100);代替



## 2.枚举QPalette::Background`和`方法QPalette::background()在qt6中已经被移除，qt5中的代码

```
palette.setColor(QPalette::Background, Qt::red); 
```

## 需要改为qt6：

```
palette.setColor(QPalette::Window, Qt::red); 
```

## 3.QColor().light()过时，需要改为QColor().lighter()，QColor().dark()过时需要改为QColor().darker()过时



# 参考源码

## 参考源码1：https://github.com/CLAY-BIOS/QT-Tetris

## 参考源码2：https://github.com/orestonce/TetrisGame-qt

## 参考源码3：https://github.com/absolve/tetris

