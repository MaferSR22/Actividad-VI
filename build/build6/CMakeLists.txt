# Versión mínima requerida de CMake
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(OLED_Display_Project)

# Establecer el estándar de C (C11 en este caso)
set(CMAKE_C_STANDARD 11)

# Añadir los archivos fuente
set(SOURCES
    main.c
    hardware_i2c.c
    oled_display.c
)

# Incluir directorios para encabezados
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

# Crear el ejecutable
add_executable(OLED_Display_Project ${SOURCES})

# Enlazar librerías del sistema si es necesario
# En sistemas Linux, podrías necesitar enlazar la librería I2C.
# target_link_libraries(OLED_Display_Project i2c)  # Descomentar si es necesario en tu sistema.

