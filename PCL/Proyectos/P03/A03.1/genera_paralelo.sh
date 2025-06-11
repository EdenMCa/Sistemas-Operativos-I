#!/bin/bash

# Inicio de medición del tiempo total en nanosegundos
start_time=$(date +%s%N)

# Ejecutar procesos en paralelo
~/Eden_Casarrubia/Sexto_semestre/Sistemas_Operativos/PCL/Proyectos/P03/A03.1/sim_H2O &
pid1=$!
~/Eden_Casarrubia/Sexto_semestre/Sistemas_Operativos/PCL/Proyectos/P03/A03.1/sim_CO2 &
pid2=$!
~/Eden_Casarrubia/Sexto_semestre/Sistemas_Operativos/PCL/Proyectos/P03/A03.1/sim_pos &
pid3=$!

wait $pid1 $pid2 $pid3  # Esperar a que terminen todos los procesos

# Cálculo del tiempo total en segundos con 3 decimales
end_time=$(date +%s%N)
elapsed_ns=$((end_time - start_time))
elapsed_seconds=$(echo "scale=3; $elapsed_ns / 1000000000" | bc -l)

# Mostrar resumen de tiempos en el formato solicitado
echo -e "\nResumen de tiempos:"
echo "----------------------------------------------"
echo "Tiempo total del script: ${elapsed_seconds} segundos"
echo "----------------------------------------------"
