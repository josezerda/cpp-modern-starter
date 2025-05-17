# 🚀 C++ Modern Starter Template

Este es un proyecto base en C++20 para comenzar a desarrollar aplicaciones modernas utilizando herramientas estándar: CMake, Catch2 para testing, y GitHub Actions para CI.

---

## 📁 Estructura del Proyecto
```
cpp-modern-starter/
├── CMakeLists.txt
├── include/
│ └── utils.hpp
├── src/
│ ├── main.cpp
│ └── utils.cpp
├── tests/
│ ├── test_main.cpp
│ └── lib/catch2/ <-- Catch2 como submódulo
└── .github/
└── workflows/ci.yml
```

## 🛠️ Cómo Compilar

```
mkdir build
cd build
cmake ..
make
./app
```


## ✅ 2. Subir a GitHub

### 📌 Si aún no creaste un repo remoto

1. En GitHub, creá un repositorio nuevo:  
   👉 `https://github.com/nombre_usuario/cpp-modern-starter`

2. En tu terminal, en la raíz del proyecto:

```bash
git init  # solo si aún no lo habías hecho
git remote add origin https://github.com/nombre_usuario/cpp-modern-starter.git
git add .
git commit -m "Proyecto base en C++ moderno con CMake y tests"
git push -u origin master  # o main, según el default de tu git
```