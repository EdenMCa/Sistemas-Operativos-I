# 🔧 Sistemas Operativos I 

> Repositorio del curso **Sistemas Operativos I** (6º semestre).

---

## 📋 Índice

1. [Descripción](#descripción)
2. [Estructura de Directorios](#estructura-de-directorios)
3. [Requisitos](#requisitos)
4. [Cómo usar](#cómo-usar)
5. [Contenido de cada Módulo](#contenido-de-cada-módulo)

   * [PCL/Proyectos](#pclproyectos)
   * [PCL/Pruebas](#pclpruebas)
   * [PCL/Varios](#pclvarios)
6. [Ejemplos de comandos](#ejemplos-de-comandos)

---

## 📖 Descripción

Este repositorio contiene los ejercicios y prácticas realizadas en el curso de **Sistemas Operativos I**, impartido en el sexto semestre de la carrera de Informática. Incluye:

* Documentación de configuración y entorno de trabajo.
* Prácticas de programación en C y scripts de automatización.
* Simulaciones de procesos y manejo de recursos.
* Archivos de prueba y ejemplos adicionales.

---

## 🗂 Estructura de Directorios

````plaintext
└── Sistemas-Operativos-I
    ├── PCL
    │   ├── bin
    │   ├── dev
    │   │   └── CO2
    │   ├── Proyectos
    │   │   ├── P01
    │   │   │   ├── MendozaCasarrubiaRosendoEden_EntornoDeTrabajo.pdf
    │   │   │   └── MendozaCasarrubiaRosendoEden_IntroduccionalosSO.pdf
    │   │   ├── P02
    │   │   │   ├── A02-3
    │   │   │   │   ├── cencriptador
    │   │   │   │   ├── cencriptador.c
    │   │   │   │   ├── errores
    │   │   │   │   ├── MCPV
    │   │   │   │   ├── MCPV.c
    │   │   │   │   ├── salida_cifrada
    │   │   │   │   ├── salida-descifrada
    │   │   │   │   ├── stee
    │   │   │   │   ├── stee.c
    │   │   │   │   └── test.sh
    │   │   │   ├── A02-4
    │   │   │   │   ├── descifrador
    │   │   │   │   ├── descifrador.c
    │   │   │   │   └── salida-descifrada
    │   │   │   ├── MCPV
    │   │   │   └── MCPV.c
    │   │   └── P03
    │   │       └── A03.1
    │   │           ├── genera_paralelo.sh
    │   │           ├── genera_secuencia.sh
    │   │           ├── sim_CO2
    │   │           ├── sim_CO2.c
    │   │           ├── sim_H2O
    │   │           ├── sim_H2O.c
    │   │           ├── sim_multi
    │   │           ├── sim_multi.c
    │   │           ├── sim_pos
    │   │           └── sim_pos.c
    │   ├── Pruebas
    │   │   └── Probabilidades
    │   └── Varios
    │       └── Otros.txt
    └── README.md
````

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
   cd Proyectos/P03/A03.1
   gcc -o sim_multi sim_multi.c -pthread
   ./sim_multi
   ```

---

## 📂 Contenido de cada Módulo


### `PCL/Proyectos`

* **P01**:

  * `IntroduccionalosSO.pdf`: Guía de introducción a Sistemas Operativos.
  * `EntornoDeTrabajo.pdf`: Configuración del entorno de desarrollo.
* **P02**: Prácticas de cifrado y descifrado en C

  * `A02-3/`: Cifrado de archivos (`cencriptador`, `MCPV`, etc.)
  * `A02-4/`: Descifrado de datos.
* **P03**: Simulación de procesos

  * `A03.1/`: Scripts para generar ejecución en paralelo y secuencial, hilos.

### `PCL/Pruebas`

* `Probabilidades`: Archivos de prueba de cálculos de probabilidad.

### `PCL/Varios`

* `Otros.txt`: Notas varias y recursos adicionales.

---
