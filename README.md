# Proyek Max Heapify C++

### Identitas

- **Nama**: Andra Achmaddinata
- **NIM**: 1313623033
- **Program Studi**: Ilmu Komputer A
- **Mata Kuliah**: Desain dan Analisis Algoritma

### Deskripsi
Berikut adalah implementasi struktur data Max Heap menggunakan C++. Max Heap merupakan salah satu jenis heap di mana setiap elemen induk selalu lebih besar dari elemen anak-anaknya.
---

### Prerequisite
- `Meson` dan `Ninja` untuk sistem build.
- Compiler dari `build-essential`.

---

### Cara Instalasi dan Kompilasi

1. **Clone Repository**

   ```bash
   git clone https://github.com/IlkomUNJ/heap-sort-implementation-AndraAdinata.git
   cd heap-sort-implementation-AndraAdinata
   ```

2. **Install Dependencies**

   Di Ubuntu/Debian:

   ```bash
   sudo apt update
   sudo apt install build-essential meson ninja-build
   ```

3. **Kompilasi Program**

   ```bash
   meson setup build
   meson compile -C build
   ```

4. **Jalankan Program**

   ```bash
   g++ -o program main.cpp max_heap.cpp
   ./program
   ```

---

### Struktur Direktori

```
heap-sort-implementation-mfaathirarsa/
│
├── src/                # Kode sumber
│   ├── maxheap.cpp     # Implementasi MaxHeap
│   ├── max_heap.h       # Header MaxHeap
│   └── main.cpp        # Program utama
│
└── build/              # Hasil kompilasi
```

---