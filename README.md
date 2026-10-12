# UnitConverter
一个基于 CMake 构建的 C++ 单位转换器，支持三组单位转换：
- 摄氏度 ↔ 华氏度
- 米 ↔ 英尺
- 磅 ↔ 千克
## 目录结构
UnitConverter/
├── CMakeLists.txt          # 根目录 CMake 构建文件
├── src/
│   └── main.cpp            # 主程序（交互逻辑）
├── unitlib/
│   ├── CMakeLists.txt      # 库的 CMake 构建文件
│   ├── include/
│   │   └── unitlib.h       # 头文件（函数声明）
│   └── src/
│       └── unitlib.cpp     # 转换函数具体实现
└── build/                  # 编译目录（自行创建，不提交）