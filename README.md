此仓库是由godot官方源码库fork而来，用于自己学习研究目的

目前custom分支对应的是官方3.3稳定分支，暂无法合并至master，因为master对应的是官方最新master分支，有大量变动

mac下构建命令
```shell
scons platform=osx arch=x86_64 --jobs=$(sysctl -n hw.logicalcpu)
```

清理
```shell
scons -c
```