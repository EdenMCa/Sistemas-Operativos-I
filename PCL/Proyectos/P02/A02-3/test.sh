#!/bin/bash
./stee < ~/Eden_Casarrubia/Sexto_semestre/Sistemas_Operativos/PCL/dev/CO2 | ~/Eden_Casarrubia/Sexto_semestre/Sistemas_Operativos/PCL/Proyectos/P02/A02-3/./MCPV > para_cifrar
./cencriptador < para_cifrar salida_cifrada
rm para_cifrar
echo "Resultado exitoso"
