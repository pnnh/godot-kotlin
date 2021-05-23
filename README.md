此仓库是由godot官方源码库fork而来，用于自己学习研究目的

目前custom分支对应的是官方3.3稳定分支

mac下构建命令
```shell
scons platform=osx arch=x86_64 --jobs=$(sysctl -n hw.logicalcpu)
```

清理
```shell
scons -c
```

尝试通过自定义module实现一个节点类型，可以加载kotlin multiplatform生成的动态库

kotlin仅负责UI无关的纯业务逻辑部分，在各个平台作为库存在，理论上和godot并无关系，完全可以用平台原生UI技术实现，这里只是出于学习研究目的

删除upstream远程仓库，按当前需求无法再合并官方仓库内的代码