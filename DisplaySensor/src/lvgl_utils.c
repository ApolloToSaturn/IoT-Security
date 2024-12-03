#include "lvgl_utils.h"
#include <lvgl.h>
#include "hbrslogo_bw.h"
#include <zephyr/kernel.h>

void init_lvgl(void) {
    lv_init();
}

lv_obj_t *create_label(const char *initial_text) {
    lv_obj_t *label = lv_label_create(lv_scr_act());
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
    lv_label_set_text(label, initial_text);
    return label;
}

void update_label(lv_obj_t *label, const char *new_text) {
    lv_label_set_text(label, new_text);
}

void show_logo(void) {
    lv_obj_t *img = lv_img_create(lv_scr_act());
    lv_img_set_src(img, &hbrslogo_bw);
    lv_obj_align(img, LV_ALIGN_CENTER, 0, 0);

    // Display sofort aktualisieren
    lv_task_handler();
    lv_refr_now(NULL);

    // Pause, um das Logo sichtbar zu halten
    k_sleep(K_SECONDS(5));

    // Logo entfernen
    lv_obj_del(img);

    // Änderungen verarbeiten, nachdem das Logo entfernt wurde
    lv_task_handler();
}