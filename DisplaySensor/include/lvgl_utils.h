#ifndef LVGL_UTILS_H
#define LVGL_UTILS_H

#include <lvgl.h>

// Initialisiert LVGL
void init_lvgl(void);

// Erstellt ein Label mit Initialtext
lv_obj_t *create_label(const char *initial_text);

// Aktualisiert den Text eines Labels
void update_label(lv_obj_t *label, const char *new_text);


void show_logo(void);

#endif // LVGL_UTILS_H
