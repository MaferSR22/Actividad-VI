#include "hardware_i2c.h"  // Biblioteca personalizada para manejar I2C
#include "oled_display.h"  // Biblioteca personalizada para la pantalla OLED

// Definir la dirección I2C del OLED (depende del hardware, comúnmente 0x3C o 0x3D)
#define OLED_ADDRESS 0x3C

// Función principal
int main() {
    // Inicializar la interfaz I2C
    i2c_init();
    
    // Inicializar la pantalla OLED
    oled_init(OLED_ADDRESS);
    
    // Limpiar la pantalla antes de escribir
    oled_clear();

    // Configurar el tamaño de la fuente (por ejemplo, 8x8 píxeles)
    oled_set_font_size(1); // tamaño de fuente pequeño para que el texto completo se ajuste

    // Escribir "María Fernanda" en la primera línea (posición y ajuste de acuerdo al tamaño de pantalla)
    oled_set_cursor(0, 0);  // Fila 0, Columna 0
    oled_write_string("Maria Fernanda");

    // Escribir "Sandoval Romero" en la segunda línea
    oled_set_cursor(0, 16); // Fila 2 (8 pix por línea, ajustado a tu pantalla)
    oled_write_string("Sandoval Romero");

    // Actualizar la pantalla para reflejar los cambios
    oled_display_update();

    return 0;
}


