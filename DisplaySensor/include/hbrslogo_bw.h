#ifndef HBRSLOGO_BW_H
#define HBRSLOGO_BW_H

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_HBRSLOGO_BW
#define LV_ATTRIBUTE_IMG_HBRSLOGO_BW
#endif

extern const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_HBRSLOGO_BW uint8_t hbrslogo_bw_map[];
extern const lv_img_dsc_t hbrslogo_bw;

#endif // HBRSLOGO_BW_H
