Sistemas Operativos
# 🔧 Sistemas Operativos I – Proyecto del 6to Semestre

> Repositorio del curso **Sistemas Operativos I** (6º semestre).

---

## 📋 Índice

1. [Descripción](#descripción)
2. [Estructura de Directorios](#estructura-de-directorios)
3. [Requisitos](#requisitos)
4. [Cómo usar](#cómo-usar)
5. [Contenido de cada Módulo](#contenido-de-cada-módulo)

   * [PCL/bin](#pclbin)
   * [PCL/dev](#pcldev)
   * [PCL/Proyectos](#pclproyectos)
   * [PCL/Pruebas](#pclpruebas)
   * [PCL/Varios](#pclvarios)


---

## 📖 Descripción

Este repositorio contiene los ejercicios y prácticas realizadas en el curso de **Sistemas Operativos I**, impartido en el sexto semestre de la carrera de Informática. Incluye:

* Documentación de configuración y entorno de trabajo.
* Prácticas de programación en C y scripts de automatización.
* Simulaciones de procesos y manejo de recursos.
* Archivos de prueba y ejemplos adicionales.

---

## 🗂 Estructura de Directorios

```plaintext
.
├── PCL
│   ├── bin
│   ├── dev
│   ├── Proyectos
│   ├── Pruebas
│   └── Varios
└── README.md
```

Cada carpeta dentro de `PCL/` agrupa tipos de archivos específicos para las prácticas del curso.

---

## ⚙️ Requisitos

* Sistema operativo Linux (recomendado Ubuntu o derivado)
* Compilador de C (gcc)
* Shell bash
* Permisos de ejecución para scripts

---

## 🚀 Cómo usar

1. Clona el repositorio:

   ```bash
   git clone https://github.com/EdenMCa/Sistemas-Operativos-I.git
   cd Sistemas-Operativos-I/PCL
   ```
2. Explora las carpetas según la práctica que desees:

   * `Proyectos/P01`: Documentos PDF de introducción y entorno.
   * `Proyectos/P02`: Código fuente y ejecutables de cifrado.
   * `Proyectos/P03`: Scripts y simuladores de procesos.
3. Compila y/o ejecuta:

   ```bash
   cd Proyectos/P02/A02-3
   gcc -o cencriptador.c  cencriptador
   ./cencriptador < input.txt > output.txt
   ```

---

## 📂 Contenido de cada Módulo

### `PCL/bin`

Binarios y utilidades compiladas listos para ejecutar.

### `PCL/dev`

Órdenes de desarrollo y dispositivos simulados (ej. `CO2`).

### `PCL/Proyectos`

* **P01**:

  * `IntroduccionalosSO.pdf`: Guía de introducción a Sistemas Operativos.
  * `EntornoDeTrabajo.pdf`: Configuración del entorno de desarrollo.
* **P02**: Prácticas de cifrado y descifrado en C

  * `A02-3/`: Cifrado de archivos (`cencriptador`, `MCPV`, etc.)
  * `A02-4/`: Descifrado de datos.
* **P03**: Simulación de procesos

  * `A03.1/`: Scripts para generar ejecución en paralelo y secuencial, simuladores de gases.

### `PCL/Pruebas`

* `Probabilidades`: Archivos de prueba de cálculos de probabilidad.

### `PCL/Varios`

* `Otros.txt`: Notas varias y recursos adicionales.

