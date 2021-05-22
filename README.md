此仓库是由godot官方源码库fork而来，用于自己学习研究目的

目前采用的是3.3稳定分支

mac下构建命令
```shell
scons platform=osx arch=x86_64 --jobs=$(sysctl -n hw.logicalcpu)
```

清理
```shell
scons -c
```