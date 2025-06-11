#!/bin/bash

# Inicio de medición del tiempo total
start_time=$(date +%s.%N)

# Ejecutar los programas con medición individual
~/Eden_Casarrubia/Sexto_semestre/Sistemas_Operativos/PCL/Proyectos/P03/A03.1/sim_H2O
~/Eden_Casarrubia/Sexto_semestre/Sistemas_Operativos/PCL/Proyectos/P03/A03.1/sim_CO2
~/Eden_Casarrubia/Sexto_semestre/Sistemas_Operativos/PCL/Proyectos/P03/A03.1/sim_pos

# Cálculo del tiempo total
end_time=$(date +%s.%N)
elapsed_time=$(echo "$end_time - $start_time" | bc)

# Mostrar resumen de tiempos
echo -e "\nResumen de tiempos:"
echo "----------------------------------------------"
echo "Tiempo total del script: $(printf "%.3f" $elapsed_time) segundos"
echo "----------------------------------------------"
